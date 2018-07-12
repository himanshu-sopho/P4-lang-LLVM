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
map <string, int> enumCodeMap;
int errorCount=0;
int enumCount=0;
int matchKindCount=0;

static LLVMContext context;
llvm::Module* module = new llvm::Module("top", context);
llvm::IRBuilder<> builder(context);
llvm::FunctionType *funcType = llvm::FunctionType::get(builder.getInt32Ty(), false);

struct SimpleVariable
{
	bool isSigned=0;
	bool isBool = 0;
	bool isError = 0;
	unsigned int Width=0;
	long long int Value=0;
};

class MyDeclarationVisitor:public P416BaseVisitor
{
	public:

		antlrcpp::Any visitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) override
		{
			string rString = ctx->ERROR()->toString();
			rString += ctx->LCURL()->toString();
			vector<string> ilist = visit(ctx->identifierList());
			//rString += ilist;
			rString += ctx->RCURL()->toString();

			cout <<endl;
			for (int i=0;i<ilist.size();i++)
			{
				errorCodeMap.insert(pair<string,int>(ilist[i],errorCount++));
			}
			for (auto &it : errorCodeMap)
			{
				cout << it.first << " " << it.second <<endl;
			}
			cout << "--------------------\n";
			return rString;
		}

		antlrcpp::Any visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) override 
		{
			vector<string> ilist = visit(ctx->identifierList());
			//rString += ilist;
			cout <<endl;
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
			//cout << "typedef\n\n";
			struct SimpleVariable *temp;
			temp = dynamic_cast<struct SimpleVariable *> (ctx->typeRef());
	//		if (temp ==nullptr)
	//				cout << "\ndushvaar\n\n";
			//if (temp != nullptr){


				auto a = visit(ctx->typeRef()).as<struct SimpleVariable>();
				//cout << "cast successful: type : " <<typeid(a).name()<<endl<<typeid(temp).name()<<endl;
				//cout << "value: " <<a.Value<<" width: "<<a.Width<<endl;
				//cout << "\n\n----------cs2-------\n\n";
				typedefMap.insert(pair <string, struct SimpleVariable> (ctx->name()->getText(),a));
			//}

			return visitChildren(ctx);
		}
//		antlrcpp::Any visitDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) override
//		{
//			typedefMap.insert(pair <string, string> (ctx->name()->getText(),ctx->derivedTypeDeclaration()->getText()));
//			return visitChildren(ctx);
//		}

		antlrcpp::Any visitTypeRef(P416Parser::TypeRefContext *ctx) override
		{
		//	return visitChildren(ctx);
			string rString = ctx->getText();
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
//			cout << "gettting out of typeref" <<endl;
			//struct SimpleVariable *tmp;
			if (ctx->baseType() != nullptr)
			{
				struct SimpleVariable temp=  (visit(ctx->baseType()).as<struct SimpleVariable>());
				return temp;
			//	(visit(ctx->baseType()));
			}
			return rString;
		}

		antlrcpp::Any visitBoolType(P416Parser::BoolTypeContext *ctx) override
		{
		//	string rString="";
		//	if(ctx->BOOL() !=NULL)
		//		rString += ctx->BOOL()->toString();
			//cout << "bool"<<endl;
			struct SimpleVariable a;
			a.isBool = true;
			a.Width = 8;
			return a;
			//return rString;
		}
//		antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *ctx) override
//		{
//			string rString="";
//			if(ctx->ERROR() !=NULL)
//				rString += ctx->ERROR()->toString();
//			return rString;
//		}
		antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *ctx) override
		{
			//cout << "error"<<endl;
			struct SimpleVariable a;
			a.isError = true;
			return a;
		}

//		antlrcpp::Any visitBitType(P416Parser::BitTypeContext *ctx) override
//		{
//			string rString="";
//			if(ctx->BIT() !=NULL)
//				rString += ctx->BIT()->toString();
//			return rString;
//		}
		antlrcpp::Any visitBitType(P416Parser::BitTypeContext *ctx) override
		{
			//cout << "bit"<<endl;
			struct SimpleVariable a;
			a.isSigned = false;
			a.Width = 1;
			return a;
		}
