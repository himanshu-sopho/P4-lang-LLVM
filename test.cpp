/*
 * test.cpp
 *
 *  Created on: 30-May-2018
 *      Author: hishukl2
 */

#include <iostream>
#include <string>
#include "IncludeFiles/P416BaseVisitor.h"
#include "IncludeFiles/P416Parser.h"
#include "IncludeFiles/P416Visitor.h"
#include "IncludeFiles/P416Lexer.h"
#include "IncludeFiles/P416BaseListener.h"
#include "IR/Value.h"
#include "IR/Function.h"
#include "IR/IRBuilder.h"
#include "IR/LLVMContext.h"
#include "IR/Module.h"
#include <map>
#include <iterator>
#include <cstdio>
#include <cstring>
#include <typeindex>
#include <typeinfo>
using namespace llvm;
using namespace std;
using namespace antlr4;

map <string,struct SimpleVariable> typedefMap;
map <string, struct SimpleVariable> :: iterator itr;
map <string, int> errorCodeMap;
map <string, int> matchKindCodeMap;
map <string, llvm::PointerType*> controlPointerMap;
map <string, map <string, int> >enumCodeMap;
map <string,struct SimpleVariable> structMap; 
int errorCount=0;
int enumCount=0;
int matchKindCount=0;
int var_count = 0;

static LLVMContext context;
llvm::Module* module = new llvm::Module("top", context);
llvm::IRBuilder<> builder(context);


struct SimpleVariable
{
	bool isSigned=0;
	bool isBool = 0;
	bool isError = 0;
	int Width=0;
	long long int Value=0;
};

class variable_info{
public:
	string name;
	int width;
	int value;
	bool Signed;
	string type;
	multimap <std::string,class variable_info*> children ;
public:
	variable_info(string variable_name,string variable_type="",bool if_signed=true,int set_width = -1, int set_value = -1){
		name = variable_name;
		value = set_value;
		Signed = if_signed;
		width = set_width;
		type = variable_type;
	}
};

struct parameterlist_and_control_name{
	string control_name;
	vector<map<string,struct SimpleVariable>>parameterlist;
};

std::multimap <std::string,class variable_info* > table;
std::multimap<std::string, class variable_info * > * table_ptr = &table;
string curr_type="";
std::multimap<std::string,class variable_info*>::iterator iter;
void print_map(multimap<std::string,class variable_info*> m){
	std::multimap <std::string,class variable_info* >::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout << it->first << " " /*<< it->second->name << " "*/ << it->second->type << " " << it->second->value << " " << it->second->width << " " << it->second->Signed<< "\n" ;
		std::multimap <std::string,class variable_info* > child_map = it->second->children;
		if(child_map.begin()==child_map.end()){
			cout << "no children" << endl;
		}
		else{
			cout << "Children : \n";
			print_map(child_map);
		}
	}
}

class MyDeclarationVisitor:public P416BaseVisitor
{
	public:

		antlrcpp::Any visitStructFieldList(P416Parser::StructFieldListContext *ctx) override {
			string rString;
			vector<llvm::Type *> mem_list;
			// llvm::StructType *structType = llvm::StructType::create(context, "struct.node");
			// llvm::PointerType *pstructType = llvm::PointerType::get(structType, 0); // pointer to RaviGCObject
			// std::vector<llvm::Type *> elements;
			//elements.push_back(pstructType);
			// elements.push_back(llvm::Type::getInt8Ty(context));
			// elements.push_back(llvm::Type::getInt8Ty(context));
			// structType->setBody(elements);
	// 		errs() << "hi\n\n\n\n\n" <<*structType ;
	// module->getOrInsertGlobal("hey", structType);
			int n = ctx->structField().size();
			for(int i=0;i<n;i++){
				struct SimpleVariable struct_var = visit(ctx->structField(i)).as<struct SimpleVariable>();
				if(struct_var.Width > 0)
					mem_list.push_back(llvm::Type::getIntNTy(context,struct_var.Width));
			}
			// structType->setBody(elements);
			// var_count++;
			// string add_name = to_string(var_count);
			// string struct_base = "struct_";
			// string new_name = struct_base+add_name;
			//module->getOrInsertGlobal(new_name, structType);
			//cout << "StructfieldList" << ":" <<rString<<endl;
			return mem_list;
		}

