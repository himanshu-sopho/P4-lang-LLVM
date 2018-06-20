


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "P416Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by P416Parser.
 */
class  P416Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by P416Parser.
   */
    virtual antlrcpp::Any visitP4program(P416Parser::P4programContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(P416Parser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNonTypeName(P416Parser::NonTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitName(P416Parser::NameContext *context) = 0;

    virtual antlrcpp::Any visitOptAnnotations(P416Parser::OptAnnotationsContext *context) = 0;

    virtual antlrcpp::Any visitAnnotations(P416Parser::AnnotationsContext *context) = 0;

    virtual antlrcpp::Any visitSimpleAnnotation(P416Parser::SimpleAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitComplexAnnotation(P416Parser::ComplexAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(P416Parser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(P416Parser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitInDirection(P416Parser::InDirectionContext *context) = 0;

    virtual antlrcpp::Any visitOutDirection(P416Parser::OutDirectionContext *context) = 0;

    virtual antlrcpp::Any visitInOutDirection(P416Parser::InOutDirectionContext *context) = 0;

    virtual antlrcpp::Any visitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInstantiation(P416Parser::InstantiationContext *context) = 0;

    virtual antlrcpp::Any visitOptConstructorParameters(P416Parser::OptConstructorParametersContext *context) = 0;

    virtual antlrcpp::Any visitDotPrefix(P416Parser::DotPrefixContext *context) = 0;

    virtual antlrcpp::Any visitParserDeclaration(P416Parser::ParserDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParserLocalElements(P416Parser::ParserLocalElementsContext *context) = 0;

    virtual antlrcpp::Any visitParserLocalElement(P416Parser::ParserLocalElementContext *context) = 0;

    virtual antlrcpp::Any visitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParserStates(P416Parser::ParserStatesContext *context) = 0;

    virtual antlrcpp::Any visitParserState(P416Parser::ParserStateContext *context) = 0;

    virtual antlrcpp::Any visitParserStatements(P416Parser::ParserStatementsContext *context) = 0;

    virtual antlrcpp::Any visitParserStatement(P416Parser::ParserStatementContext *context) = 0;

    virtual antlrcpp::Any visitParserBlockStatement(P416Parser::ParserBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitTransitionStatement(P416Parser::TransitionStatementContext *context) = 0;

    virtual antlrcpp::Any visitStateExpression(P416Parser::StateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSelectExpression(P416Parser::SelectExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSelectCaseList(P416Parser::SelectCaseListContext *context) = 0;

    virtual antlrcpp::Any visitSelectCase(P416Parser::SelectCaseContext *context) = 0;

    virtual antlrcpp::Any visitKeySetExpression(P416Parser::KeySetExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *context) = 0;

    virtual antlrcpp::Any visitControlDeclaration(P416Parser::ControlDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitControlBody(P416Parser::ControlBodyContext *context) = 0;

    virtual antlrcpp::Any visitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMethodPrototypes(P416Parser::MethodPrototypesContext *context) = 0;

    virtual antlrcpp::Any visitFunctionPrototype(P416Parser::FunctionPrototypeContext *context) = 0;

    virtual antlrcpp::Any visitMethodPrototype(P416Parser::MethodPrototypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeRef(P416Parser::TypeRefContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedType(P416Parser::PrefixedTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(P416Parser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTupleType(P416Parser::TupleTypeContext *context) = 0;

    virtual antlrcpp::Any visitHeaderStackType(P416Parser::HeaderStackTypeContext *context) = 0;

    virtual antlrcpp::Any visitSpecializedType(P416Parser::SpecializedTypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolType(P416Parser::BoolTypeContext *context) = 0;

    virtual antlrcpp::Any visitErrorType(P416Parser::ErrorTypeContext *context) = 0;

    virtual antlrcpp::Any visitBitType(P416Parser::BitTypeContext *context) = 0;

    virtual antlrcpp::Any visitBitSizeType(P416Parser::BitSizeTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntSizeType(P416Parser::IntSizeTypeContext *context) = 0;

    virtual antlrcpp::Any visitVarBitSizeType(P416Parser::VarBitSizeTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeOrVoid(P416Parser::TypeOrVoidContext *context) = 0;

    virtual antlrcpp::Any visitOptTypeParameters(P416Parser::OptTypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterList(P416Parser::TypeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitTypeArg(P416Parser::TypeArgContext *context) = 0;

    virtual antlrcpp::Any visitDontcare(P416Parser::DontcareContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgumentList(P416Parser::TypeArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclaration(P416Parser::TypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructFieldList(P416Parser::StructFieldListContext *context) = 0;

    virtual antlrcpp::Any visitStructField(P416Parser::StructFieldContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(P416Parser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitErrorDeclaration(P416Parser::ErrorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(P416Parser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTypeDef(P416Parser::SimpleTypeDefContext *context) = 0;

    virtual antlrcpp::Any visitDerivedTypeDef(P416Parser::DerivedTypeDefContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStatement(P416Parser::AssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitApplyMethodCall(P416Parser::ApplyMethodCallContext *context) = 0;

    virtual antlrcpp::Any visitExtractMethodCall(P416Parser::ExtractMethodCallContext *context) = 0;

    virtual antlrcpp::Any visitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *context) = 0;

    virtual antlrcpp::Any visitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(P416Parser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(P416Parser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitExitStatement(P416Parser::ExitStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(P416Parser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfElseStatement(P416Parser::IfElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitDirectApplication(P416Parser::DirectApplicationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(P416Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(P416Parser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatOrDeclList(P416Parser::StatOrDeclListContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(P416Parser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchCases(P416Parser::SwitchCasesContext *context) = 0;

    virtual antlrcpp::Any visitSwitchCase(P416Parser::SwitchCaseContext *context) = 0;

    virtual antlrcpp::Any visitSwitchLabel(P416Parser::SwitchLabelContext *context) = 0;

    virtual antlrcpp::Any visitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTableDeclaration(P416Parser::TableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTablePropertyList(P416Parser::TablePropertyListContext *context) = 0;

    virtual antlrcpp::Any visitKey(P416Parser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitActions(P416Parser::ActionsContext *context) = 0;

    virtual antlrcpp::Any visitConstEntries(P416Parser::ConstEntriesContext *context) = 0;

    virtual antlrcpp::Any visitLocalVariable(P416Parser::LocalVariableContext *context) = 0;

    virtual antlrcpp::Any visitLocalConstVariable(P416Parser::LocalConstVariableContext *context) = 0;

    virtual antlrcpp::Any visitKeyElementList(P416Parser::KeyElementListContext *context) = 0;

    virtual antlrcpp::Any visitKeyElement(P416Parser::KeyElementContext *context) = 0;

    virtual antlrcpp::Any visitActionList(P416Parser::ActionListContext *context) = 0;

    virtual antlrcpp::Any visitEntriesList(P416Parser::EntriesListContext *context) = 0;

    virtual antlrcpp::Any visitEntry(P416Parser::EntryContext *context) = 0;

    virtual antlrcpp::Any visitActionWithoutArgs(P416Parser::ActionWithoutArgsContext *context) = 0;

    virtual antlrcpp::Any visitActionWithArgs(P416Parser::ActionWithArgsContext *context) = 0;

    virtual antlrcpp::Any visitActionDeclaration(P416Parser::ActionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(P416Parser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstantDeclaration(P416Parser::ConstantDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitOptInitializer(P416Parser::OptInitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(P416Parser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(P416Parser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitArgument(P416Parser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(P416Parser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitMember(P416Parser::MemberContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *context) = 0;

    virtual antlrcpp::Any visitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *context) = 0;

    virtual antlrcpp::Any visitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *context) = 0;

    virtual antlrcpp::Any visitMinus(P416Parser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitRangeIndex(P416Parser::RangeIndexContext *context) = 0;

    virtual antlrcpp::Any visitMod(P416Parser::ModContext *context) = 0;

    virtual antlrcpp::Any visitString(P416Parser::StringContext *context) = 0;

    virtual antlrcpp::Any visitBitOr(P416Parser::BitOrContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedNonType(P416Parser::PrefixedNonTypeContext *context) = 0;

    virtual antlrcpp::Any visitInteger(P416Parser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitCast(P416Parser::CastContext *context) = 0;

    virtual antlrcpp::Any visitNot(P416Parser::NotContext *context) = 0;

    virtual antlrcpp::Any visitShiftLeft(P416Parser::ShiftLeftContext *context) = 0;

    virtual antlrcpp::Any visitPlusPlus(P416Parser::PlusPlusContext *context) = 0;

    virtual antlrcpp::Any visitAnd(P416Parser::AndContext *context) = 0;

    virtual antlrcpp::Any visitOf(P416Parser::OfContext *context) = 0;

    virtual antlrcpp::Any visitLessThan(P416Parser::LessThanContext *context) = 0;

    virtual antlrcpp::Any visitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitGreaterThan(P416Parser::GreaterThanContext *context) = 0;

    virtual antlrcpp::Any visitMemberAccess(P416Parser::MemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitExprMemberAccess(P416Parser::ExprMemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitSet(P416Parser::SetContext *context) = 0;

    virtual antlrcpp::Any visitShifRight(P416Parser::ShifRightContext *context) = 0;

    virtual antlrcpp::Any visitOr(P416Parser::OrContext *context) = 0;

    virtual antlrcpp::Any visitStar(P416Parser::StarContext *context) = 0;

    virtual antlrcpp::Any visitFalse(P416Parser::FalseContext *context) = 0;

    virtual antlrcpp::Any visitConstructor(P416Parser::ConstructorContext *context) = 0;

    virtual antlrcpp::Any visitNotEqual(P416Parser::NotEqualContext *context) = 0;

    virtual antlrcpp::Any visitNonType(P416Parser::NonTypeContext *context) = 0;

    virtual antlrcpp::Any visitPlus(P416Parser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *context) = 0;

    virtual antlrcpp::Any visitEqual(P416Parser::EqualContext *context) = 0;

    virtual antlrcpp::Any visitBitAnd(P416Parser::BitAndContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPlus(P416Parser::UnaryPlusContext *context) = 0;

    virtual antlrcpp::Any visitSlah(P416Parser::SlahContext *context) = 0;

    virtual antlrcpp::Any visitNegate(P416Parser::NegateContext *context) = 0;

    virtual antlrcpp::Any visitBitXor(P416Parser::BitXorContext *context) = 0;

    virtual antlrcpp::Any visitLessThanOrEqual(P416Parser::LessThanOrEqualContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(P416Parser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitTrue(P416Parser::TrueContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinus(P416Parser::UnaryMinusContext *context) = 0;

    virtual antlrcpp::Any visitErrorMemberAccess(P416Parser::ErrorMemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitArrayIndex(P416Parser::ArrayIndexContext *context) = 0;

    virtual antlrcpp::Any visitTernary(P416Parser::TernaryContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_not(P416Parser::UnaryExpression_notContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *context) = 0;

    virtual antlrcpp::Any visitNumber(P416Parser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitDecimalNumber(P416Parser::DecimalNumberContext *context) = 0;

    virtual antlrcpp::Any visitOctalNumber(P416Parser::OctalNumberContext *context) = 0;

    virtual antlrcpp::Any visitBinaryNumber(P416Parser::BinaryNumberContext *context) = 0;

    virtual antlrcpp::Any visitHexNumber(P416Parser::HexNumberContext *context) = 0;

    virtual antlrcpp::Any visitRealNumber(P416Parser::RealNumberContext *context) = 0;


};