//		antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *ctx,string name) override
//		{
//			cout << "VisitBitsize type is  runnint" << endl;
//			string rString="";
//			if(ctx->BIT() !=NULL)
//				rString += ctx->BIT()->toString();
//			if(ctx->LT() !=NULL)
//				rString += ctx->LT()->toString();
//			if(ctx->number() !=nullptr)
//				int intValue = visit(ctx->number()).as<int>();
//				//rString += visit(ctx->number()).as<int>();
//			if(ctx->GT() !=NULL)
//				rString += ctx->GT()->toString();
//			return rString;
//		}
		antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *ctx) override
		{
			//cout << "bitsize"<<endl;
			struct SimpleVariable a;
			a.isSigned = false;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

//		antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) override
//		{
//			string rString="";
//			if(ctx->INT() !=NULL)
//				rString += ctx->INT()->toString();
//			if(ctx->LT() !=NULL)
//				rString += ctx->LT()->toString();
//			if(ctx->number() !=nullptr)
//				int intValue = visit(ctx->number()).as<int>();
//				//rString += visit(ctx->number()).as<int>();
//			if(ctx->GT() !=NULL)
//				rString += ctx->GT()->toString();
//			return rString;
//		}
		antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) override
		{
			//cout << "intsize"<<endl;
			struct SimpleVariable a;
			a.isSigned = true;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

//		antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) override
//		{
//			string rString="";
//			if(ctx->VARBIT() !=NULL)
//				rString += ctx->VARBIT()->toString();
//			if(ctx->LT() !=NULL)
//				rString += ctx->LT()->toString();
//			if(ctx->number() !=nullptr)
//				int intValue = visit(ctx->number()).as<int>();
//				//rString += visit(ctx->number()).as<int>();
//			if(ctx->GT() !=NULL)
//				rString += ctx->GT()->toString();
//			return rString;
//		}
		antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) override
		{
			//cout << "varbitsize"<<endl;
			struct SimpleVariable a;
			a.isSigned = true;
			a.Width = visit(ctx->number()).as<int>();
			return a;
		}

		antlrcpp::Any visitTypeName(P416Parser::TypeNameContext *ctx) override
		{
			//cout << "dbg2"<<endl;
			string rString="";
//			antlrcpp::Any temp = visit(ctx->prefixedType());
//			if(temp.isNotNull())
//				rString += temp.as<string>();
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
			//string temp="initializer";
			//cout << "type of expression : " << endl ;
			P416Parser::IntegerContext * temp;
			temp = dynamic_cast<P416Parser::IntegerContext *> (ctx->expression());
			if(temp!=nullptr){
				val = visit(ctx->expression()).as<int>();
				//cout << "Return number from expression : " << val << "\n\n\n\n";
				return val;
			}
			return val;
		}

		antlrcpp::Any visitInteger(P416Parser::IntegerContext *ctx) override
		{
			//cout << "i am going in integer\n\n";
			return visit(ctx->number()).as<int>();
		}


	/*	antlrcpp::Any visitNumber(P416Parser::NumberContext *ctx) override
		{
			string rString="";
			if(ctx->decimalNumber() !=nullptr)
				rString += visit(ctx->decimalNumber()).as<string>();
			if(ctx->octalNumber() !=nullptr)
				rString += visit(ctx->octalNumber()).as<string>();
			if(ctx->binaryNumber() !=nullptr)
				rString += visit(ctx->binaryNumber()).as<string>();
			if(ctx->hexNumber() !=nullptr)
				rString += visit(ctx->hexNumber()).as<string>();
			if(ctx->realNumber() !=nullptr)
				rString += visit(ctx->realNumber()).as<string>();
			return rString;
		}

		antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *ctx) override
		{
			string rString="";
			return ctx->Hex_number()->toString();
		}
		antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *ctx) override
		{
			string rString="";
			return ctx->Binary_number()->toString();
		}
		antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *ctx) override
		{
			string rString="";
			return ctx->Real_number()->toString();
		}
		antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *ctx) override
		{
			string rString="";
			return ctx->Octal_number()->toString();
		}
		antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *ctx) override
		{
			string rString="";
			return ctx->Decimal_number()->toString();
		} */

		/*sanket*/
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
			//cout << "Number" << ":" <<rString << endl;
			//string temp = "32";
			return rString;
		}
		antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *ctx) override{

			string rString;
			rString += ctx->Decimal_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				//cout << "signed" <<endl;
				sign++;
				//sign = 2;
			}
			else if(rString[sign]=='w'){
				//cout << "unsigned" << endl;
				sign++;
				//sign = 2;
			}
			else{
				sign = 0;
			}
			//cout << "rString length : " << rString.length() <<" " << rString<< endl;
			int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2));
			//cout <<"Int value : " << intValue <<endl<<endl;
			//cout << "DecimalNumber" <<":" <<rString<<endl;
			//return rString;
			return intValue;
		}

		antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *ctx) override{

			string rString;
			rString += ctx->Octal_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				//cout << "signed" <<endl;
				sign++;
				//sign = 2;
			}
			else if(rString[sign]=='w'){
				//cout << "unsigned" << endl;
				sign++;
				//sign = 2;
			}
			else{
				sign = 0;
			}
			//cout << "rString length : " << rString.length() <<" " << rString<< endl;
			int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,8);
			//cout <<"Int value : " << intValue <<endl<<endl;
			//cout << "OctalNumber" <<":" <<rString<<endl;
			//return rString;
			return intValue;
		}

		antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *ctx) override{

			string rString;
			rString += ctx->Binary_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				//cout << "signed" <<endl;
				sign++;
				//sign = 2;
			}
			else if(rString[sign]=='w'){
				//cout << "unsigned" << endl;
				sign++;
				//sign = 2;
			}
			else{
				sign = 0;
			}
			//cout << "rString length : " << rString.length() <<" " << rString<< endl;
			int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,2);
			//cout <<"Int value : " << intValue <<endl<<endl;
			//cout << "BinaryNumber" <<":" <<rString<<endl;
			//return rString;
			return intValue;
		}

		antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *ctx) override{

			string rString;
			rString += ctx->Hex_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			if(rString[sign]=='s' ){
				//cout << "signed" <<endl;
				sign++;
				//sign = 2;
			}
			else if(rString[sign]=='w'){
				//cout << "unsigned" << endl;
				sign++;
				//sign = 2;
			}
			else{
				sign = 0;
			}
			//cout << "rString length : " << rString.length() <<" " << rString<< endl;
			int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2),0,16);
			//cout <<"Int value : " << intValue <<endl<<endl;
			//cout << "HexNumber" <<":" <<rString<<endl;
			//return rString;
			return intValue;
		}

		antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *ctx) override{

			string rString;
			rString += ctx->Real_number()->toString();
			rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
			int sign = 0;
			while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
			//cout << "Sign value : char_sign " << sign << " : " << rString[sign] << endl;
			if(rString[sign]=='s' ){
				//cout << "signed" <<endl;
				sign++;
				//sign = 2;
			}
			else if(rString[sign]=='w'){
				//cout << "unsigned" << endl;
				sign++;
				//sign = 2;
			}
			else{
				sign = 0;
			}
			//cout << "Sign value : char_sign " << sign << " : " << rString[sign] << endl;
			//cout << "rString length : " << rString.length() <<" " << rString << endl;
			int intValue = stoi(rString.substr(sign,rString.length()-sign));
			//cout <<"Int value : " << intValue <<endl<<endl;
			//cout << "RealNumber" <<":" <<rString<<endl;
			//return rString;
			return intValue;
		}
		/*sanket ;*/
		antlrcpp::Any visitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) override
		{
			string rString  = "";
			//cout << "constant declaration  : " << ctx->getText()<<endl;
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			//string rString = ctx->optAnnotations()->getText();
			rString = ctx->CONST()->toString();
			string typeRefString = ctx->typeRef()->getText();
			rString += typeRefString ;
			string name = visit(ctx->name()).as<string>();
			rString += name;
			rString += ctx->ASSIGN()->toString();
			int x = visit(ctx->initializer()).as<int>();
			//cout << "\nx : " <<x <<endl;
			//cout << "\nlength : " << typedefMap.size()<<endl;
				for (itr = typedefMap.begin(); itr != typedefMap.end(); ++itr)
				{
					//cout  <<  '\t' << itr->first << '\t'<< itr->second.Width;
				}
//			unsigned int s;
//			if (x[1]== 'x' || x[1]=='X')
//				s = std::stoul(x, nullptr, 16);
//			else if (x[1] == 'b' || x[1]=='B')
//				s = std::stoul(x, nullptr, 2);
//			else if (x[0]== '0')
//				s = std::stoul(x, nullptr, 8);
//			else
//				s = std::stoul(x, nullptr, 10);
//			cout << "\n---\n---\n----\n";
			if (typedefMap.find(typeRefString) == typedefMap.end() )
				;
			else
			{
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
				//cout << "\n\n\nfound\n"<<typeid(actualType).name()<<"\n\n\n";
				auto *L = ConstantInt::get(Type::getIntNTy(context,actualType.Width),x);
				Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,actualType.Width),nullptr,name);
				builder.CreateStore(L,tmp,false);

