#include "P416BaseVisitor.h"
#include "antlr4-runtime.h"
#include <fstream>
#include "llvm/IR/Value.h"
#include "llvm/IR/Function.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/ADT/APInt.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Bitcode/BitcodeWriter.h"
#include "llvm/Bitcode/BitstreamWriter.h"


//#ifndef ASSIGNMENTVISITOR_H_
//#define ASSIGNMENTVISITOR_H_

#ifndef ASSIGNMENTVISITOR_H
#define ASSIGNMENTVISITOR_H



using namespace llvmp4;


class emitLLVMP4 : public P416BaseVisitor{
public :

	antlrcpp::Any visitP4program(P416Parser::P4programContext *ctx) override;

	antlrcpp::Any visitDeclaration(P416Parser::DeclarationContext *ctx) override;

	antlrcpp::Any visitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) override;

	antlrcpp::Any visitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *ctx) override;

	antlrcpp::Any visitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *ctx) override;

	antlrcpp::Any visitActionDeclaration(P416Parser::ActionDeclarationContext *ctx) override;

	antlrcpp::Any visitParserDeclaration(P416Parser::ParserDeclarationContext *ctx) override;

	antlrcpp::Any visitTypeDeclaration(P416Parser::TypeDeclarationContext *ctx) override;

	antlrcpp::Any visitControlDeclaration(P416Parser::ControlDeclarationContext *ctx) override;

	antlrcpp::Any visitInstantiation(P416Parser::InstantiationContext *ctx) override;

	antlrcpp::Any visitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) override;

	antlrcpp::Any visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) override;

	antlrcpp::Any visitOptAnnotations(P416Parser::OptAnnotationsContext *ctx) override;

	antlrcpp::Any visitTypeRef(P416Parser::TypeRefContext *ctx) override;

	antlrcpp::Any visitName(P416Parser::NameContext *ctx) override;

	antlrcpp::Any visitInitializer(P416Parser::InitializerContext *ctx) override;

	antlrcpp::Any visitNonTypeName(P416Parser::NonTypeNameContext *ctx) override;

	antlrcpp::Any visitOptTypeParameters(P416Parser::OptTypeParametersContext *ctx) override;

	antlrcpp::Any visitMethodPrototypes(P416Parser::MethodPrototypesContext *ctx) override;

	antlrcpp::Any visitFunctionPrototype(P416Parser::FunctionPrototypeContext *ctx) override;

	antlrcpp::Any visitParameterList(P416Parser::ParameterListContext *ctx) override;

	antlrcpp::Any visitBlockStatement(P416Parser::BlockStatementContext *ctx) override;

	antlrcpp::Any visitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitOptConstructorParameters(P416Parser::OptConstructorParametersContext *ctx) override;

	antlrcpp::Any visitParserLocalElements(P416Parser::ParserLocalElementsContext *ctx) override;

	antlrcpp::Any visitParserStates(P416Parser::ParserStatesContext *ctx) override;

	antlrcpp::Any visitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) override;

	antlrcpp::Any visitDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) override;

	antlrcpp::Any visitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) override;

	antlrcpp::Any visitControlBody(P416Parser::ControlBodyContext *ctx) override;

	antlrcpp::Any visitAnnotations(P416Parser::AnnotationsContext *ctx) override;

	antlrcpp::Any visitArgumentList(P416Parser::ArgumentListContext *ctx) override;

	antlrcpp::Any visitIdentifierList(P416Parser::IdentifierListContext *ctx) override;

	antlrcpp::Any visitBoolType(P416Parser::BoolTypeContext *ctx) override;

	antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *ctx) override ;

	antlrcpp::Any visitBitType(P416Parser::BitTypeContext *ctx) override;

	antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *ctx) override;

	antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) override ;

	antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) override;

	antlrcpp::Any visitTypeName(P416Parser::TypeNameContext *ctx) override;

	antlrcpp::Any visitSpecializedType(P416Parser::SpecializedTypeContext *ctx) override;

	antlrcpp::Any visitHeaderStackType(P416Parser::HeaderStackTypeContext *ctx) override;

	antlrcpp::Any visitTupleType(P416Parser::TupleTypeContext *ctx) override;

	antlrcpp::Any visitMethodPrototype(P416Parser::MethodPrototypeContext *ctx) override;

	antlrcpp::Any visitTypeParameterList(P416Parser::TypeParameterListContext *ctx) override;

	antlrcpp::Any visitTypeOrVoid(P416Parser::TypeOrVoidContext *ctx) override;

	antlrcpp::Any visitParameter(P416Parser::ParameterContext *ctx) override;

	antlrcpp::Any visitStatOrDeclList(P416Parser::StatOrDeclListContext *ctx) override;

	antlrcpp::Any visitParserLocalElement(P416Parser::ParserLocalElementContext *ctx) override;

	antlrcpp::Any visitParserState(P416Parser::ParserStateContext *ctx) override;

	antlrcpp::Any visitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) override;

	antlrcpp::Any visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) override;

	antlrcpp::Any visitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) override;

	antlrcpp::Any visitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) override;

	antlrcpp::Any visitSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) override;

	antlrcpp::Any visitComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) override;

	antlrcpp::Any visitArgument(P416Parser::ArgumentContext *ctx) override;

	antlrcpp::Any visitNumber(P416Parser::NumberContext *ctx) override;

	antlrcpp::Any visitPrefixedType(P416Parser::PrefixedTypeContext *ctx) override;

	antlrcpp::Any visitTypeArgumentList(P416Parser::TypeArgumentListContext *ctx) override;

	antlrcpp::Any visitInDirection(P416Parser::InDirectionContext *ctx) override;

	antlrcpp::Any visitOutDirection(P416Parser::OutDirectionContext *ctx) override;

	antlrcpp::Any visitInOutDirection(P416Parser::InOutDirectionContext *ctx) override;

	antlrcpp::Any visitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *ctx) override;

	antlrcpp::Any visitVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) override;

	antlrcpp::Any visitParserStatements(P416Parser::ParserStatementsContext *ctx) override;

	antlrcpp::Any visitTransitionStatement(P416Parser::TransitionStatementContext *ctx) override;

	antlrcpp::Any visitStructFieldList(P416Parser::StructFieldListContext *ctx) override;

	antlrcpp::Any visitTableDeclaration(P416Parser::TableDeclarationContext *ctx) override;

	antlrcpp::Any visitExpressionList(P416Parser::ExpressionListContext *ctx) override;

	antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *ctx) override;

	antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *ctx) override;

	antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *ctx) override;

	antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *ctx) override;

	antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *ctx) override;

	antlrcpp::Any visitTypeArg(P416Parser::TypeArgContext *ctx) override;

	antlrcpp::Any visitAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) override;

	antlrcpp::Any visitApplyMethodCall(P416Parser::ApplyMethodCallContext *ctx) override;

	antlrcpp::Any visitExtractMethodCall(P416Parser::ExtractMethodCallContext *ctx) override;

	antlrcpp::Any visitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *ctx) override;

	antlrcpp::Any visitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *ctx) override;

	antlrcpp::Any visitDirectApplication(P416Parser::DirectApplicationContext *ctx) override;

	antlrcpp::Any visitIfStatement(P416Parser::IfStatementContext *ctx) override;

	antlrcpp::Any visitIfElseStatement(P416Parser::IfElseStatementContext *ctx) override;

	antlrcpp::Any visitEmptyStatement(P416Parser::EmptyStatementContext *ctx) override;

	antlrcpp::Any visitExitStatement(P416Parser::ExitStatementContext *ctx) override;

	antlrcpp::Any visitReturnStatement(P416Parser::ReturnStatementContext *ctx) override;

	antlrcpp::Any visitSwitchStatement(P416Parser::SwitchStatementContext *ctx) override;

	antlrcpp::Any visitParserStatement(P416Parser::ParserStatementContext *ctx) override;

	antlrcpp::Any visitStateExpression(P416Parser::StateExpressionContext *ctx) override;

	antlrcpp::Any visitStructField(P416Parser::StructFieldContext *ctx) override;

	antlrcpp::Any visitTablePropertyList(P416Parser::TablePropertyListContext *ctx) override;

	antlrcpp::Any visitDontcare(P416Parser::DontcareContext *ctx) override;

	antlrcpp::Any visitSwitchCases(P416Parser::SwitchCasesContext *ctx) override;

	antlrcpp::Any visitParserBlockStatement(P416Parser::ParserBlockStatementContext *ctx) override;

	antlrcpp::Any visitSelectExpression(P416Parser::SelectExpressionContext *ctx) override;

	antlrcpp::Any visitKey(P416Parser::KeyContext *ctx) override;

	antlrcpp::Any visitActions(P416Parser::ActionsContext *ctx) override;

	antlrcpp::Any visitConstEntries(P416Parser::ConstEntriesContext *ctx) override;

	antlrcpp::Any visitLocalVariable(P416Parser::LocalVariableContext *ctx) override;

	antlrcpp::Any visitLocalConstVariable(P416Parser::LocalConstVariableContext *ctx) override;

	antlrcpp::Any visitSwitchCase(P416Parser::SwitchCaseContext *ctx) override;

	antlrcpp::Any visitKeyElementList(P416Parser::KeyElementListContext *ctx) override;

	antlrcpp::Any visitActionList(P416Parser::ActionListContext *ctx) override;

	antlrcpp::Any visitSelectCaseList(P416Parser::SelectCaseListContext *ctx) override;

	antlrcpp::Any visitEntriesList(P416Parser::EntriesListContext *ctx) override;

	antlrcpp::Any visitSwitchLabel(P416Parser::SwitchLabelContext *ctx) override;

	antlrcpp::Any visitKeyElement(P416Parser::KeyElementContext *ctx) override;

	antlrcpp::Any visitActionWithoutArgs(P416Parser::ActionWithoutArgsContext *ctx) override;

	antlrcpp::Any visitActionWithArgs(P416Parser::ActionWithArgsContext *ctx) override;

	antlrcpp::Any visitSelectCase(P416Parser::SelectCaseContext *ctx) override;

	antlrcpp::Any visitEntry(P416Parser::EntryContext *ctx) override;

	antlrcpp::Any visitKeySetExpression(P416Parser::KeySetExpressionContext *ctx) override;

	antlrcpp::Any visitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *ctx) override;

	antlrcpp::Any visitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *ctx) override;

	antlrcpp::Any visitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *ctx) override;

	antlrcpp::Any visitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *ctx) override;

	antlrcpp::Any visitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *ctx) override;

	antlrcpp::Any visitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *ctx) override;

	antlrcpp::Any visitInteger(P416Parser::IntegerContext *ctx) override;

	antlrcpp::Any visitTrue(P416Parser::TrueContext *ctx) override;

	antlrcpp::Any visitFalse(P416Parser::FalseContext *ctx) override;

	antlrcpp::Any visitString(P416Parser::StringContext *ctx) override;

	antlrcpp::Any visitNonType(P416Parser::NonTypeContext *ctx) override;

	antlrcpp::Any visitPrefixedNonType(P416Parser::PrefixedNonTypeContext *ctx) override;

	antlrcpp::Any visitFunctionCall(P416Parser::FunctionCallContext *ctx) override;

	antlrcpp::Any visitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *ctx) override;

	antlrcpp::Any visitConstructor(P416Parser::ConstructorContext *ctx) override;

	antlrcpp::Any visitCast(P416Parser::CastContext *ctx) override;

	antlrcpp::Any visitArrayIndex(P416Parser::ArrayIndexContext *ctx) override;

	antlrcpp::Any visitRangeIndex(P416Parser::RangeIndexContext *ctx) override;

	antlrcpp::Any visitSet(P416Parser::SetContext *ctx) override;

	antlrcpp::Any visitOf(P416Parser::OfContext *ctx) override;

	antlrcpp::Any visitNot(P416Parser::NotContext *ctx) override;

	antlrcpp::Any visitNegate(P416Parser::NegateContext *ctx) override;

	antlrcpp::Any visitUnaryMinus(P416Parser::UnaryMinusContext *ctx) override;

	antlrcpp::Any visitUnaryPlus(P416Parser::UnaryPlusContext *ctx) override;

	antlrcpp::Any visitMemberAccess(P416Parser::MemberAccessContext *ctx) override;

	antlrcpp::Any visitErrorMemberAccess(P416Parser::ErrorMemberAccessContext *ctx) override;

	antlrcpp::Any visitExprMemberAccess(P416Parser::ExprMemberAccessContext *ctx) override;

	antlrcpp::Any visitStar(P416Parser::StarContext *ctx) override;

	antlrcpp::Any visitSlash(P416Parser::SlashContext *ctx) override;

	antlrcpp::Any visitMod(P416Parser::ModContext *ctx) override;

	antlrcpp::Any visitPlus(P416Parser::PlusContext *ctx) override;

	antlrcpp::Any visitMinus(P416Parser::MinusContext *ctx) override;

	antlrcpp::Any visitShiftLeft(P416Parser::ShiftLeftContext *ctx) override;

	antlrcpp::Any visitShiftRight(P416Parser::ShiftRightContext *ctx) override;

	antlrcpp::Any visitBitAnd(P416Parser::BitAndContext *ctx) override;

	antlrcpp::Any visitBitXor(P416Parser::BitXorContext *ctx) override;

	antlrcpp::Any visitBitOr(P416Parser::BitOrContext *ctx) override;

	antlrcpp::Any visitPlusPlus(P416Parser::PlusPlusContext *ctx) override;

	antlrcpp::Any visitLessThanOrEqual(P416Parser::LessThanOrEqualContext *ctx) override;

	antlrcpp::Any visitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *ctx) override;

	antlrcpp::Any visitLessThan(P416Parser::LessThanContext *ctx) override;

	antlrcpp::Any visitGreaterThan(P416Parser::GreaterThanContext *ctx) override;

	antlrcpp::Any visitNotEqual(P416Parser::NotEqualContext *ctx) override;

	antlrcpp::Any visitEqual(P416Parser::EqualContext *ctx) override;

	antlrcpp::Any visitAnd(P416Parser::AndContext *ctx) override;

	antlrcpp::Any visitOr(P416Parser::OrContext *ctx) override;

	antlrcpp::Any visitTernary(P416Parser::TernaryContext *ctx) override;

	antlrcpp::Any visitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *ctx) override;

	antlrcpp::Any visitDotPrefix(P416Parser::DotPrefixContext *ctx) override;

	antlrcpp::Any visitMember(P416Parser::MemberContext *ctx) override;

	antlrcpp::Any visitUnaryExpression_not(P416Parser::UnaryExpression_notContext *ctx) override;

	antlrcpp::Any visitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *ctx) override;

	antlrcpp::Any visitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *ctx) override;

	antlrcpp::Any visitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *ctx) override;

};

//#endif




#endif /* ASSIGNMENTVISITOR_H_ */