		antlrcpp::Any visitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) override
		{
			string rString = ctx->ERROR()->toString();
			rString += ctx->LCURL()->toString();
			vector<string> ilist = visit(ctx->identifierList());
			rString += ctx->RCURL()->toString();

			for (int i=0;i<ilist.size();i++)
			{
				errorCodeMap.insert(pair<string,int>(ilist[i],errorCount++));
			}
			// for (auto &it : errorCodeMap)
			// {
			// 	cout << it.first << " " << it.second <<endl;
			// }
			// cout << "--------------------\n";
			return rString;
		}

		antlrcpp::Any visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) override 
		{
			vector<string> ilist = visit(ctx->identifierList());
			for (int i=0;i<ilist.size();i++)
			{
				matchKindCodeMap.insert(pair<string,int>(ilist[i],matchKindCount++));
			}
			cout << "-------matchkindmap-------------\n";	
			for (auto &it : matchKindCodeMap)
			{
				cout << it.first << " " << it.second <<endl;
			}
			cout << "--------------------\n";	
			return nullptr;
		}

		antlrcpp::Any visitIdentifierList(P416Parser::IdentifierListContext *ctx) override
		{
			string rString = visit(ctx->name(0));
			
			int vector_size = ctx->COMMA().size();
			vector <string> MatchErrorEnum ;
			MatchErrorEnum.push_back(rString);

			for (int i=0;i< vector_size;i++)
			{
				rString += ctx->COMMA(i)->toString();
				string name = visit(ctx->name(i+1)).as<string>();
				rString += name;
				MatchErrorEnum.push_back(name);
			}
			return MatchErrorEnum;
		}

		antlrcpp::Any visitName(P416Parser::NameContext *ctx) override
		{
			string rString = "";
			if (ctx->nonTypeName()!=NULL)
				rString = visit(ctx->nonTypeName()).as<string>();
			if(ctx->IDENTIFIER() !=NULL)
				rString += ctx->IDENTIFIER()->toString();
			if(ctx->ERROR() !=NULL)
				rString += ctx->ERROR()->toString();
			if(ctx->EXTRACT() !=NULL)
				rString += ctx->EXTRACT()->toString();
			if(ctx->APPLY() !=NULL)
				rString += ctx->APPLY()->toString();

			return rString;
		}

		antlrcpp::Any visitNonTypeName(P416Parser::NonTypeNameContext *ctx) override
		{
			string rString = "";
			if(ctx->ACTIONS()!= NULL)
				rString += ctx->ACTIONS()->toString();
			if(ctx->IDENTIFIER()!= NULL)
				rString += ctx->IDENTIFIER()->toString();
			if(ctx->APPLY()!= NULL)
				rString += ctx->APPLY()->toString();
			if(ctx->KEY()!= NULL)
				rString += ctx->KEY()->toString();
			if(ctx->STATE()!= NULL)
				rString += ctx->STATE()->toString();
			return rString;
		}

		antlrcpp::Any visitSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) override
		{
			struct SimpleVariable *temp;
			temp = dynamic_cast<struct SimpleVariable *> (ctx->typeRef());
			//if (temp != nullptr){
				auto a = visit(ctx->typeRef()).as<struct SimpleVariable>();
				typedefMap.insert(pair <string, struct SimpleVariable> (ctx->name()->getText(),a));
			//}

			return visitChildren(ctx);
		}

		antlrcpp::Any visitTypeRef(P416Parser::TypeRefContext *ctx) override
		{
			string typeRefString = ctx->getText();
//			string rString="";
//			if (ctx->baseType() != nullptr)
//				rString += visit(ctx->baseType()).as<string>();
//			if (ctx->typeName() != nullptr)
//				rString += visit(ctx->typeName()).as<string>();
//			if (ctx->specializedType() != nullptr)
//				rString += visit(ctx->specializedType()).as<string>();
//			if (ctx->headerStackType() != nullptr)
//				rString += visit(ctx->headerStackType()).as<string>();
//			if (ctx->tupleType() != nullptr)
//				rString += visit(ctx->tupleType()).as<string>();
			if (ctx->baseType() != nullptr)
			{
				struct SimpleVariable temp=  visit(ctx->baseType()).as<struct SimpleVariable>();
				return temp;
			}
			else if (typedefMap.find(typeRefString) != typedefMap.end())
			{
				struct SimpleVariable temp = typedefMap.find(typeRefString)->second;
				return temp;
			}
			else	
			{
				struct SimpleVariable ps ;
				ps.Width = -1;
				return ps;
			}
			//return rString;
		}

		antlrcpp::Any visitBoolType(P416Parser::BoolTypeContext *ctx) override
		{
			struct SimpleVariable a;
			a.isBool = true;
			a.Width = 8;
			return a;
		}

		antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *ctx) override
		{
			struct SimpleVariable a;
			a.isError = true;
			a.Width =-1;
			return a;
		}

		antlrcpp::Any visitBitType(P416Parser::BitTypeContext *ctx) override
		{
			//cout << "bit"<<endl;
			struct SimpleVariable a;
			a.isSigned = false;
			a.Width = 1;
			return a;
		}

		antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *ctx) override
		{
			struct SimpleVariable a;
			a.isSigned = false;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

		antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) override
		{
			struct SimpleVariable a;
			a.isSigned = true;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

		antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) override
		{
			struct SimpleVariable a;
			a.isSigned = true;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

		antlrcpp::Any visitTypeName(P416Parser::TypeNameContext *ctx) override
		{
			string rString="";
			if (ctx->prefixedType() != nullptr)
				rString += visit(ctx->prefixedType()).as<string>();
			return rString;
		}

		antlrcpp::Any visitPrefixedType(P416Parser::PrefixedTypeContext *ctx) override
		{
			string rString="";
			if(ctx->IDENTIFIER() !=NULL)
				rString += ctx->IDENTIFIER()->toString();
			if(ctx->dotPrefix() != nullptr)
			{
				rString += visit(ctx->dotPrefix()).as<string>();
				rString += ctx->IDENTIFIER()->toString();
			}
			if(ctx->ERROR() !=NULL)
				rString += ctx->ERROR()->toString();
			return rString;
		}

		antlrcpp::Any visitDotPrefix(P416Parser::DotPrefixContext *ctx) override
		{
			string rString=ctx->DOT()->toString();
			return rString;
		}

		antlrcpp::Any visitSpecializedType(P416Parser::SpecializedTypeContext *ctx) override
		{
			string rString="";
			rString += visit(ctx->prefixedType()).as<string>();
			rString += ctx->LT()->toString();
			rString += visit(ctx->typeArgumentList()).as<string>();
			rString += ctx->GT()->toString();
			return rString;
		}

		antlrcpp::Any visitHeaderStackType(P416Parser::HeaderStackTypeContext *ctx) override
		{
			string rString="";
			rString += visit(ctx->typeName()).as<string>();
			rString += ctx->LBRKT()->toString();
			rString += visit(ctx->expression()).as<string>();
			rString += ctx->RBRKT()->toString();
			return rString;
		}

		antlrcpp::Any visitTupleType(P416Parser::TupleTypeContext *ctx) override
		{
			string rString="";
			rString += visit(ctx->TUPLE()).as<string>();
			rString += ctx->LT()->toString();
			rString += visit(ctx->typeArgumentList()).as<string>();
			rString += ctx->GT()->toString();
			return rString;
		}

		antlrcpp::Any visitInitializer(P416Parser::InitializerContext *ctx) override
		{
			int val=-1;
			P416Parser::IntegerContext * temp;
			temp = dynamic_cast<P416Parser::IntegerContext *> (ctx->expression());
			if(temp!=nullptr){
				val = visit(ctx->expression()).as<int>();
				return val;
			}
			return val;
		}

		antlrcpp::Any visitInteger(P416Parser::IntegerContext *ctx) override
		{
			return visit(ctx->number()).as<int>();
		}

		antlrcpp::Any visitNumber(P416Parser::NumberContext *ctx) override{

			int rString=0;
			if(ctx->decimalNumber()!=nullptr){
				rString = visit(ctx->decimalNumber()).as<int>();
			}
			else if(ctx->octalNumber()!=nullptr){
				rString=visit(ctx->octalNumber()).as<int>();
			}
			else if(ctx->binaryNumber()!=nullptr){
				rString=visit(ctx->binaryNumber()).as<int>();
			}
			else if(ctx->hexNumber()!=nullptr){
				rString=visit(ctx->hexNumber()).as<int>();
			}
			else if(ctx->realNumber()!=nullptr){
				rString=visit(ctx->realNumber()).as<int>();
			}
			return rString;
		}
		antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *ctx) override{

			string rString;
			rString += ctx->Decimal_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				sign++;
			}
			else if(rString[sign]=='w'){
				sign++;
			}
			else{
				sign = 0;
			}
			int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2));
			return intValue;
		}

		antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *ctx) override{

			string rString;
			rString += ctx->Octal_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				sign++;
			}
			else if(rString[sign]=='w'){
				sign++;
			}
			else{
				sign = 0;
			}
			int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,8);
			return intValue;
		}

		antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *ctx) override{

			string rString;
			rString += ctx->Binary_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				sign++;
			}
			else if(rString[sign]=='w'){
				sign++;
			}
			else{
				sign = 0;
			}
			int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,2);
			return intValue;
		}

		antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *ctx) override{

			string rString;
			rString += ctx->Hex_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				sign++;
			}
			else if(rString[sign]=='w'){
				sign++;
			}
			else{
				sign = 0;
			}
			int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2),0,16);
			return intValue;
		}

		antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *ctx) override{

			string rString;
			rString += ctx->Real_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				sign++;
			}
			else if(rString[sign]=='w'){
				sign++;
			}
			else{
				sign = 0;
			}
			int intValue = stoi(rString.substr(sign,rString.length()-sign));
			return intValue;
		}

		antlrcpp::Any visitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) override
		{
			string rString  = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString = ctx->CONST()->toString();
			string typeRefString = ctx->typeRef()->getText();
			rString += typeRefString ;
			string name = visit(ctx->name()).as<string>();
			rString += name;
			rString += ctx->ASSIGN()->toString();
			int x = visit(ctx->initializer()).as<int>();
			if (typedefMap.find(typeRefString) == typedefMap.end() )
				;
			else
			{
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
				auto *L = ConstantInt::get(Type::getIntNTy(context,actualType.Width),x);
				Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,actualType.Width),nullptr,name);
				builder.CreateStore(L,tmp,false);
			}
			return nullptr;
		}
		
		antlrcpp::Any visitOptAnnotations(P416Parser::OptAnnotationsContext *ctx) override
		{
			string rString = "";
			if (ctx->annotations()!=nullptr)
			{
				rString += visit(ctx->annotations()).as<string>();
			}
			return rString;
		}
		
		antlrcpp::Any visitAnnotations(P416Parser::AnnotationsContext *ctx) override
		{
			string rString = visit(ctx->annotation(0)).as<string>();
			for (int i=1,len=ctx->annotation().size();i<len;i++)
			{
				rString += visit(ctx->annotation(i)).as<string>();
			}
			return rString;
		}
		antlrcpp::Any visitSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) override
		{
			return ctx->getText();
		}
		antlrcpp::Any visitComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) override
		{
			return ctx->getText();
		}
		antlrcpp::Any visitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) override
		{
			string rString = "";
			if (ctx->headerTypeDeclaration() != nullptr)
				rString += visit(ctx->headerTypeDeclaration()).as<string>();
			if (ctx->headerUnionDeclaration() != nullptr)
				rString += visit(ctx->headerUnionDeclaration()).as<string>();
			if (ctx->structTypeDeclaration() != nullptr)
				rString += visit(ctx->structTypeDeclaration()).as<string>();
			if (ctx->enumDeclaration() != nullptr)
				rString += visit(ctx->enumDeclaration()).as<string>();
			return rString;
		}
		antlrcpp::Any visitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) override
		{
			string rString = "";
			vector <llvm::Type*> mem_list;
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->HEADER()->toString();
			//rString += visit(ctx->name()).as<string>();
			string struct_name = visit(ctx->name()).as<string>();
			struct_name = rString+"."+struct_name;
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr)
				mem_list = visit(ctx->structFieldList()).as<vector<llvm::Type*>>();

			llvm::StructType *structType = llvm::StructType::create(context, struct_name);
			llvm::PointerType *pstructType = llvm::PointerType::get(structType, 0); // pointer to RaviGCObject
			std::vector<llvm::Type *> elements;
			// elements.push_back(pstructType);
			// elements.push_back(llvm::Type::getInt8Ty(context));
			// elements.push_back(llvm::Type::getInt8Ty(context));
			structType->setBody(mem_list);
			var_count++;
			string add_name = to_string(var_count);
			string struct_base = "struct_";
			string new_name = struct_base+add_name;
			module->getOrInsertGlobal(new_name, structType);
			cout << "StructfieldList" << ":" <<rString<<endl;
			rString += ctx->RCURL()->toString();
			return rString;
		}
		antlrcpp::Any visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) override
		{
			string rString = "";
			vector <llvm::Type*> mem_list;
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->HEADER_UNION()->toString();
			
			//rString += visit(ctx->name()).as<string>();
			string struct_name = visit(ctx->name()).as<string>();
			struct_name = rString+"."+struct_name;
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr)
				mem_list = visit(ctx->structFieldList()).as<vector<llvm::Type*>>();

			llvm::StructType *structType = llvm::StructType::create(context, struct_name);
			llvm::PointerType *pstructType = llvm::PointerType::get(structType, 0); // pointer to RaviGCObject
			std::vector<llvm::Type *> elements;
			// elements.push_back(pstructType);
			// elements.push_back(llvm::Type::getInt8Ty(context));
			// elements.push_back(llvm::Type::getInt8Ty(context));
			structType->setBody(mem_list);
			var_count++;
			string add_name = to_string(var_count);
			string struct_base = "struct_";
			string new_name = struct_base+add_name;
			module->getOrInsertGlobal(new_name, structType);
			cout << "StructfieldList" << ":" <<rString<<endl;
			rString += ctx->RCURL()->toString();
			return rString;
		}
		antlrcpp::Any visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) override
		{
			string rString = "";
			vector <llvm::Type*> mem_list;
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->STRUCT()->toString();
			//rString += visit(ctx->name()).as<string>();
			string struct_name = visit(ctx->name()).as<string>();
			struct_name = rString+"."+struct_name;
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr)
				mem_list = visit(ctx->structFieldList()).as<vector<llvm::Type*>>();

			llvm::StructType *structType = llvm::StructType::create(context, struct_name);
			llvm::PointerType *pstructType = llvm::PointerType::get(structType, 0); // pointer to RaviGCObject
			std::vector<llvm::Type *> elements;
			// elements.push_back(pstructType);
			// elements.push_back(llvm::Type::getInt8Ty(context));
			// elements.push_back(llvm::Type::getInt8Ty(context));
			structType->setBody(mem_list);
			var_count++;
			string add_name = to_string(var_count);
			string struct_base = "struct_";
			string new_name = struct_base+add_name;
			module->getOrInsertGlobal(new_name, structType);
			//cout << "StructfieldList" << ":" <<rString<<endl;
			rString += ctx->RCURL()->toString();
			return rString;
		}
		antlrcpp::Any visitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) override
		{
			enumCount = 0;
			string rString = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->ENUM()->toString();
			string enumName = visit(ctx->name()).as<string>();
			rString += enumName;
			rString += ctx->LCURL()->toString();

			vector<string> ilist = visit(ctx->identifierList());
			rString += ctx->RCURL()->toString();

			map<string,int> tempMap;
			for (int i=0;i<ilist.size();i++)
			{
				tempMap.insert(pair<string,int>(ilist[i],enumCount++));
			}
			enumCodeMap.insert(pair<string, map<string,int>>(enumName,tempMap));

			cout << "---enumcodemap--------------------\n";
			for (auto &it : enumCodeMap)
			{
				cout << it.first <<endl; 
				for (auto &it2: it.second)
					cout << it2.first << " " << it2.second <<endl;
			}
			cout << "--------------------\n";
			rString += ctx->RCURL()->toString();
			return rString;
		}

		antlrcpp::Any visitStructField(P416Parser::StructFieldContext *ctx) override
		{
			/*bit<4> var; ipv4 var; */
			string rString  = "";
			struct SimpleVariable typeRefStr;
						//rString += typeRefString ;
			string name = visit(ctx->name()).as<string>();
			rString += name;
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>(); 
			string typeRefString = ctx->typeRef()->getText();
			if (typedefMap.find(typeRefString) == typedefMap.end() )
				typeRefStr = visit(ctx->typeRef()).as<struct SimpleVariable>();

			
			else
			{
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
				return actualType;
			}
			return typeRefStr;
		}
		antlrcpp::Any visitVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) override
		{
			string rString = "";
			if (ctx->annotations()==nullptr || ctx->annotations()->isEmpty());
			else
				rString +=visit(ctx->annotations()).as<string>();
			string typeRefString = ctx->typeRef()->getText();
			rString += typeRefString ;
			string name = visit(ctx->name()).as<string>();
			rString += name;
			if (typedefMap.find(typeRefString) == typedefMap.end() )
				;
			else
			{
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
				Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,actualType.Width),nullptr,name);
			}
			if (ctx->optInitializer() != nullptr)
				rString += visit(ctx->optInitializer()).as<string>();

			return rString;
		}

		antlrcpp::Any visitParameter(P416Parser::ParameterContext *ctx) override
		{
			/*ignoring the case of direction for now*/
			// in case where typeref is not a basetype but a typedef type declared to be base type
			string typeRefString  = ctx->typeRef()->getText();
			// if (typedefMap.find(typeRefString) != typedefMap.end() )
			// {
			// 	struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
			// 	cout << "\ntemp width : \n"<<actualType.Width<<endl ;
			// 	return actualType;
			// }
			auto temp2 = visit(ctx->typeRef());
			struct SimpleVariable temp1 = temp2.as<struct SimpleVariable>();
			return temp1;
		}	
		antlrcpp::Any visitParameterList(P416Parser::ParameterListContext *ctx) override
		{
			vector<struct SimpleVariable> paralist;
			
			for(int i=0,len=ctx->parameter().size();i<len;i++)
			{
				auto temp1 = visit(ctx->parameter(i)).as<struct SimpleVariable>();
				if (temp1.Width == -1)
					continue;
				paralist.push_back(temp1);
			}
			return paralist;	
		}

		antlrcpp::Any visitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) override
		{
			//string controlname = visit(ctx->name()).as<string>();
			if (ctx->parameterList() != nullptr)
			{
				vector<struct SimpleVariable> paralist = visit(ctx->parameterList()).as<vector<struct SimpleVariable>>();
				string name = visit(ctx->name()).as<string>();
				string control_name = "control."+name;
				vector<llvm::Type*> type_list;
				for (int i=0,len=paralist.size();i<len;i++)
				{
					type_list.push_back(llvm::Type::getIntNTy(context,paralist[i].Width));
				}
				llvm::StructType *structType = llvm::StructType::create(context, control_name);
				llvm::PointerType *pstructType = llvm::PointerType::get(structType, 0); 

				controlPointerMap.insert(pair<string,llvm::PointerType*>(name,pstructType));
				structType->setBody(type_list);
				module->getOrInsertGlobal(control_name, structType);
				return paralist;
			}
			vector<struct SimpleVariable> para;
			return para;
		}

		antlrcpp::Any visitControlDeclaration(P416Parser::ControlDeclarationContext *ctx) override
		{
			string rString = "";
			vector<struct SimpleVariable> paralist = visit(ctx->controlTypeDeclaration()).as<vector<struct SimpleVariable>>();
			// for (int i=0,len=paralist.size();i<len;i++)
			// 	cout << "\nwidth1 : \n" << paralist[i].Width <<endl;
			if (ctx->controlLocalDeclarations()!=nullptr)
				visit(ctx->controlLocalDeclarations());	

			return nullptr;
		}				  

		antlrcpp::Any visitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) override
		{
			for(int i=0,len=ctx->controlLocalDeclaration().size();i<len;i++)
				visit(ctx->controlLocalDeclaration(i));	
			return nullptr;	
		}

		antlrcpp::Any visitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) override
		{
			if (ctx->constantDeclaration()!=nullptr)
				visit(ctx->constantDeclaration());
			else if (ctx->actionDeclaration()!=nullptr)
				visit(ctx->actionDeclaration());
			// else if (ctx->tableDeclaration()!=nullptr)
			// 	visit(ctx->tableDeclaration());
			// else if (ctx->instantiation()!=nullptr)
			// 	visit(ctx->instantiation());
			// else if (ctx->variableDeclaration()!=nullptr)
			// 	visit(ctx->variableDeclaration());		
			return nullptr;	
		}

		antlrcpp::Any visitActionDeclaration(P416Parser::ActionDeclarationContext *ctx) override
		{	

			string actionName = ctx->name()->getText();
			if(ctx->parameterList() != nullptr)
			{
				vector<struct SimpleVariable> paralist  = visit(ctx->parameterList()).as<vector<struct SimpleVariable>>();
				vector<llvm::Type*> type_list;
				for (int i=0,len=paralist.size();i<len;i++)
				{
					//cout << "\nwidth2 : \n" << paralist[i].Width ;
					type_list.push_back(llvm::Type::getIntNTy(context,paralist[i].Width));
				}

				int flag = 0;
				string control_name="";
				if (ctx->parent !=NULL)
					if (ctx->parent->parent !=NULL)
						if (ctx->parent->parent->parent !=NULL)
						{
							flag = 1;
							//cout << endl<<"parent : "<<ctx->parent->parent->parent->children[0]->getText()<<endl;
							string name =  ctx->parent->parent->parent->children[0]->getText();
							int i = 7;
							
							while(name[i]!='(')
							{
								control_name += name[i];
								i++;
							}
							//cout << endl << "control : " <<control_name <<endl;
						}
				if (flag==1)
				{
					llvm::PointerType *temp  =controlPointerMap.find(control_name)->second;
					type_list.push_back(temp);
					flag=0;
				}			
				llvm::FunctionType *funcType = llvm::FunctionType::get(builder.getVoidTy(),type_list,false);
				llvm::Function *mainFunc = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, actionName, module);
				llvm::BasicBlock *entry = llvm::BasicBlock::Create(context, "label2", mainFunc);							
				return nullptr;
			}
			else
			{
				int flag = 0;
				string control_name="";
				vector<llvm::Type*> type_list;
				if (ctx->parent !=NULL)
					if (ctx->parent->parent !=NULL)
						if (ctx->parent->parent->parent !=NULL)
						{
							flag = 1;
							//cout << endl<<"parent : "<<ctx->parent->parent->parent->children[0]->getText()<<endl;
							string name =  ctx->parent->parent->parent->children[0]->getText();
							int i = 7;
							
							while(name[i]!='(')
							{
								control_name += name[i];
								i++;
							}
							//cout << endl << "control : " <<control_name <<endl;
						}
				if (flag==1)
				{
					llvm::PointerType *temp  =controlPointerMap.find(control_name)->second;
					type_list.push_back(temp);
					flag=0;
				}					
				llvm::FunctionType *funcType = llvm::FunctionType::get(builder.getVoidTy(),type_list, false);
				llvm::Function *mainFunc = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, actionName, module);		
				llvm::BasicBlock *entry = llvm::BasicBlock::Create(context, "label2", mainFunc);
				return nullptr;
			}
		}	  
};