//				if(actualType.compare(0,4,"bit<")==0)
//				{
//
//					string widthString =  actualType.substr(4,actualType.length()-5);
//					if (widthString[1] == 'x' || widthString[1]=='X');
//					else if (widthString[1]== 'b' || widthString[1]=='B');
//					else if (widthString[0]== '0');
//
//					else
//					{
//						unsigned int width = stoul(widthString);
//						cout << "width : " <<width <<endl;
//						auto *L = ConstantInt::get(Type::getIntNTy(context,width),x);
//						Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,width),nullptr,name);
//						builder.CreateStore(L,tmp,false);					}
//				}

			}

//			auto *L = ConstantInt::get(Type::getIntNTy(context,5),s);
//			Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,5),nullptr);
//			builder.CreateStore(L,tmp,false);
			//cout << "\n\nfounf\n";
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
			string rString  = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->HEADER()->toString();
			if (ctx->name() != nullptr)
				rString += visit(ctx->name()).as<string>();
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr )
				rString += visit(ctx->structFieldList()).as<string>();
			rString += ctx->RCURL()->toString();

			return ctx->getText();
		}
		antlrcpp::Any visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) override
		{
			string rString = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->HEADER_UNION()->toString();
			rString += visit(ctx->name()).as<string>();
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr)
				rString += visit(ctx->structFieldList()).as<string>();
			rString += ctx->RCURL()->toString();


			return rString;
		}
		antlrcpp::Any visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) override
		{
			string rString = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->STRUCT()->toString();
			rString += visit(ctx->name()).as<string>();
			rString += ctx->LCURL()->toString();
			if (ctx->structFieldList() != nullptr)
				rString += visit(ctx->structFieldList()).as<string>();
			rString += ctx->RCURL()->toString();
			return rString;
		}
		antlrcpp::Any visitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) override
		{
			string rString = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			rString += ctx->ENUM()->toString();
			rString += visit(ctx->name()).as<string>();
			rString += ctx->LCURL()->toString();

			vector<string> ilist = visit(ctx->identifierList());
			//rString += ilist;
			rString += ctx->RCURL()->toString();

			cout <<endl;
			for (int i=0;i<ilist.size();i++)
			{
				enumCodeMap.insert(pair<string,int>(ilist[i],enumCount++));
			}
			cout << "---enumcodemap--------------------\n";
			for (auto &it : enumCodeMap)
			{
				cout << it.first << " " << it.second <<endl;
			}
			cout << "--------------------\n";
			rString += ctx->RCURL()->toString();
			return rString;
		}
		antlrcpp::Any visitStructFieldList(P416Parser::StructFieldListContext *ctx) override
		{
			string rString = visit(ctx->structField(0)).as<string>();
			for (int i=1,len=ctx->structField().size();i<len;i++)
			{
				rString += visit(ctx->structField(i)).as<string>();
			}
			return rString;
		}

		antlrcpp::Any visitStructField(P416Parser::StructFieldContext *ctx) override
		{
			string rString  = "";
			if (ctx->optAnnotations()==nullptr || ctx->optAnnotations()->isEmpty());
			else
				rString +=visit(ctx->optAnnotations()).as<string>();
			string typeRefString = ctx->typeRef()->getText();
			rString += typeRefString ;
			string name = visit(ctx->name()).as<string>();
			rString += name;
			if (typedefMap.find(typeRefString) == typedefMap.end() )
				;
			else
			{
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;

				/*if(actualType.compare(0,4,"bit<")==0)
				{
					string widthString =  actualType.substr(4,actualType.length()-5);
					if (widthString[1] == 'x' || widthString[1]=='X');
					else if (widthString[1]== 'b' || widthString[1]=='B');
					else if (widthString[0]== '0');
					else
					{
						unsigned int width = stoul(widthString);
						cout << "width : " <<width <<endl;
						Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,width),nullptr,name);
					}
				}*/
				//cout << "\n\n\nfound\n"<<typeid(actualType).name()<<"\n\n\n";
				Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,actualType.Width),nullptr,name);
			}
			return rString;
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
				//string actualType = typedefMap.find(typeRefString)->second;
				/*if(actualType.compare(0,4,"bit<")==0)
				{
					string widthString =  actualType.substr(4,actualType.length()-5);
					if (widthString[1] == 'x' || widthString[1]=='X');
					else if (widthString[1]== 'b' || widthString[1]=='B');
					else if (widthString[0]== '0');
					else
					{
						unsigned int width = stoul(widthString);
						cout << "width : " <<width <<endl;
						Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,width),nullptr,name);
					}
				} */
				struct SimpleVariable actualType = typedefMap.find(typeRefString)->second;
				//cout << "\n\n\nfound\n"<<typeid(actualType).name()<<"\n\n\n";
				Value *tmp = builder.CreateAlloca(Type::getIntNTy(context,actualType.Width),nullptr,name);
			}
			if (ctx->optInitializer() != nullptr)
				rString += visit(ctx->optInitializer()).as<string>();

			return rString;
		}
};
//
//class MyDefinitionVisitor:public P416BaseVisitor{
//
//public:
//	antlrcpp::Any visitAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) override
//	{
//		lvalue ASSIGN  expression SEMI;
//
//	}
//};

int main()
{
	std::ifstream stream;
	stream.open("/Users/hishukl2/Documents/p4antlr/sample.p4");

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
//	builder.CreateAlloca(Type::getInt32Ty(context),nullptr,"foo");
//


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


