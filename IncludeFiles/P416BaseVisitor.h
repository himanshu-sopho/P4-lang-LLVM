


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "P416Visitor.h"


/**
 * This class provides an empty implementation of P416Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  P416BaseVisitor : public P416Visitor {
public:

  virtual antlrcpp::Any visitP4program(P416Parser::P4programContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(P416Parser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonTypeName(P416Parser::NonTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(P416Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptAnnotations(P416Parser::OptAnnotationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotations(P416Parser::AnnotationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(P416Parser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(P416Parser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInDirection(P416Parser::InDirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutDirection(P416Parser::OutDirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInOutDirection(P416Parser::InOutDirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstantiation(P416Parser::InstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptConstructorParameters(P416Parser::OptConstructorParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDotPrefix(P416Parser::DotPrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserDeclaration(P416Parser::ParserDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserLocalElements(P416Parser::ParserLocalElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserLocalElement(P416Parser::ParserLocalElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserStates(P416Parser::ParserStatesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserState(P416Parser::ParserStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserStatements(P416Parser::ParserStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserStatement(P416Parser::ParserStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParserBlockStatement(P416Parser::ParserBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransitionStatement(P416Parser::TransitionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStateExpression(P416Parser::StateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectExpression(P416Parser::SelectExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectCaseList(P416Parser::SelectCaseListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectCase(P416Parser::SelectCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeySetExpression(P416Parser::KeySetExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlDeclaration(P416Parser::ControlDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlBody(P416Parser::ControlBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodPrototypes(P416Parser::MethodPrototypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionPrototype(P416Parser::FunctionPrototypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodPrototype(P416Parser::MethodPrototypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeRef(P416Parser::TypeRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixedType(P416Parser::PrefixedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(P416Parser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleType(P416Parser::TupleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeaderStackType(P416Parser::HeaderStackTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecializedType(P416Parser::SpecializedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolType(P416Parser::BoolTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitType(P416Parser::BitTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeOrVoid(P416Parser::TypeOrVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptTypeParameters(P416Parser::OptTypeParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameterList(P416Parser::TypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArg(P416Parser::TypeArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDontcare(P416Parser::DontcareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArgumentList(P416Parser::TypeArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDeclaration(P416Parser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructFieldList(P416Parser::StructFieldListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructField(P416Parser::StructFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(P416Parser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitApplyMethodCall(P416Parser::ApplyMethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtractMethodCall(P416Parser::ExtractMethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(P416Parser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(P416Parser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExitStatement(P416Parser::ExitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(P416Parser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseStatement(P416Parser::IfElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectApplication(P416Parser::DirectApplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(P416Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(P416Parser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatOrDeclList(P416Parser::StatOrDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(P416Parser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchCases(P416Parser::SwitchCasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchCase(P416Parser::SwitchCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchLabel(P416Parser::SwitchLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableDeclaration(P416Parser::TableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablePropertyList(P416Parser::TablePropertyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey(P416Parser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActions(P416Parser::ActionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstEntries(P416Parser::ConstEntriesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVariable(P416Parser::LocalVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalConstVariable(P416Parser::LocalConstVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyElementList(P416Parser::KeyElementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyElement(P416Parser::KeyElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActionList(P416Parser::ActionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEntriesList(P416Parser::EntriesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEntry(P416Parser::EntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActionWithoutArgs(P416Parser::ActionWithoutArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActionWithArgs(P416Parser::ActionWithArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActionDeclaration(P416Parser::ActionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptInitializer(P416Parser::OptInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(P416Parser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(P416Parser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(P416Parser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(P416Parser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember(P416Parser::MemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(P416Parser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeIndex(P416Parser::RangeIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMod(P416Parser::ModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(P416Parser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitOr(P416Parser::BitOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixedNonType(P416Parser::PrefixedNonTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(P416Parser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast(P416Parser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(P416Parser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftLeft(P416Parser::ShiftLeftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusPlus(P416Parser::PlusPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(P416Parser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOf(P416Parser::OfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLessThan(P416Parser::LessThanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGreaterThan(P416Parser::GreaterThanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberAccess(P416Parser::MemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMemberAccess(P416Parser::ExprMemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet(P416Parser::SetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShifRight(P416Parser::ShifRightContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(P416Parser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStar(P416Parser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFalse(P416Parser::FalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructor(P416Parser::ConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotEqual(P416Parser::NotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonType(P416Parser::NonTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(P416Parser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqual(P416Parser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitAnd(P416Parser::BitAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryPlus(P416Parser::UnaryPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlah(P416Parser::SlahContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegate(P416Parser::NegateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitXor(P416Parser::BitXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLessThanOrEqual(P416Parser::LessThanOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(P416Parser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrue(P416Parser::TrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryMinus(P416Parser::UnaryMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorMemberAccess(P416Parser::ErrorMemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayIndex(P416Parser::ArrayIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernary(P416Parser::TernaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression_not(P416Parser::UnaryExpression_notContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(P416Parser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

