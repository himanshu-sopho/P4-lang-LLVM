


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "P416Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by P416Parser.
 */
class  P416Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterP4program(P416Parser::P4programContext *ctx) = 0;
  virtual void exitP4program(P416Parser::P4programContext *ctx) = 0;

  virtual void enterDeclaration(P416Parser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(P416Parser::DeclarationContext *ctx) = 0;

  virtual void enterNonTypeName(P416Parser::NonTypeNameContext *ctx) = 0;
  virtual void exitNonTypeName(P416Parser::NonTypeNameContext *ctx) = 0;

  virtual void enterName(P416Parser::NameContext *ctx) = 0;
  virtual void exitName(P416Parser::NameContext *ctx) = 0;

  virtual void enterOptAnnotations(P416Parser::OptAnnotationsContext *ctx) = 0;
  virtual void exitOptAnnotations(P416Parser::OptAnnotationsContext *ctx) = 0;

  virtual void enterAnnotations(P416Parser::AnnotationsContext *ctx) = 0;
  virtual void exitAnnotations(P416Parser::AnnotationsContext *ctx) = 0;

  virtual void enterSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) = 0;
  virtual void exitSimpleAnnotation(P416Parser::SimpleAnnotationContext *ctx) = 0;

  virtual void enterComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) = 0;
  virtual void exitComplexAnnotation(P416Parser::ComplexAnnotationContext *ctx) = 0;

  virtual void enterParameterList(P416Parser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(P416Parser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(P416Parser::ParameterContext *ctx) = 0;
  virtual void exitParameter(P416Parser::ParameterContext *ctx) = 0;

  virtual void enterInDirection(P416Parser::InDirectionContext *ctx) = 0;
  virtual void exitInDirection(P416Parser::InDirectionContext *ctx) = 0;

  virtual void enterOutDirection(P416Parser::OutDirectionContext *ctx) = 0;
  virtual void exitOutDirection(P416Parser::OutDirectionContext *ctx) = 0;

  virtual void enterInOutDirection(P416Parser::InOutDirectionContext *ctx) = 0;
  virtual void exitInOutDirection(P416Parser::InOutDirectionContext *ctx) = 0;

  virtual void enterPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *ctx) = 0;
  virtual void exitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext *ctx) = 0;

  virtual void enterInstantiation(P416Parser::InstantiationContext *ctx) = 0;
  virtual void exitInstantiation(P416Parser::InstantiationContext *ctx) = 0;

  virtual void enterOptConstructorParameters(P416Parser::OptConstructorParametersContext *ctx) = 0;
  virtual void exitOptConstructorParameters(P416Parser::OptConstructorParametersContext *ctx) = 0;

  virtual void enterDotPrefix(P416Parser::DotPrefixContext *ctx) = 0;
  virtual void exitDotPrefix(P416Parser::DotPrefixContext *ctx) = 0;

  virtual void enterParserDeclaration(P416Parser::ParserDeclarationContext *ctx) = 0;
  virtual void exitParserDeclaration(P416Parser::ParserDeclarationContext *ctx) = 0;

  virtual void enterParserLocalElements(P416Parser::ParserLocalElementsContext *ctx) = 0;
  virtual void exitParserLocalElements(P416Parser::ParserLocalElementsContext *ctx) = 0;

  virtual void enterParserLocalElement(P416Parser::ParserLocalElementContext *ctx) = 0;
  virtual void exitParserLocalElement(P416Parser::ParserLocalElementContext *ctx) = 0;

  virtual void enterParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *ctx) = 0;
  virtual void exitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext *ctx) = 0;

  virtual void enterParserStates(P416Parser::ParserStatesContext *ctx) = 0;
  virtual void exitParserStates(P416Parser::ParserStatesContext *ctx) = 0;

  virtual void enterParserState(P416Parser::ParserStateContext *ctx) = 0;
  virtual void exitParserState(P416Parser::ParserStateContext *ctx) = 0;

  virtual void enterParserStatements(P416Parser::ParserStatementsContext *ctx) = 0;
  virtual void exitParserStatements(P416Parser::ParserStatementsContext *ctx) = 0;

  virtual void enterParserStatement(P416Parser::ParserStatementContext *ctx) = 0;
  virtual void exitParserStatement(P416Parser::ParserStatementContext *ctx) = 0;

  virtual void enterParserBlockStatement(P416Parser::ParserBlockStatementContext *ctx) = 0;
  virtual void exitParserBlockStatement(P416Parser::ParserBlockStatementContext *ctx) = 0;

  virtual void enterTransitionStatement(P416Parser::TransitionStatementContext *ctx) = 0;
  virtual void exitTransitionStatement(P416Parser::TransitionStatementContext *ctx) = 0;

  virtual void enterStateExpression(P416Parser::StateExpressionContext *ctx) = 0;
  virtual void exitStateExpression(P416Parser::StateExpressionContext *ctx) = 0;

  virtual void enterSelectExpression(P416Parser::SelectExpressionContext *ctx) = 0;
  virtual void exitSelectExpression(P416Parser::SelectExpressionContext *ctx) = 0;

  virtual void enterSelectCaseList(P416Parser::SelectCaseListContext *ctx) = 0;
  virtual void exitSelectCaseList(P416Parser::SelectCaseListContext *ctx) = 0;

  virtual void enterSelectCase(P416Parser::SelectCaseContext *ctx) = 0;
  virtual void exitSelectCase(P416Parser::SelectCaseContext *ctx) = 0;

  virtual void enterKeySetExpression(P416Parser::KeySetExpressionContext *ctx) = 0;
  virtual void exitKeySetExpression(P416Parser::KeySetExpressionContext *ctx) = 0;

  virtual void enterTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *ctx) = 0;
  virtual void exitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext *ctx) = 0;

  virtual void enterSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *ctx) = 0;
  virtual void exitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext *ctx) = 0;

  virtual void enterControlDeclaration(P416Parser::ControlDeclarationContext *ctx) = 0;
  virtual void exitControlDeclaration(P416Parser::ControlDeclarationContext *ctx) = 0;

  virtual void enterControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) = 0;
  virtual void exitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext *ctx) = 0;

  virtual void enterControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) = 0;
  virtual void exitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext *ctx) = 0;

  virtual void enterControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) = 0;
  virtual void exitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext *ctx) = 0;

  virtual void enterControlBody(P416Parser::ControlBodyContext *ctx) = 0;
  virtual void exitControlBody(P416Parser::ControlBodyContext *ctx) = 0;

  virtual void enterExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *ctx) = 0;
  virtual void exitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext *ctx) = 0;

  virtual void enterExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *ctx) = 0;
  virtual void exitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext *ctx) = 0;

  virtual void enterMethodPrototypes(P416Parser::MethodPrototypesContext *ctx) = 0;
  virtual void exitMethodPrototypes(P416Parser::MethodPrototypesContext *ctx) = 0;

  virtual void enterFunctionPrototype(P416Parser::FunctionPrototypeContext *ctx) = 0;
  virtual void exitFunctionPrototype(P416Parser::FunctionPrototypeContext *ctx) = 0;

  virtual void enterMethodPrototype(P416Parser::MethodPrototypeContext *ctx) = 0;
  virtual void exitMethodPrototype(P416Parser::MethodPrototypeContext *ctx) = 0;

  virtual void enterTypeRef(P416Parser::TypeRefContext *ctx) = 0;
  virtual void exitTypeRef(P416Parser::TypeRefContext *ctx) = 0;

  virtual void enterPrefixedType(P416Parser::PrefixedTypeContext *ctx) = 0;
  virtual void exitPrefixedType(P416Parser::PrefixedTypeContext *ctx) = 0;

  virtual void enterTypeName(P416Parser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(P416Parser::TypeNameContext *ctx) = 0;

  virtual void enterTupleType(P416Parser::TupleTypeContext *ctx) = 0;
  virtual void exitTupleType(P416Parser::TupleTypeContext *ctx) = 0;

  virtual void enterHeaderStackType(P416Parser::HeaderStackTypeContext *ctx) = 0;
  virtual void exitHeaderStackType(P416Parser::HeaderStackTypeContext *ctx) = 0;

  virtual void enterSpecializedType(P416Parser::SpecializedTypeContext *ctx) = 0;
  virtual void exitSpecializedType(P416Parser::SpecializedTypeContext *ctx) = 0;

  virtual void enterBoolType(P416Parser::BoolTypeContext *ctx) = 0;
  virtual void exitBoolType(P416Parser::BoolTypeContext *ctx) = 0;

  virtual void enterErrorType(P416Parser::ErrorTypeContext *ctx) = 0;
  virtual void exitErrorType(P416Parser::ErrorTypeContext *ctx) = 0;

  virtual void enterBitType(P416Parser::BitTypeContext *ctx) = 0;
  virtual void exitBitType(P416Parser::BitTypeContext *ctx) = 0;

  virtual void enterBitSizeType(P416Parser::BitSizeTypeContext *ctx) = 0;
  virtual void exitBitSizeType(P416Parser::BitSizeTypeContext *ctx) = 0;

  virtual void enterIntSizeType(P416Parser::IntSizeTypeContext *ctx) = 0;
  virtual void exitIntSizeType(P416Parser::IntSizeTypeContext *ctx) = 0;

  virtual void enterVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) = 0;
  virtual void exitVarBitSizeType(P416Parser::VarBitSizeTypeContext *ctx) = 0;

  virtual void enterTypeOrVoid(P416Parser::TypeOrVoidContext *ctx) = 0;
  virtual void exitTypeOrVoid(P416Parser::TypeOrVoidContext *ctx) = 0;

  virtual void enterOptTypeParameters(P416Parser::OptTypeParametersContext *ctx) = 0;
  virtual void exitOptTypeParameters(P416Parser::OptTypeParametersContext *ctx) = 0;

  virtual void enterTypeParameterList(P416Parser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(P416Parser::TypeParameterListContext *ctx) = 0;

  virtual void enterTypeArg(P416Parser::TypeArgContext *ctx) = 0;
  virtual void exitTypeArg(P416Parser::TypeArgContext *ctx) = 0;

  virtual void enterDontcare(P416Parser::DontcareContext *ctx) = 0;
  virtual void exitDontcare(P416Parser::DontcareContext *ctx) = 0;

  virtual void enterTypeArgumentList(P416Parser::TypeArgumentListContext *ctx) = 0;
  virtual void exitTypeArgumentList(P416Parser::TypeArgumentListContext *ctx) = 0;

  virtual void enterTypeDeclaration(P416Parser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(P416Parser::TypeDeclarationContext *ctx) = 0;

  virtual void enterDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) = 0;
  virtual void exitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext *ctx) = 0;

  virtual void enterHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) = 0;
  virtual void exitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext *ctx) = 0;

  virtual void enterHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) = 0;
  virtual void exitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext *ctx) = 0;

  virtual void enterStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) = 0;
  virtual void exitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext *ctx) = 0;

  virtual void enterStructFieldList(P416Parser::StructFieldListContext *ctx) = 0;
  virtual void exitStructFieldList(P416Parser::StructFieldListContext *ctx) = 0;

  virtual void enterStructField(P416Parser::StructFieldContext *ctx) = 0;
  virtual void exitStructField(P416Parser::StructFieldContext *ctx) = 0;

  virtual void enterEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(P416Parser::EnumDeclarationContext *ctx) = 0;

  virtual void enterErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) = 0;
  virtual void exitErrorDeclaration(P416Parser::ErrorDeclarationContext *ctx) = 0;

  virtual void enterMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) = 0;
  virtual void exitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext *ctx) = 0;

  virtual void enterIdentifierList(P416Parser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(P416Parser::IdentifierListContext *ctx) = 0;

  virtual void enterSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) = 0;
  virtual void exitSimpleTypeDef(P416Parser::SimpleTypeDefContext *ctx) = 0;

  virtual void enterDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) = 0;
  virtual void exitDerivedTypeDef(P416Parser::DerivedTypeDefContext *ctx) = 0;

  virtual void enterAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(P416Parser::AssignmentStatementContext *ctx) = 0;

  virtual void enterApplyMethodCall(P416Parser::ApplyMethodCallContext *ctx) = 0;
  virtual void exitApplyMethodCall(P416Parser::ApplyMethodCallContext *ctx) = 0;

  virtual void enterExtractMethodCall(P416Parser::ExtractMethodCallContext *ctx) = 0;
  virtual void exitExtractMethodCall(P416Parser::ExtractMethodCallContext *ctx) = 0;

  virtual void enterCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *ctx) = 0;
  virtual void exitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext *ctx) = 0;

  virtual void enterCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *ctx) = 0;
  virtual void exitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext *ctx) = 0;

  virtual void enterEmptyStatement(P416Parser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(P416Parser::EmptyStatementContext *ctx) = 0;

  virtual void enterReturnStatement(P416Parser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(P416Parser::ReturnStatementContext *ctx) = 0;

  virtual void enterExitStatement(P416Parser::ExitStatementContext *ctx) = 0;
  virtual void exitExitStatement(P416Parser::ExitStatementContext *ctx) = 0;

  virtual void enterIfStatement(P416Parser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(P416Parser::IfStatementContext *ctx) = 0;

  virtual void enterIfElseStatement(P416Parser::IfElseStatementContext *ctx) = 0;
  virtual void exitIfElseStatement(P416Parser::IfElseStatementContext *ctx) = 0;

  virtual void enterDirectApplication(P416Parser::DirectApplicationContext *ctx) = 0;
  virtual void exitDirectApplication(P416Parser::DirectApplicationContext *ctx) = 0;

  virtual void enterStatement(P416Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(P416Parser::StatementContext *ctx) = 0;

  virtual void enterBlockStatement(P416Parser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(P416Parser::BlockStatementContext *ctx) = 0;

  virtual void enterStatOrDeclList(P416Parser::StatOrDeclListContext *ctx) = 0;
  virtual void exitStatOrDeclList(P416Parser::StatOrDeclListContext *ctx) = 0;

  virtual void enterSwitchStatement(P416Parser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(P416Parser::SwitchStatementContext *ctx) = 0;

  virtual void enterSwitchCases(P416Parser::SwitchCasesContext *ctx) = 0;
  virtual void exitSwitchCases(P416Parser::SwitchCasesContext *ctx) = 0;

  virtual void enterSwitchCase(P416Parser::SwitchCaseContext *ctx) = 0;
  virtual void exitSwitchCase(P416Parser::SwitchCaseContext *ctx) = 0;

  virtual void enterSwitchLabel(P416Parser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(P416Parser::SwitchLabelContext *ctx) = 0;

  virtual void enterStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *ctx) = 0;
  virtual void exitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext *ctx) = 0;

  virtual void enterTableDeclaration(P416Parser::TableDeclarationContext *ctx) = 0;
  virtual void exitTableDeclaration(P416Parser::TableDeclarationContext *ctx) = 0;

  virtual void enterTablePropertyList(P416Parser::TablePropertyListContext *ctx) = 0;
  virtual void exitTablePropertyList(P416Parser::TablePropertyListContext *ctx) = 0;

  virtual void enterKey(P416Parser::KeyContext *ctx) = 0;
  virtual void exitKey(P416Parser::KeyContext *ctx) = 0;

  virtual void enterActions(P416Parser::ActionsContext *ctx) = 0;
  virtual void exitActions(P416Parser::ActionsContext *ctx) = 0;

  virtual void enterConstEntries(P416Parser::ConstEntriesContext *ctx) = 0;
  virtual void exitConstEntries(P416Parser::ConstEntriesContext *ctx) = 0;

  virtual void enterLocalVariable(P416Parser::LocalVariableContext *ctx) = 0;
  virtual void exitLocalVariable(P416Parser::LocalVariableContext *ctx) = 0;

  virtual void enterLocalConstVariable(P416Parser::LocalConstVariableContext *ctx) = 0;
  virtual void exitLocalConstVariable(P416Parser::LocalConstVariableContext *ctx) = 0;

  virtual void enterKeyElementList(P416Parser::KeyElementListContext *ctx) = 0;
  virtual void exitKeyElementList(P416Parser::KeyElementListContext *ctx) = 0;

  virtual void enterKeyElement(P416Parser::KeyElementContext *ctx) = 0;
  virtual void exitKeyElement(P416Parser::KeyElementContext *ctx) = 0;

  virtual void enterActionList(P416Parser::ActionListContext *ctx) = 0;
  virtual void exitActionList(P416Parser::ActionListContext *ctx) = 0;

  virtual void enterEntriesList(P416Parser::EntriesListContext *ctx) = 0;
  virtual void exitEntriesList(P416Parser::EntriesListContext *ctx) = 0;

  virtual void enterEntry(P416Parser::EntryContext *ctx) = 0;
  virtual void exitEntry(P416Parser::EntryContext *ctx) = 0;

  virtual void enterActionWithoutArgs(P416Parser::ActionWithoutArgsContext *ctx) = 0;
  virtual void exitActionWithoutArgs(P416Parser::ActionWithoutArgsContext *ctx) = 0;

  virtual void enterActionWithArgs(P416Parser::ActionWithArgsContext *ctx) = 0;
  virtual void exitActionWithArgs(P416Parser::ActionWithArgsContext *ctx) = 0;

  virtual void enterActionDeclaration(P416Parser::ActionDeclarationContext *ctx) = 0;
  virtual void exitActionDeclaration(P416Parser::ActionDeclarationContext *ctx) = 0;

  virtual void enterVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(P416Parser::VariableDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) = 0;
  virtual void exitConstantDeclaration(P416Parser::ConstantDeclarationContext *ctx) = 0;

  virtual void enterOptInitializer(P416Parser::OptInitializerContext *ctx) = 0;
  virtual void exitOptInitializer(P416Parser::OptInitializerContext *ctx) = 0;

  virtual void enterInitializer(P416Parser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(P416Parser::InitializerContext *ctx) = 0;

  virtual void enterArgumentList(P416Parser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(P416Parser::ArgumentListContext *ctx) = 0;

  virtual void enterArgument(P416Parser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(P416Parser::ArgumentContext *ctx) = 0;

  virtual void enterExpressionList(P416Parser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(P416Parser::ExpressionListContext *ctx) = 0;

  virtual void enterMember(P416Parser::MemberContext *ctx) = 0;
  virtual void exitMember(P416Parser::MemberContext *ctx) = 0;

  virtual void enterPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *ctx) = 0;
  virtual void exitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext *ctx) = 0;

  virtual void enterPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *ctx) = 0;
  virtual void exitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext *ctx) = 0;

  virtual void enterArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *ctx) = 0;
  virtual void exitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext *ctx) = 0;

  virtual void enterRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *ctx) = 0;
  virtual void exitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext *ctx) = 0;

  virtual void enterPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *ctx) = 0;
  virtual void exitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext *ctx) = 0;

  virtual void enterMinus(P416Parser::MinusContext *ctx) = 0;
  virtual void exitMinus(P416Parser::MinusContext *ctx) = 0;

  virtual void enterRangeIndex(P416Parser::RangeIndexContext *ctx) = 0;
  virtual void exitRangeIndex(P416Parser::RangeIndexContext *ctx) = 0;

  virtual void enterMod(P416Parser::ModContext *ctx) = 0;
  virtual void exitMod(P416Parser::ModContext *ctx) = 0;

  virtual void enterString(P416Parser::StringContext *ctx) = 0;
  virtual void exitString(P416Parser::StringContext *ctx) = 0;

  virtual void enterBitOr(P416Parser::BitOrContext *ctx) = 0;
  virtual void exitBitOr(P416Parser::BitOrContext *ctx) = 0;

  virtual void enterPrefixedNonType(P416Parser::PrefixedNonTypeContext *ctx) = 0;
  virtual void exitPrefixedNonType(P416Parser::PrefixedNonTypeContext *ctx) = 0;

  virtual void enterInteger(P416Parser::IntegerContext *ctx) = 0;
  virtual void exitInteger(P416Parser::IntegerContext *ctx) = 0;

  virtual void enterCast(P416Parser::CastContext *ctx) = 0;
  virtual void exitCast(P416Parser::CastContext *ctx) = 0;

  virtual void enterNot(P416Parser::NotContext *ctx) = 0;
  virtual void exitNot(P416Parser::NotContext *ctx) = 0;

  virtual void enterShiftLeft(P416Parser::ShiftLeftContext *ctx) = 0;
  virtual void exitShiftLeft(P416Parser::ShiftLeftContext *ctx) = 0;

  virtual void enterPlusPlus(P416Parser::PlusPlusContext *ctx) = 0;
  virtual void exitPlusPlus(P416Parser::PlusPlusContext *ctx) = 0;

  virtual void enterAnd(P416Parser::AndContext *ctx) = 0;
  virtual void exitAnd(P416Parser::AndContext *ctx) = 0;

  virtual void enterOf(P416Parser::OfContext *ctx) = 0;
  virtual void exitOf(P416Parser::OfContext *ctx) = 0;

  virtual void enterLessThan(P416Parser::LessThanContext *ctx) = 0;
  virtual void exitLessThan(P416Parser::LessThanContext *ctx) = 0;

  virtual void enterTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *ctx) = 0;
  virtual void exitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext *ctx) = 0;

  virtual void enterGreaterThan(P416Parser::GreaterThanContext *ctx) = 0;
  virtual void exitGreaterThan(P416Parser::GreaterThanContext *ctx) = 0;

  virtual void enterMemberAccess(P416Parser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(P416Parser::MemberAccessContext *ctx) = 0;

  virtual void enterExprMemberAccess(P416Parser::ExprMemberAccessContext *ctx) = 0;
  virtual void exitExprMemberAccess(P416Parser::ExprMemberAccessContext *ctx) = 0;

  virtual void enterSet(P416Parser::SetContext *ctx) = 0;
  virtual void exitSet(P416Parser::SetContext *ctx) = 0;

  virtual void enterShifRight(P416Parser::ShifRightContext *ctx) = 0;
  virtual void exitShifRight(P416Parser::ShifRightContext *ctx) = 0;

  virtual void enterOr(P416Parser::OrContext *ctx) = 0;
  virtual void exitOr(P416Parser::OrContext *ctx) = 0;

  virtual void enterStar(P416Parser::StarContext *ctx) = 0;
  virtual void exitStar(P416Parser::StarContext *ctx) = 0;

  virtual void enterFalse(P416Parser::FalseContext *ctx) = 0;
  virtual void exitFalse(P416Parser::FalseContext *ctx) = 0;

  virtual void enterConstructor(P416Parser::ConstructorContext *ctx) = 0;
  virtual void exitConstructor(P416Parser::ConstructorContext *ctx) = 0;

  virtual void enterNotEqual(P416Parser::NotEqualContext *ctx) = 0;
  virtual void exitNotEqual(P416Parser::NotEqualContext *ctx) = 0;

  virtual void enterNonType(P416Parser::NonTypeContext *ctx) = 0;
  virtual void exitNonType(P416Parser::NonTypeContext *ctx) = 0;

  virtual void enterPlus(P416Parser::PlusContext *ctx) = 0;
  virtual void exitPlus(P416Parser::PlusContext *ctx) = 0;

  virtual void enterGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *ctx) = 0;
  virtual void exitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext *ctx) = 0;

  virtual void enterEqual(P416Parser::EqualContext *ctx) = 0;
  virtual void exitEqual(P416Parser::EqualContext *ctx) = 0;

  virtual void enterBitAnd(P416Parser::BitAndContext *ctx) = 0;
  virtual void exitBitAnd(P416Parser::BitAndContext *ctx) = 0;

  virtual void enterUnaryPlus(P416Parser::UnaryPlusContext *ctx) = 0;
  virtual void exitUnaryPlus(P416Parser::UnaryPlusContext *ctx) = 0;

  virtual void enterSlah(P416Parser::SlahContext *ctx) = 0;
  virtual void exitSlah(P416Parser::SlahContext *ctx) = 0;

  virtual void enterNegate(P416Parser::NegateContext *ctx) = 0;
  virtual void exitNegate(P416Parser::NegateContext *ctx) = 0;

  virtual void enterBitXor(P416Parser::BitXorContext *ctx) = 0;
  virtual void exitBitXor(P416Parser::BitXorContext *ctx) = 0;

  virtual void enterLessThanOrEqual(P416Parser::LessThanOrEqualContext *ctx) = 0;
  virtual void exitLessThanOrEqual(P416Parser::LessThanOrEqualContext *ctx) = 0;

  virtual void enterFunctionCall(P416Parser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(P416Parser::FunctionCallContext *ctx) = 0;

  virtual void enterTrue(P416Parser::TrueContext *ctx) = 0;
  virtual void exitTrue(P416Parser::TrueContext *ctx) = 0;

  virtual void enterUnaryMinus(P416Parser::UnaryMinusContext *ctx) = 0;
  virtual void exitUnaryMinus(P416Parser::UnaryMinusContext *ctx) = 0;

  virtual void enterErrorMemberAccess(P416Parser::ErrorMemberAccessContext *ctx) = 0;
  virtual void exitErrorMemberAccess(P416Parser::ErrorMemberAccessContext *ctx) = 0;

  virtual void enterArrayIndex(P416Parser::ArrayIndexContext *ctx) = 0;
  virtual void exitArrayIndex(P416Parser::ArrayIndexContext *ctx) = 0;

  virtual void enterTernary(P416Parser::TernaryContext *ctx) = 0;
  virtual void exitTernary(P416Parser::TernaryContext *ctx) = 0;

  virtual void enterUnaryExpression_not(P416Parser::UnaryExpression_notContext *ctx) = 0;
  virtual void exitUnaryExpression_not(P416Parser::UnaryExpression_notContext *ctx) = 0;

  virtual void enterUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *ctx) = 0;
  virtual void exitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext *ctx) = 0;

  virtual void enterUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *ctx) = 0;
  virtual void exitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext *ctx) = 0;

  virtual void enterUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *ctx) = 0;
  virtual void exitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext *ctx) = 0;

  virtual void enterNumber(P416Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(P416Parser::NumberContext *ctx) = 0;

  virtual void enterDecimalNumber(P416Parser::DecimalNumberContext *ctx) = 0;
  virtual void exitDecimalNumber(P416Parser::DecimalNumberContext *ctx) = 0;

  virtual void enterOctalNumber(P416Parser::OctalNumberContext *ctx) = 0;
  virtual void exitOctalNumber(P416Parser::OctalNumberContext *ctx) = 0;

  virtual void enterBinaryNumber(P416Parser::BinaryNumberContext *ctx) = 0;
  virtual void exitBinaryNumber(P416Parser::BinaryNumberContext *ctx) = 0;

  virtual void enterHexNumber(P416Parser::HexNumberContext *ctx) = 0;
  virtual void exitHexNumber(P416Parser::HexNumberContext *ctx) = 0;

  virtual void enterRealNumber(P416Parser::RealNumberContext *ctx) = 0;
  virtual void exitRealNumber(P416Parser::RealNumberContext *ctx) = 0;


};