int main(int argc,char* argv[])
{
	std::ifstream stream;
	stream.open(argv[1]);

	llvm::FunctionType *funcType = llvm::FunctionType::get(builder.getInt32Ty(), false);
	llvm::Function *mainFunc =
	  llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, "main", module);
	llvm::BasicBlock *entry = llvm::BasicBlock::Create(context, "label1", mainFunc);
	builder.SetInsertPoint(entry);

	llvm::Value *helloWorld = builder.CreateGlobalStringPtr("hello world!\n");

	std::vector<llvm::Type *> putsArgs;
	putsArgs.push_back(builder.getInt8Ty()->getPointerTo());
	llvm::ArrayRef<llvm::Type*>  argsRef(putsArgs);

	llvm::FunctionType *putsType =
	  llvm::FunctionType::get(builder.getInt32Ty(), argsRef, false);
	llvm::Constant *putsFunc = module->getOrInsertFunction("puts", putsType);
	Value *tmp=builder.CreateCall(putsFunc, helloWorld);

	ANTLRInputStream input(stream);
	P416Lexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	P416Parser parser(&tokens);
	P416Parser::P4programContext* tree = parser.p4program();
	MyDeclarationVisitor visitor;
	visitor.visit(tree);
	builder.CreateRet(tmp);

	module->dump();
	return 0;
}


