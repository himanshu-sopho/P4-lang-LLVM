#include "../../test2/src/AssignmentVisitor.h"

#include <antlr4-runtime.h>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <stdlib.h>

using namespace llvmp4;
using namespace antlr4;
using namespace std;



antlrcpp::Any emitLLVMP4::visitP4program(P416Parser::P4programContext *ctx) {

	string rString;
	int n = ctx->declaration().size();
	int j=0;
	for (int i=0;i<n;i++){
		rString += visit(ctx->declaration(i)).as<string>();
		if(ctx->SEMI(j)!=nullptr){
			rString += ctx->SEMI(j++)->toString();
		}
	}
	cout << "P4program" << " : ";
	cout << rString << endl;

	return rString;
}

antlrcpp::Any emitLLVMP4::visitDeclaration(P416Parser::DeclarationContext *ctx) {
	string rString;
	rString += (ctx->constantDeclaration())? visit(ctx->constantDeclaration()).as<string>() : "";
	rString += (ctx->externDeclaration())? visit(ctx->externDeclaration()).as<string>() : "";
	rString += (ctx->actionDeclaration())? visit(ctx->actionDeclaration()).as<string>() : "";
	rString += (ctx->parserDeclaration())? visit(ctx->parserDeclaration()).as<string>() : "";
	rString += (ctx->typeDeclaration())? visit(ctx->typeDeclaration()).as<string>() : "";
	rString += (ctx->controlDeclaration())? visit(ctx->controlDeclaration()).as<string>() : "";
	rString += (ctx->instantiation())? visit(ctx->instantiation()).as<string>() : "";
	rString += (ctx->errorDeclaration())? visit(ctx->errorDeclaration()).as<string>() : "";
	rString += (ctx->matchKindDeclaration())? visit(ctx->matchKindDeclaration()).as<string>() : "";
	cout << "Delcaration" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx){
	//optAnnotations CONST typeRef name ASSIGN initializer SEMI;

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->CONST()->toString();
	rString += visit(ctx->typeRef()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->ASSIGN()->toString();
	rString += visit(ctx->initializer()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "ConstantDeclaration"<< " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *ctx) {
	//optAnnotations EXTERN nonTypeName optTypeParameters? LCURL methodPrototypes? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->EXTERN()->toString();
	rString += visit(ctx->nonTypeName()).as<string>();
	rString += (ctx->optTypeParameters()!=nullptr)? visit(ctx->optTypeParameters()).as<string>() : "";
	rString += ctx->LCURL()->toString();
	rString += (ctx->methodPrototypes()!=nullptr)? visit(ctx->methodPrototypes()).as<string>() : "" ;
	rString += ctx->RCURL()->toString();
	cout << "ExternObjectDeclaration" << " : "<< rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *ctx) {
	//optAnnotations EXTERN functionPrototype SEMI

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->EXTERN()->toString();
	rString += visit(ctx->functionPrototype()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "ExternFunctionDeclaration" << " : "<< rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitActionDeclaration(P416Parser::ActionDeclarationContext *ctx){
	//optAnnotations ACTION name LPARAN parameterList? RPARAN blockStatement

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->ACTION()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->parameterList()!=nullptr)? visit(ctx->parameterList()).as<string>():"";
	rString += ctx->RPARAN()->toString();
	rString += visit(ctx->blockStatement()).as<string>();
	cout << "ActionDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserDeclaration(P416Parser::ParserDeclarationContext *ctx){
	//parserTypeDeclaration optConstructorParameters? LCURL parserLocalElements? parserStates RCURL

	string rString;
	rString += visit(ctx->parserTypeDeclaration()).as<string>();
	rString += (ctx->optConstructorParameters()!=nullptr)? visit(ctx->optConstructorParameters()).as<string>():"";
	rString += ctx->LCURL()->toString();
	rString += (ctx->parserLocalElements()!=nullptr)? visit(ctx->parserLocalElements()).as<string>():"";
	rString += visit(ctx->parserStates()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "ParserDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTypeDeclaration(P416Parser::TypeDeclarationContext *ctx) {

	string rString;
	rString += (ctx->derivedTypeDeclaration()!=nullptr)? visit(ctx->derivedTypeDeclaration()).as<string>() : "";
	rString += (ctx->typedefDeclaration()!=nullptr)? visit(ctx->typedefDeclaration()).as<string>() : "";
	if(ctx->SEMI()!=nullptr){
		rString += (ctx->parserTypeDeclaration()!=nullptr)? visit(ctx->parserTypeDeclaration()).as<string>() : "";
		rString += (ctx->controlTypeDeclaration()!=nullptr)? visit(ctx->controlTypeDeclaration()).as<string>() : "";
		rString += (ctx->packageTypeDeclaration()!=nullptr)? visit(ctx->packageTypeDeclaration()).as<string>() : "";
		rString += ctx->SEMI()->toString();
	}
	cout << "TypeDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitControlDeclaration(P416Parser::ControlDeclarationContext *ctx){
	//controlTypeDeclaration optConstructorParameters? LCURL controlLocalDeclarations? APPLY controlBody RCURL

	string rString;
	rString += visit(ctx->controlTypeDeclaration()).as<string>();
	rString += (ctx->optConstructorParameters()!=nullptr)? visit(ctx->optConstructorParameters()).as<string>() : "";
	rString += ctx->LCURL()->toString();
	rString += (ctx->controlLocalDeclarations()!=nullptr)? visit(ctx->controlLocalDeclarations()).as<string>() : "";
	rString += ctx->APPLY()->toString();
	rString += visit(ctx->controlBody()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "ControlDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitInstantiation(P416Parser::InstantiationContext *ctx) {
	//annotations? typeRef LPARAN argumentList? RPARAN name SEMI

	string rString;
	rString += (ctx->annotations()!=nullptr)? visit(ctx->annotations()).as<string>() : "";
	rString += visit(ctx->typeRef()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "Instantiation" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx){
	//ERROR LCURL identifierList RCURL

	string rString;
	rString += ctx->ERROR()->toString();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->identifierList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "ErrorDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) {
	//MATCH_KIND LCURL identifierList RCURL

	string rString;
	rString += ctx->MATCH_KIND()->toString();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->identifierList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "MatchKindDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOptAnnotations(P416Parser::OptAnnotationsContext *ctx) {

	string rString;
	rString += (ctx->annotations()!=nullptr)? visit(ctx->annotations()).as<string>() : "";
	cout << "OptAnnotation" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTypeRef(P416Parser::TypeRefContext *ctx) {

	string rString;
	rString += (ctx->baseType()!=nullptr)? visit(ctx->baseType()).as<string>() : "";
	rString += (ctx->typeName()!=nullptr)? visit(ctx->typeName()).as<string>() : "";
	rString += (ctx->specializedType()!=nullptr)? visit(ctx->specializedType()).as<string>() : "";
	rString += (ctx->headerStackType()!=nullptr)? visit(ctx->headerStackType()).as<string>() : "";
	rString += (ctx->tupleType()!=nullptr)? visit(ctx->tupleType()).as<string>() : "";
	cout << "TypeRef" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitName(P416Parser::NameContext *ctx) {

	string rString;
	rString += (ctx->nonTypeName()!=nullptr)? visit(ctx->nonTypeName()).as<string>() : "";
	rString += (ctx->IDENTIFIER()!=nullptr)? ctx->IDENTIFIER()->toString() : "";
	rString += (ctx->ERROR()!=nullptr)? ctx->ERROR()->toString() : "";
	rString += (ctx->EXTRACT()!=nullptr)? ctx->EXTRACT()->toString() : "";
	rString += (ctx->APPLY()!=nullptr)? ctx->APPLY()->toString() : "";
	cout << "Name" << " : " <<  rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitInitializer(P416Parser::InitializerContext *ctx) {

	string rString;
	rString += visit(ctx->expression()).as<string>();						//expression is too big so will be done later
	cout << "Initializer" << " : " <<  rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNonTypeName(P416Parser::NonTypeNameContext *ctx) {

	string rString;
	rString += (ctx->IDENTIFIER()!=nullptr)? ctx->IDENTIFIER()->toString() : "";
	rString += (ctx->APPLY()!=nullptr)? ctx->APPLY()->toString() : "";
	rString += (ctx->KEY()!=nullptr)? ctx->KEY()->toString() : "";
	rString += (ctx->ACTIONS()!=nullptr)? ctx->ACTIONS()->toString() : "";
	rString += (ctx->STATE()!=nullptr)? ctx->STATE()->toString() : "";
	cout << "NonTypeName" << " : "<<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOptTypeParameters(P416Parser::OptTypeParametersContext *ctx) {
	//LT typeParameterList GT

	string rString;
	rString += ctx->LT()->toString();
	rString += visit(ctx->typeParameterList()).as<string>();
	rString += ctx->GT()->toString();
	cout << "OptTypeParameters" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMethodPrototypes(P416Parser::MethodPrototypesContext *ctx) {

	string rString;
	int n = ctx->methodPrototype().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->methodPrototype(i)).as<string>();
	}
	cout << "MethodPrototypes" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitFunctionPrototype(P416Parser::FunctionPrototypeContext *ctx) {
	//typeOrVoid name optTypeParameters? LPARAN parameterList? RPARAN

	string rString;
	rString += visit(ctx->typeOrVoid()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += (ctx->optTypeParameters()!=nullptr)?visit(ctx->optTypeParameters()).as<string>():"";
	rString += ctx->LPARAN()->toString();
	rString += (ctx->parameterList()!=nullptr)? visit(ctx->parameterList()).as<string>():"";
	rString += ctx->RPARAN()->toString();
	cout << "FunctionPrototype" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParameterList(P416Parser::ParameterListContext *ctx) {

	string rString;
	rString += visit(ctx->parameter(0)).as<string>();
	int n = ctx->COMMA().size();
	for(int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->parameter(0)).as<string>();
	}
	cout<< "ParameterList" << " : " <<  rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBlockStatement(P416Parser::BlockStatementContext *ctx) {
	//optAnnotations LCURL statOrDeclList? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += (ctx->statOrDeclList()!=nullptr)? visit(ctx->statOrDeclList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "BlockStatement" << " : "  <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *ctx) {
	//optAnnotations PARSER name optTypeParameters? LPARAN parameterList? RPARAN

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->PARSER()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += (ctx->optTypeParameters()!=nullptr)? visit(ctx->optTypeParameters()).as<string>() : "";
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->parameterList()).as<string>();
	cout << "ParserTypeDeclaration" <<" : " << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOptConstructorParameters(P416Parser::OptConstructorParametersContext *ctx) {
	//LPARAN parameterList? RPARAN;

	string rString;
	rString += ctx->LPARAN()->toString();
	rString += (ctx->parameterList()!=nullptr)? visit(ctx->parameterList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "OptConstructorParameters" <<" : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserLocalElements(P416Parser::ParserLocalElementsContext *ctx) {

	string rString;
	int n = ctx->parserLocalElement().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->parserLocalElement(i)).as<string>();
	}
	cout << "ParserLocalElements" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserStates(P416Parser::ParserStatesContext *ctx){

	string rString;
	int n = ctx->parserState().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->parserState(i)).as<string>();
	}
	cout << "ParserStates" << " : " <<  rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) {

	string rString;
	rString += (ctx->headerTypeDeclaration()!=nullptr)? visit(ctx->headerTypeDeclaration()).as<string>() : "";
	rString += (ctx->headerUnionDeclaration()!=nullptr)? visit(ctx->headerUnionDeclaration()).as<string>() : "";
	rString += (ctx->structTypeDeclaration()!=nullptr)? visit(ctx->structTypeDeclaration()).as<string>() : "";
	rString += (ctx->enumDeclaration()!=nullptr)? visit(ctx->enumDeclaration()).as<string>() : "";
	cout << "DerivedTypeDeclaration" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) {
	//annotations? TYPEDEF typeRef name SEMI

	string rString;
	rString += (ctx->annotations()!=nullptr)? visit(ctx->annotations()).as<string>() : "";
	rString += ctx->TYPEDEF()->toString();
	rString += visit(ctx->typeRef()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "SimpleTypeDef" << " : " <<  rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) {
	//annotations? TYPEDEF derivedTypeDeclaration name SEMI

	string rString;
	rString += (ctx->annotations()!=nullptr)? visit(ctx->annotations()).as<string>() : "";
	rString += ctx->TYPEDEF()->toString();
	rString += visit(ctx->derivedTypeDeclaration()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->SEMI()->toString();
	cout<<"DerivedTypeDef" << " : " << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) {
	//optAnnotations CONTROL name optTypeParameters? LPARAN parameterList? RPARAN

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->CONTROL()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += (ctx->optTypeParameters()!=nullptr)? visit(ctx->optTypeParameters()).as<string>() : "";
	rString += ctx->LPARAN()->toString();
	rString += (ctx->parameterList()!=nullptr)? visit(ctx->parameterList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "ControlTypeDeclaration"<<" : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *ctx) {
	//optAnnotations PACKAGE name optTypeParameters? LPARAN parameterList? RPARAN

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->PACKAGE()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += (ctx->optTypeParameters()!=nullptr)? visit(ctx->optTypeParameters()).as<string>() : "";
	rString += ctx->LPARAN()->toString();
	rString += (ctx->parameterList()!=nullptr)? visit(ctx->parameterList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "PackageTypeDeclaration" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) {

	string rString;
	int n = (ctx->controlLocalDeclaration()).size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->controlLocalDeclaration(i)).as<string>();
	}
	cout << "ControlLocalDeclarations" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitControlBody(P416Parser::ControlBodyContext *ctx) {

	string rString;
	rString += visit(ctx->blockStatement()).as<string>();
	cout << "ControlBody" << " : " << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitAnnotations(P416Parser::AnnotationsContext *ctx) {

	string rString;
	int n = ctx->annotation().size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->annotation(i)).as<string>();
	}
	cout << "Annotations" << " : " <<  rString<< endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitArgumentList(P416Parser::ArgumentListContext *ctx) {
	//argument (COMMA argument)*

	string rString;
	rString += visit(ctx->argument(0)).as<string>();
	int n = ctx->COMMA().size();
	for(int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->argument(i+1)).as<string>();
	}
	cout << "ArgumentList" <<" : "<< rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitIdentifierList(P416Parser::IdentifierListContext *ctx) {
	//name ( COMMA name )*

	string rString;
	rString += visit(ctx->name(0)).as<string>();
	int n = ctx->COMMA().size();
		for(int i=0;i<n;i++){
			rString += ctx->COMMA(i)->toString();
			rString += visit(ctx->name(i+1)).as<string>();
		}
	cout << "IdentifierList" << " : " <<  rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBoolType(P416Parser::BoolTypeContext *ctx) {
	string rString;
	rString += ctx->BOOL()->toString();
	cout << "BoolType" << " : "  <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitErrorType(P416Parser::ErrorTypeContext *ctx)  {
	string rString ;
	rString += ctx->ERROR()->toString();
	cout << "ErrorType" << " : "  <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBitType(P416Parser::BitTypeContext *ctx) {
	string rString ;
	rString += ctx->BIT()->toString() ;
	cout << "BitType" << " : "  << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBitSizeType(P416Parser::BitSizeTypeContext *ctx) {
	string rString;
	rString += ctx->BIT()->toString();
	rString += ctx->LT()->toString();
	cout << 1  << endl;
	//rString += visit(ctx->number()).as<string>();
	int intValue = visit(ctx->number()).as<int>();
	cout << "Return value from ctx->number : " << intValue << endl << endl;
	cout << 1  << endl;
	rString += ctx->GT()->toString();
	cout <<"BitSizeType" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) {
	string rString;
	rString += ctx->INT()->toString();
	rString += ctx->LT()->toString();
	cout << 2 << endl;
	//rString += visit(ctx->number()).as<string>();
	int intValue = visit(ctx->number()).as<int>();
	cout << "Return value from ctx->number : " << intValue << endl << endl;
	cout << 2 << endl;
	rString += ctx->GT()->toString();
	cout << "IntSizeType" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx){
	string rString;
	rString += ctx->VARBIT()->toString();
	rString += ctx->LT()->toString();
	cout << 3 << endl;
	//rString += visit(ctx->number()).as<string>();
	int intValue = visit(ctx->number()).as<int>();
	cout << "Return value from ctx->number : " << intValue << endl << endl;
	cout << 3 << endl;
	rString += ctx->GT()->toString();
	cout << "VarBitSizeType" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTypeName(P416Parser::TypeNameContext *ctx){
	string rString;
	rString += visit(ctx->prefixedType()).as<string>();
	cout << "TypeName" <<" : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSpecializedType(P416Parser::SpecializedTypeContext *ctx) {
	//prefixedType LT typeArgumentList GT

	string rString;
	rString += visit(ctx->prefixedType()).as<string>();
	rString += ctx->LT()->toString();
	rString += visit(ctx->typeArgumentList()).as<string>();
	rString += ctx->GT()->toString();
	cout << "SpecializedType" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitHeaderStackType(P416Parser::HeaderStackTypeContext *ctx){
	// typeName LBRKT expression RBRKT

	string rString;
	rString += visit(ctx->typeName()).as<string>();
	rString += ctx->LBRKT()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RBRKT()->toString();
	cout << "HeaderStackType" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTupleType(P416Parser::TupleTypeContext *ctx) {
	//TUPLE LT typeArgumentList GT;

	string rString;
	rString += ctx->TUPLE()->toString();
	rString += ctx->LT()->toString();
	rString += visit(ctx->typeArgumentList()).as<string>();
	rString += ctx->GT()->toString();
	cout<< "TupleType" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMethodPrototype(P416Parser::MethodPrototypeContext *ctx) {
	//functionPrototype SEMI | IDENTIFIER LPARAN parameterList? RPARAN SEMI

	string rString;
	if(ctx->functionPrototype()!=nullptr){
		rString += visit(ctx->functionPrototype()).as<string>();
	}
	else if(ctx->IDENTIFIER()!=nullptr){
		rString += ctx->IDENTIFIER()->toString();
		rString += ctx->LPARAN()->toString();
		rString += (ctx->parameterList()!=nullptr)?visit(ctx->parameterList()).as<string>():"";
		rString += ctx->RPARAN()->toString();
	}
	rString += ctx->SEMI()->toString();
	cout << "MethodPrototype" << " : " <<  rString << endl;
	return rString;

}

antlrcpp::Any emitLLVMP4::visitTypeParameterList(P416Parser::TypeParameterListContext *ctx) {
	//nonTypeName ( COMMA nonTypeName) *

	string rString;
	rString += visit(ctx->nonTypeName(0)).as<string>();
	int n = ctx->COMMA().size();
	for(int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->nonTypeName(i+1)).as<string>();
	}
	cout << "TypeParameterList" << " : " <<  rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTypeOrVoid(P416Parser::TypeOrVoidContext *ctx) {
	string rString;
	rString += (ctx->VOID()!=nullptr)? ctx->VOID()->toString() : "";
	rString += (ctx->typeRef()!=nullptr)? visit(ctx->typeRef()).as<string>() : "";
	rString += (ctx->nonTypeName()!=nullptr)? visit(ctx->nonTypeName()).as<string>() : "";
	cout << "TypeOrVoid" << " : " <<  rString<< endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParameter(P416Parser::ParameterContext *ctx) {
	//optAnnotations direction? typeRef name

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += (ctx->direction()!=nullptr)? visit(ctx->direction()).as<string>() : "" ;
	rString += visit(ctx->typeRef()).as<string>();
	rString += visit(ctx->name()).as<string>();
	cout << "Parameter" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStatOrDeclList(P416Parser::StatOrDeclListContext *ctx) {
	string rString;
	int n = ctx->statementOrDeclaration().size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->statementOrDeclaration(i)).as<string>();
	}
	cout << "StatOrDeclList" << " : " << rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserLocalElement(P416Parser::ParserLocalElementContext *ctx) {
	string rString;
	rString += (ctx->constantDeclaration()!=nullptr)? visit(ctx->constantDeclaration()).as<string>() : "";
	rString += (ctx->variableDeclaration()!=nullptr)? visit(ctx->variableDeclaration()).as<string>() : "";
	rString += (ctx->instantiation()!=nullptr)? visit(ctx->instantiation()).as<string>() : "";
	cout << "ParserLocalElement" << " : " <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserState(P416Parser::ParserStateContext *ctx) {
	//optAnnotations STATE name LCURL parserStatements? transitionStatement? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->STATE()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += (ctx->parserStatements()!=nullptr)? visit(ctx->parserStatements()).as<string>() : "";
	rString += (ctx->transitionStatement()!=nullptr)? visit(ctx->transitionStatement()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "ParserState" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) {
	//optAnnotations HEADER name LCURL structFieldList? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->HEADER()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += (ctx->structFieldList()!=nullptr)? visit(ctx->structFieldList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "HeaderTypeDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) {
	//optAnnotations HEADER_UNION name LCURL structFieldList? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->HEADER_UNION()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += (ctx->structFieldList()!=nullptr)? visit(ctx->structFieldList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "HeaderUnionDeclaration" << " : " <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) {
	//optAnnotations STRUCT name LCURL structFieldList? RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->STRUCT()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += (ctx->structFieldList()!=nullptr)? visit(ctx->structFieldList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "StructTypeDeclaration" << " : " <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) {
	//optAnnotations ENUM name LCURL identifierList RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->ENUM()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->identifierList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "EnumDeclaration" << " : " <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) {

	string rString;
	rString += (ctx->constantDeclaration()!=nullptr)? visit(ctx->constantDeclaration()).as<string>() : "";
	rString += (ctx->actionDeclaration()!=nullptr)? visit(ctx->actionDeclaration()).as<string>() : "";
	rString += (ctx->tableDeclaration()!=nullptr)? visit(ctx->tableDeclaration()).as<string>() : "";
	rString += (ctx->instantiation()!=nullptr)? visit(ctx->instantiation()).as<string>() : "";
	rString += (ctx->variableDeclaration()!=nullptr)? visit(ctx->variableDeclaration()).as<string>() : "";
	cout << "ControlLocalDeclaration" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) {
	//AT name

	string rString;
	rString += ctx->AT()->toString();
	rString += visit(ctx->name()).as<string>();
	cout << "SimpleAnnotation" << " : " << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) {
	//AT name LPARAN expressionList? RPARAN

	string rString;
	rString += ctx->AT()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->expressionList()!=nullptr)? visit(ctx->expressionList()).as<string>() : "" ;
	rString += ctx->RPARAN()->toString();
	cout << "ComplexAnnotations" << " : " <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitArgument(P416Parser::ArgumentContext *ctx) {

	string rString;
	rString += visit(ctx->expression()).as<string>();
	cout << "Argument" << ":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNumber(P416Parser::NumberContext *ctx) {

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
	cout << "Number" << ":" <<rString << endl;
	//string temp = "32";
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPrefixedType(P416Parser::PrefixedTypeContext *ctx) {

	string rString;
	rString += (ctx->dotPrefix()!=nullptr)? visit(ctx->dotPrefix()).as<string>() : "";
	rString += (ctx->IDENTIFIER()!=nullptr)? ctx->IDENTIFIER()->toString() : "";
	rString += (ctx->ERROR()!=nullptr)? ctx->ERROR()->toString() : "";
	cout << "PrefixedType" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTypeArgumentList(P416Parser::TypeArgumentListContext *ctx) {
	//typeArg (COMMA typeArg)*

	string rString;
	rString += visit(ctx->typeArg(0)).as<string>();
	int n = ctx->COMMA().size();
	for (int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->typeArg(i+1)).as<string>();
	}
	cout << "TypeArgumentList" << ":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitInDirection(P416Parser::InDirectionContext *ctx){
	string rString;
	rString += ctx->IN()->toString();
	cout << "In" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOutDirection(P416Parser::OutDirectionContext *ctx){
	string rString;
	rString += ctx->OUT()->toString();
	cout << "Out" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitInOutDirection(P416Parser::InOutDirectionContext *ctx){
	string rString;
	rString += ctx->INOUT()->toString();
	cout << "InOut" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *ctx) {

	string rString;
	rString += (ctx->variableDeclaration()!=nullptr)? visit(ctx->variableDeclaration()).as<string>() : "";
	rString += (ctx->constantDeclaration()!=nullptr)? visit(ctx->constantDeclaration()).as<string>() : "";
	rString += (ctx->statement()!=nullptr)? visit(ctx->statement()).as<string>() : "";
	rString += (ctx->instantiation()!=nullptr)? visit(ctx->instantiation()).as<string>() : "";
	cout << "StatementOrDeclaration" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) {
	//annotations? typeRef name optInitializer? SEMI

	string rString;
	rString += (ctx->annotations()!=nullptr)? visit(ctx->annotations()).as<string>() : "";
	rString += visit(ctx->typeRef()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += (ctx->optInitializer()!=nullptr)? visit(ctx->optInitializer()).as<string>() : "";
	rString += ctx->SEMI()->toString();
	cout << "VariableDeclaration" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserStatements(P416Parser::ParserStatementsContext *ctx) {
	string rString;
	int n=ctx->parserStatement().size();
	for (int i=0;i<n;i++){
		rString+= visit(ctx->parserStatement(i)).as<string>();
	}
	cout << "ParserStatements" <<":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTransitionStatement(P416Parser::TransitionStatementContext *ctx) {
	// TRANSITION stateExpression

	string rString;
	rString += ctx->TRANSITION()->toString();
	rString += visit(ctx->stateExpression()).as<string>();
	cout << "TransitionStatement" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStructFieldList(P416Parser::StructFieldListContext *ctx) {
	string rString;
	int n = ctx->structField().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->structField(i)).as<string>();
	}
	cout << "StructfieldList" << ":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTableDeclaration(P416Parser::TableDeclarationContext *ctx) {
	//optAnnotations TABLE name LCURL tablePropertyList RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->TABLE()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->tablePropertyList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "TableDeclaration" << ":" <<rString<< endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExpressionList(P416Parser::ExpressionListContext *ctx) {
	//expression (COMMA expression)*

	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	int n=ctx->COMMA().size();
	for(int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->expression(i+1)).as<string>();
	}
	cout << "ExpressionList" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDecimalNumber(P416Parser::DecimalNumberContext *ctx){

	string rString;
	rString += ctx->Decimal_number()->toString();
	rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
	int sign = 0;
	while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
	if(rString[sign]=='s' ){
		cout << "signed" <<endl;
		sign++;
		//sign = 2;
	}
	else if(rString[sign]=='w'){
		cout << "unsigned" << endl;
		sign++;
		//sign = 2;
	}
	else{
		sign = 0;
	}
	cout << "rString length : " << rString.length() <<" " << rString<< endl;
	int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2));
	cout <<"Int value : " << intValue <<endl<<endl;
	cout << "DecimalNumber" <<":" <<rString<<endl;
	//return rString;
	return intValue;
}

antlrcpp::Any emitLLVMP4::visitOctalNumber(P416Parser::OctalNumberContext *ctx){

	string rString;
	rString += ctx->Octal_number()->toString();
	rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
	int sign = 0;
	while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
	if(rString[sign]=='s' ){
		cout << "signed" <<endl;
		sign++;
		//sign = 2;
	}
	else if(rString[sign]=='w'){
		cout << "unsigned" << endl;
		sign++;
		//sign = 2;
	}
	else{
		sign = 0;
	}
	cout << "rString length : " << rString.length() <<" " << rString<< endl;
	int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,8);
	cout <<"Int value : " << intValue <<endl<<endl;
	cout << "OctalNumber" <<":" <<rString<<endl;
	//return rString;
	return intValue;
}

antlrcpp::Any emitLLVMP4::visitBinaryNumber(P416Parser::BinaryNumberContext *ctx){

	string rString;
	rString += ctx->Binary_number()->toString();
	rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
	int sign = 0;
	while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
	if(rString[sign]=='s' ){
		cout << "signed" <<endl;
		sign++;
		//sign = 2;
	}
	else if(rString[sign]=='w'){
		cout << "unsigned" << endl;
		sign++;
		//sign = 2;
	}
	else{
		sign = 0;
	}
	cout << "rString length : " << rString.length() <<" " << rString<< endl;
	int intValue = std::stoi(rString.substr(sign+2,rString.length()-sign-2),0,2);
	cout <<"Int value : " << intValue <<endl<<endl;
	cout << "BinaryNumber" <<":" <<rString<<endl;
	//return rString;
	return intValue;
}

antlrcpp::Any emitLLVMP4::visitHexNumber(P416Parser::HexNumberContext *ctx){

	string rString;
	rString += ctx->Hex_number()->toString();
	rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
	int sign = 0;
	while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
	if(rString[sign]=='s' ){
		cout << "signed" <<endl;
		sign++;
		//sign = 2;
	}
	else if(rString[sign]=='w'){
		cout << "unsigned" << endl;
		sign++;
		//sign = 2;
	}
	else{
		sign = 0;
	}
	cout << "rString length : " << rString.length() <<" " << rString<< endl;
	int intValue = stoi(rString.substr(sign+2,rString.length()-sign-2),0,16);
	cout <<"Int value : " << intValue <<endl<<endl;
	cout << "HexNumber" <<":" <<rString<<endl;
	//return rString;
	return intValue;
}

antlrcpp::Any emitLLVMP4::visitRealNumber(P416Parser::RealNumberContext *ctx){

	string rString;
	rString += ctx->Real_number()->toString();
	rString.erase(std::remove(rString.begin(), rString.end(), '_'), rString.end());
	int sign = 0;
	while(rString[sign]!='s' && rString [sign]!='w' && rString [sign] != '\0' )sign++;
	cout << "Sign value : char_sign " << sign << " : " << rString[sign] << endl;
	if(rString[sign]=='s' ){
		cout << "signed" <<endl;
		sign++;
		//sign = 2;
	}
	else if(rString[sign]=='w'){
		cout << "unsigned" << endl;
		sign++;
		//sign = 2;
	}
	else{
		sign = 0;
	}
	cout << "Sign value : char_sign " << sign << " : " << rString[sign] << endl;
	cout << "rString length : " << rString.length() <<" " << rString << endl;
	int intValue = stoi(rString.substr(sign,rString.length()-sign));
	cout <<"Int value : " << intValue <<endl<<endl;
	cout << "RealNumber" <<":" <<rString<<endl;
	//return rString;
	return intValue;
}

antlrcpp::Any emitLLVMP4::visitTypeArg(P416Parser::TypeArgContext *ctx) {
	string rString;
	rString += (ctx->dontcare()!=nullptr)? visit(ctx->dontcare()).as<string>() : "";
	rString += (ctx->typeRef()!=nullptr)? visit(ctx->typeRef()).as<string>() : "";
	cout << "TypeArg" <<":" << rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) {
	//lvalue ASSIGN  expression SEMI

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->ASSIGN()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->SEMI()->toString();

	cout <<"AssignmentStatement" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitApplyMethodCall(P416Parser::ApplyMethodCallContext *ctx) {
	//lvalue DOT APPLY LPARAN argumentList? RPARAN SEMI

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->DOT()->toString();
	rString += ctx->APPLY()->toString();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->SEMI()->toString();
	cout << "ApplyMethodCall" <<";" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExtractMethodCall(P416Parser::ExtractMethodCallContext *ctx){
	//lvalue DOT EXTRACT (LT typeArgumentList GT)? LPARAN argumentList? RPARAN SEMI

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->DOT()->toString();
	rString += ctx->EXTRACT()->toString();
	if(ctx->LT()!=nullptr){
		rString += ctx->LT()->toString();
		rString += visit(ctx->typeArgumentList()).as<string>();
		rString += ctx->GT()->toString();
	}
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->SEMI()->toString();
	cout<<"ExtractMethodCall" <<";" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *ctx){
	//lvalue LPARAN argumentList? RPARAN SEMI

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->SEMI()->toString();
	cout<< "CallWithoutTypeArgs" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *ctx){
	//lvalue LT typeArgumentList GT LPARAN argumentList? RPARAN SEMI

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->LT()->toString();
	rString += visit(ctx->typeArgumentList()).as<string>();
	rString += ctx->GT()->toString();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->SEMI()->toString();
	cout << "VisitCallWithTypeArgs" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDirectApplication(P416Parser::DirectApplicationContext *ctx){
	//typeName DOT APPLY LPARAN argumentList? RPARAN SEMI

	string rString;
	rString += visit(ctx->typeName()).as<string>();
	rString += ctx->DOT()->toString();
	rString += ctx->APPLY()->toString();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->SEMI()->toString();
	cout << "DirectApplication" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitIfStatement(P416Parser::IfStatementContext *ctx) {
	//IF LPARAN expression RPARAN statement

	string rString;
	rString += ctx->IF()->toString();
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RPARAN()->toString();
	rString += visit(ctx->statement()).as<string>();
	cout << "IfStatement" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitIfElseStatement(P416Parser::IfElseStatementContext *ctx) {
	//IF LPARAN expression RPARAN statement ELSE statement

	string rString;
	rString += ctx->IF()->toString();
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RPARAN()->toString();
	rString += visit(ctx->statement(0)).as<string>();
	rString += ctx->ELSE()->toString();
	rString += visit(ctx->statement(1)).as<string>();
	cout << "IfElseStatement" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitEmptyStatement(P416Parser::EmptyStatementContext *ctx) {
	//SEMI

	string rString;
	rString += ctx->SEMI()->toString();
	cout << "EmptyStatement" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExitStatement(P416Parser::ExitStatementContext *ctx) {
	//EXIT SEMI

	string rString;
	rString += ctx->EXIT()->toString();
	rString += ctx->SEMI()->toString();
	cout << "ExitStatement" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitReturnStatement(P416Parser::ReturnStatementContext *ctx) {
	//RETURN SEMI

	string rString;
	rString += ctx->RETURN()->toString();
	rString += ctx->SEMI()->toString();
	cout << "ReturnStatement" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSwitchStatement(P416Parser::SwitchStatementContext *ctx) {
	//SWITCH LPARAN expression RPARAN LCURL switchCases? RCURL

	string rString;
	rString += ctx->SWITCH()->toString();
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RPARAN()->toString();
	rString += ctx->LCURL()->toString();
	rString += (ctx->switchCases()!=nullptr)? visit(ctx->switchCases()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "SwitchStatement" <<";" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserStatement(P416Parser::ParserStatementContext *ctx) {
	string rString;
	rString += (ctx->assignmentStatement()!=nullptr)? visit(ctx->assignmentStatement()).as<string>() : "";
	rString += (ctx->methodCallStatement()!=nullptr)? visit(ctx->methodCallStatement()).as<string>() : "";
	rString += (ctx->directApplication()!=nullptr)? visit(ctx->directApplication()).as<string>() : "";
	rString += (ctx->parserBlockStatement()!=nullptr)? visit(ctx->parserBlockStatement()).as<string>() : "";
	rString += (ctx->constantDeclaration()!=nullptr)? visit(ctx->constantDeclaration()).as<string>() : "";
	rString += (ctx->variableDeclaration()!=nullptr)? visit(ctx->variableDeclaration()).as<string>() : "";
	cout << "ParserStatement" <<":" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStateExpression(P416Parser::StateExpressionContext *ctx) {

	string rString;
	if(ctx->name()!=nullptr){
		rString += visit(ctx->name()).as<string>();
		rString += ctx->SEMI()->toString();
	}
	else{
		rString += visit(ctx->selectExpression()).as<string>();
	}
	cout<< "StateExpression" <<":" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStructField(P416Parser::StructFieldContext *ctx) {
	//optAnnotations typeRef name SEMI

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += visit(ctx->typeRef()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "StructField" <<":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTablePropertyList(P416Parser::TablePropertyListContext *ctx) {
	string rString;
	int n= ctx->tableProperty().size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->tableProperty(i)).as<string>();
	}
	cout << "TablePropertyList" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDontcare(P416Parser::DontcareContext *ctx) {
	string rString;
	rString += ctx->DONTCARE()->toString();
	cout << "Dontcare" << ":"<<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSwitchCases(P416Parser::SwitchCasesContext *ctx) {
	string rString;
	int n = ctx->switchCase().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->switchCase(i)).as<string>();
	}
	cout << "SwitchCases" << ":" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitParserBlockStatement(P416Parser::ParserBlockStatementContext *ctx) {
	//optAnnotations LCURL parserStatements RCURL

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->parserStatements()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "ParserBlockStatement" << ":" << rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSelectExpression(P416Parser::SelectExpressionContext *ctx) {
	//SELECT LPARAN expressionList? RPARAN LCURL selectCaseList? RCURL

	string rString;
	rString += ctx->SELECT()->toString();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->expressionList()!=nullptr)? visit(ctx->expressionList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	rString += ctx->LCURL()->toString();
	rString += (ctx->selectCaseList()!=nullptr)? visit(ctx->selectCaseList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout <<"SelectExpression" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitKey(P416Parser::KeyContext *ctx){
	//KEY  ASSIGN  LCURL  keyElementList?  RCURL

	string rString;
	rString += ctx->KEY()->toString();
	rString += ctx->ASSIGN()->toString();
	rString += ctx->LCURL()->toString();
	rString += (ctx->keyElementList()!=nullptr)? visit(ctx->keyElementList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "Key" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitActions(P416Parser::ActionsContext *ctx) {
	//ACTIONS  ASSIGN  LCURL  actionList  RCURL

	string rString;
	rString += ctx->ACTIONS()->toString();
	rString += ctx->ASSIGN()->toString();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->actionList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "Actions" <<":"<< rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitConstEntries(P416Parser::ConstEntriesContext *ctx) {
	//CONST ENTRIES ASSIGN LCURL entriesList RCURL

	string rString;
	rString += ctx->CONST()->toString();
	rString += ctx->ENTRIES()->toString();
	rString += ctx->ASSIGN()->toString();
	rString += ctx->LCURL()->toString();
	rString += visit(ctx->entriesList()).as<string>();
	rString += ctx->RCURL()->toString();
	cout << "ConstEntries" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitLocalVariable(P416Parser::LocalVariableContext *ctx) {
	//optAnnotations  CONST  IDENTIFIER  ASSIGN  initializer  SEMI

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	//rString += ctx->CONST()->toString();
	rString += ctx->IDENTIFIER()->toString();
	rString += ctx->ASSIGN()->toString();
	rString += visit(ctx->initializer()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "LocalVariable" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitLocalConstVariable(P416Parser::LocalConstVariableContext *ctx) {
	//optAnnotations  IDENTIFIER  ASSIGN  initializer  SEMI

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->CONST()->toString();
	rString += ctx->IDENTIFIER()->toString();
	rString += ctx->ASSIGN()->toString();
	rString += visit(ctx->initializer()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "LocalConstVariable" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSwitchCase(P416Parser::SwitchCaseContext *ctx) {
	//switchLabel COLON blockStatement?

	string rString;
	rString += visit(ctx->switchLabel()).as<string>();
	rString += ctx->COLON()->toString();
	rString += (ctx->blockStatement()!=nullptr)? visit(ctx->blockStatement()).as<string>() : "";
	cout << "SwitchCase" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitKeyElementList(P416Parser::KeyElementListContext *ctx) {

	string rString;
	int n = ctx->keyElement().size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->keyElement(i)).as<string>();
	}
	cout << "KeyElementList" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitActionList(P416Parser::ActionListContext *ctx) {
	//actionRef SEMI (actionRef  SEMI )*

	string rString;
	int n = ctx->SEMI().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->actionRef(i)).as<string>();
		rString += ctx->SEMI(i)->toString();
	}
	cout << "ActionList" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSelectCaseList(P416Parser::SelectCaseListContext *ctx) {
	string rString;
	int n = ctx->selectCase().size();
	for (int i=0;i<n;i++){
		rString += visit(ctx->selectCase(i)).as<string>();
	}
	cout << "SelectCaseList" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitEntriesList(P416Parser::EntriesListContext *ctx) {
	string rString;
	int n = ctx->entry().size();
	for(int i=0;i<n;i++){
		rString += visit(ctx->entry(i)).as<string>();
	}
	cout << "EntriesList" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSwitchLabel(P416Parser::SwitchLabelContext *ctx) {
	string rString;
	rString += (ctx->name()!=nullptr)? visit(ctx->name()).as<string>() : "";
	rString += (ctx->DEFAULT()!=nullptr)? ctx->DEFAULT()->toString() : "";
	cout << "SwitchLabel" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitKeyElement(P416Parser::KeyElementContext *ctx) {
	//expression COLON name optAnnotations SEMI

	string rString;
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "KeyElement" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitActionWithoutArgs(P416Parser::ActionWithoutArgsContext *ctx) {
	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += visit(ctx->name()).as<string>();
	cout << "ActionWithoutArgs" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitActionWithArgs(P416Parser::ActionWithArgsContext *ctx) {
	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "ActionWithArgs" <<":" <<rString<<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSelectCase(P416Parser::SelectCaseContext *ctx) {
	//keySetExpression COLON name SEMI
	string rString;
	rString += visit(ctx->keySetExpression()).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->name()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "SelectCase" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitEntry(P416Parser::EntryContext *ctx) {
	//optAnnotations keySetExpression COLON actionRef SEMI

	string rString;
	rString += visit(ctx->optAnnotations()).as<string>();
	rString += visit(ctx->keySetExpression()).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->actionRef()).as<string>();
	rString += ctx->SEMI()->toString();
	cout << "Entry" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitKeySetExpression(P416Parser::KeySetExpressionContext *ctx) {
	string rString;
	rString += (ctx->tupleKeySetExpression()!=nullptr)? visit(ctx->tupleKeySetExpression()).as<string>() : "";
	rString += (ctx->simpleKeySetExpression()!=nullptr)? visit(ctx->simpleKeySetExpression()).as<string>() : "";
	cout << "KeySetExpression" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *ctx) {
	//LPARAN simpleKeySetExpression ( COMMA simpleKeySetExpression )* RPARAN

	string rString;
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->simpleKeySetExpression(0)).as<string>();
	int n = ctx->COMMA().size();
	for (int i=0;i<n;i++){
		rString += ctx->COMMA(i)->toString();
		rString += visit(ctx->simpleKeySetExpression(0)).as<string>();
	}
	cout << "TupleKeySetExpression" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *ctx) {
	string rString;
	rString += (ctx->DEFAULT()!=nullptr)? ctx->DEFAULT()->toString() : "";
	rString += (ctx->DONTCARE()!=nullptr)? ctx->DONTCARE()->toString() : "";
	int n = ctx->expression().size();
	if(n==1){
		rString += visit(ctx->expression(0)).as<string>();
	}
	else if(n==2){
		rString += visit(ctx->expression(0)).as<string>();
		rString += (ctx->MASK()!=nullptr)? ctx->MASK()->toString() : ctx->RANGE()->toString();
		rString += visit(ctx->expression(1)).as<string>();
	}
	cout << "SimpleKeySetExpression" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *ctx) {

	string rString;
	rString += visit(ctx->prefixedNonTypeName()).as<string>();
	cout << "PrefixedNonTypeNameLvalue" << ":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *ctx) {
	//lvalue DOT member

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->DOT()->toString();
	rString += visit(ctx->member()).as<string>();
	cout << "PrefixedNameLvalue" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *ctx){
	//lvalue LBRKT expression RBRKT

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->LBRKT()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RBRKT()->toString();
	cout << "ArrayIndexLvalue" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *ctx){
	//lvalue LBRKT expression COLON expression RBRKT

	string rString;
	rString += visit(ctx->lvalue()).as<string>();
	rString += ctx->LBRKT()->toString();
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	rString += ctx->RBRKT()->toString();
	cout << "RangeIndexLvalue" <<":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitInteger(P416Parser::IntegerContext *ctx){
	string rString;
	cout << 4 << endl;
	//rString += visit(ctx->number()).as<string>();
	int intValue = visit(ctx->number()).as<int>();
	cout << "Return value from ctx->number : " << intValue << endl << endl;
	cout << 4 << endl;
	cout << "Integer" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTrue(P416Parser::TrueContext *ctx) {
	string rString;
	rString += ctx->TRUE()->toString();
	cout << "True" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitFalse(P416Parser::FalseContext *ctx) {
	string rString;
	rString += ctx->FALSE()->toString();
	cout << "False" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitString(P416Parser::StringContext *ctx) {
	string rString;
	rString += ctx->STRING_LITERAL()->toString();
	cout << "String" <<":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNonType(P416Parser::NonTypeContext *ctx) {
	string rString;
	rString += visit(ctx->nonTypeName()).as<string>();
	cout << "NonType" <<":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPrefixedNonType(P416Parser::PrefixedNonTypeContext *ctx) {
	string rString;
	rString += ctx->DOT()->toString();
	rString += visit(ctx->nonTypeName()).as<string>();
	cout << "PrefixedNonType" <<":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitFunctionCall(P416Parser::FunctionCallContext *ctx) {
	//expression LPARAN argumentList? RPARAN

	string rString;
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "FunctionCall" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *ctx) {
	//expression LT typeArgumentList GT LPARAN argumentList? RPARAN

	string rString;
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->LT()->toString();
	rString += visit(ctx->typeArgumentList()).as<string>();
	rString += ctx->GT()->toString();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "TempletizedFunctionCall" << ":" << rString <<endl;
 	return rString;
}

antlrcpp::Any emitLLVMP4::visitConstructor(P416Parser::ConstructorContext *ctx) {
	//typeRef LPARAN argumentList? RPARAN

	string rString;
	rString += visit(ctx->typeRef()).as<string>();
	rString += ctx->LPARAN()->toString();
	rString += (ctx->argumentList()!=nullptr)? visit(ctx->argumentList()).as<string>() : "";
	rString += ctx->RPARAN()->toString();
	cout << "Constructor" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitCast(P416Parser::CastContext *ctx) {
	//LPARAN typeRef RPARAN expression

	string rString;
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->typeRef()).as<string>();
	rString += ctx->RPARAN()->toString();
	rString += visit(ctx->expression()).as<string>();
	cout << "Cast" << ":" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitArrayIndex(P416Parser::ArrayIndexContext *ctx) {
	//expression LBRKT expression RBRKT

	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LBRKT()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	rString += ctx->RBRKT()->toString();
	return rString;
	cout << "ArrayIndex" << ":" <<rString << endl;
}

antlrcpp::Any emitLLVMP4::visitRangeIndex(P416Parser::RangeIndexContext *ctx) {
	//expression LBRKT expression COLON expression RBRKT

	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LBRKT()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->expression(2)).as<string>();
	rString += ctx->RBRKT()->toString();
	return rString;
	cout << "RangeIndex" << ":" <<rString << endl;
}

antlrcpp::Any emitLLVMP4::visitSet(P416Parser::SetContext *ctx) {
	//LCURL expressionList? RCURL

	string rString;
	rString += ctx->LCURL()->toString();
	rString += (ctx->expressionList()!=nullptr)? visit(ctx->expressionList()).as<string>() : "";
	rString += ctx->RCURL()->toString();
	cout << "Set" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOf(P416Parser::OfContext *ctx) {
	//LPARAN expression RPARAN

	string rString;
	rString += ctx->LPARAN()->toString();
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->RPARAN()->toString();
	cout << "Of" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNot(P416Parser::NotContext *ctx) {
	string rString;
	rString += visit(ctx->unaryExpression_not()).as<string>();
	cout << "Not" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNegate(P416Parser::NegateContext *ctx) {
	string rString;
	rString += visit(ctx->unaryExpression_tilda()).as<string>();
	cout << "Negate" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryMinus(P416Parser::UnaryMinusContext *ctx) {
	string rString;
	rString += visit(ctx->unaryExpression_minus()).as<string>();
	cout << "UnaryMinus" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryPlus(P416Parser::UnaryPlusContext *ctx) {
	string rString;
	rString += visit(ctx->unaryExpression_plus()).as<string>();
	cout << "UnaryPlus" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMemberAccess(P416Parser::MemberAccessContext *ctx) {
	//typeName DOT member

	string rString;
	rString += visit(ctx->typeName()).as<string>();
	rString += ctx->DOT()->toString();
	rString += visit(ctx->member()).as<string>();
	cout << "MemberAccess" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitErrorMemberAccess(P416Parser::ErrorMemberAccessContext *ctx) {

	string rString;
	rString += ctx->ERROR()->toString();
	rString += ctx->DOT()->toString();
	rString += visit(ctx->member()).as<string>();
	cout << "ErrorMemberAccess" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitExprMemberAccess(P416Parser::ExprMemberAccessContext *ctx) {

	string rString;
	rString += visit(ctx->expression()).as<string>();
	rString += ctx->DOT()->toString();
	rString += visit(ctx->member()).as<string>();
	cout << "ExprMemberAccess" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitStar(P416Parser::StarContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->STAR()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Star" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitSlash(P416Parser::SlashContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->SLASH()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Star" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMod(P416Parser::ModContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->PRCNT()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Star" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPlus(P416Parser::PlusContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->PLUS()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Star" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMinus(P416Parser::MinusContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->MINUS()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Star" << ":" <<rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitShiftLeft(P416Parser::ShiftLeftContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->SHL()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "ShiftLeft" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitShiftRight(P416Parser::ShiftRightContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->GT(0)->toString();
	rString += ctx->GT(1)->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "ShiftLeft" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBitAnd(P416Parser::BitAndContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->AND()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "BitAnd" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBitXor(P416Parser::BitXorContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->XOR()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "BitXor" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitBitOr(P416Parser::BitOrContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->OR()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "BitOr" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPlusPlus(P416Parser::PlusPlusContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->PP()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "PlusPlus" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitLessThanOrEqual(P416Parser::LessThanOrEqualContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LE()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "LessThanOrEqual" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->GE()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "GreaterThanOrEqual" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitLessThan(P416Parser::LessThanContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LT()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "LessThan" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitGreaterThan(P416Parser::GreaterThanContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->GT()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "GreaterThan" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitNotEqual(P416Parser::NotEqualContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->NE()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "NotEqual" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitEqual(P416Parser::EqualContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->EQ()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Equal" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitAnd(P416Parser::AndContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LAND()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "And" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitOr(P416Parser::OrContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->LOR()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	cout << "Or" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitTernary(P416Parser::TernaryContext *ctx) {
	string rString;
	rString += visit(ctx->expression(0)).as<string>();
	rString += ctx->QUESTION()->toString();
	rString += visit(ctx->expression(1)).as<string>();
	rString += ctx->COLON()->toString();
	rString += visit(ctx->expression(2)).as<string>();
	cout << "Ternary" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *ctx){
	string rString;
	rString += (ctx->dotPrefix()!=nullptr)? visit(ctx->dotPrefix()).as<string>() : "";
	rString += visit(ctx->nonTypeName()).as<string>();
	cout << "PrefixedNonTypeName" << ":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitDotPrefix(P416Parser::DotPrefixContext *ctx) {
	string rString;
	rString += ctx->DOT()->toString();
	cout << "DotPrefixed" << ":" << rString << endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitMember(P416Parser::MemberContext *ctx) {
	string rString;
	rString += visit(ctx->name()).as<string>();
	cout << "Member" << ":" << rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryExpression_not(P416Parser::UnaryExpression_notContext *ctx) {
	string rString;
	rString += ctx->NOT()->toString();
	rString += visit(ctx->expression()).as<string>();
	cout << "UnaryExpression_not" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *ctx) {
	string rString;
	rString += ctx->TILDA()->toString();
	rString += visit(ctx->expression()).as<string>();
	cout << "UnaryExpression_tilda" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *ctx) {
	string rString;
	rString += ctx->PLUS()->toString();
	rString += visit(ctx->expression()).as<string>();
	cout << "UnaryExpression_plus" << ":" <<rString <<endl;
	return rString;
}

antlrcpp::Any emitLLVMP4::visitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *ctx) {
	string rString;
	rString += ctx->MINUS()->toString();
	rString += visit(ctx->expression()).as<string>();
	cout << "UnaryExpression_minus" << ":" <<rString <<endl;
	return rString;
}
