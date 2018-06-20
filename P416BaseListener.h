


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "P416Listener.h"


/**
 * This class provides an empty implementation of P416Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  P416BaseListener : public P416Listener {
public:

  virtual void enterP4program(P416Parser::P4programContext * /*ctx*/) override { }
  virtual void exitP4program(P416Parser::P4programContext * /*ctx*/) override { }

  virtual void enterDeclaration(P416Parser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(P416Parser::DeclarationContext * /*ctx*/) override { }

  virtual void enterNonTypeName(P416Parser::NonTypeNameContext * /*ctx*/) override { }
  virtual void exitNonTypeName(P416Parser::NonTypeNameContext * /*ctx*/) override { }

  virtual void enterName(P416Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(P416Parser::NameContext * /*ctx*/) override { }

  virtual void enterOptAnnotations(P416Parser::OptAnnotationsContext * /*ctx*/) override { }
  virtual void exitOptAnnotations(P416Parser::OptAnnotationsContext * /*ctx*/) override { }

  virtual void enterAnnotations(P416Parser::AnnotationsContext * /*ctx*/) override { }
  virtual void exitAnnotations(P416Parser::AnnotationsContext * /*ctx*/) override { }

  virtual void enterSimpleAnnotation(P416Parser::SimpleAnnotationContext * /*ctx*/) override { }
  virtual void exitSimpleAnnotation(P416Parser::SimpleAnnotationContext * /*ctx*/) override { }

  virtual void enterComplexAnnotation(P416Parser::ComplexAnnotationContext * /*ctx*/) override { }
  virtual void exitComplexAnnotation(P416Parser::ComplexAnnotationContext * /*ctx*/) override { }

  virtual void enterParameterList(P416Parser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(P416Parser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(P416Parser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(P416Parser::ParameterContext * /*ctx*/) override { }

  virtual void enterInDirection(P416Parser::InDirectionContext * /*ctx*/) override { }
  virtual void exitInDirection(P416Parser::InDirectionContext * /*ctx*/) override { }

  virtual void enterOutDirection(P416Parser::OutDirectionContext * /*ctx*/) override { }
  virtual void exitOutDirection(P416Parser::OutDirectionContext * /*ctx*/) override { }

  virtual void enterInOutDirection(P416Parser::InOutDirectionContext * /*ctx*/) override { }
  virtual void exitInOutDirection(P416Parser::InOutDirectionContext * /*ctx*/) override { }

  virtual void enterPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageTypeDeclaration(P416Parser::PackageTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterInstantiation(P416Parser::InstantiationContext * /*ctx*/) override { }
  virtual void exitInstantiation(P416Parser::InstantiationContext * /*ctx*/) override { }

  virtual void enterOptConstructorParameters(P416Parser::OptConstructorParametersContext * /*ctx*/) override { }
  virtual void exitOptConstructorParameters(P416Parser::OptConstructorParametersContext * /*ctx*/) override { }

  virtual void enterDotPrefix(P416Parser::DotPrefixContext * /*ctx*/) override { }
  virtual void exitDotPrefix(P416Parser::DotPrefixContext * /*ctx*/) override { }

  virtual void enterParserDeclaration(P416Parser::ParserDeclarationContext * /*ctx*/) override { }
  virtual void exitParserDeclaration(P416Parser::ParserDeclarationContext * /*ctx*/) override { }

  virtual void enterParserLocalElements(P416Parser::ParserLocalElementsContext * /*ctx*/) override { }
  virtual void exitParserLocalElements(P416Parser::ParserLocalElementsContext * /*ctx*/) override { }

  virtual void enterParserLocalElement(P416Parser::ParserLocalElementContext * /*ctx*/) override { }
  virtual void exitParserLocalElement(P416Parser::ParserLocalElementContext * /*ctx*/) override { }

  virtual void enterParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitParserTypeDeclaration(P416Parser::ParserTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterParserStates(P416Parser::ParserStatesContext * /*ctx*/) override { }
  virtual void exitParserStates(P416Parser::ParserStatesContext * /*ctx*/) override { }

  virtual void enterParserState(P416Parser::ParserStateContext * /*ctx*/) override { }
  virtual void exitParserState(P416Parser::ParserStateContext * /*ctx*/) override { }

  virtual void enterParserStatements(P416Parser::ParserStatementsContext * /*ctx*/) override { }
  virtual void exitParserStatements(P416Parser::ParserStatementsContext * /*ctx*/) override { }

  virtual void enterParserStatement(P416Parser::ParserStatementContext * /*ctx*/) override { }
  virtual void exitParserStatement(P416Parser::ParserStatementContext * /*ctx*/) override { }

  virtual void enterParserBlockStatement(P416Parser::ParserBlockStatementContext * /*ctx*/) override { }
  virtual void exitParserBlockStatement(P416Parser::ParserBlockStatementContext * /*ctx*/) override { }

  virtual void enterTransitionStatement(P416Parser::TransitionStatementContext * /*ctx*/) override { }
  virtual void exitTransitionStatement(P416Parser::TransitionStatementContext * /*ctx*/) override { }

  virtual void enterStateExpression(P416Parser::StateExpressionContext * /*ctx*/) override { }
  virtual void exitStateExpression(P416Parser::StateExpressionContext * /*ctx*/) override { }

  virtual void enterSelectExpression(P416Parser::SelectExpressionContext * /*ctx*/) override { }
  virtual void exitSelectExpression(P416Parser::SelectExpressionContext * /*ctx*/) override { }

  virtual void enterSelectCaseList(P416Parser::SelectCaseListContext * /*ctx*/) override { }
  virtual void exitSelectCaseList(P416Parser::SelectCaseListContext * /*ctx*/) override { }

  virtual void enterSelectCase(P416Parser::SelectCaseContext * /*ctx*/) override { }
  virtual void exitSelectCase(P416Parser::SelectCaseContext * /*ctx*/) override { }

  virtual void enterKeySetExpression(P416Parser::KeySetExpressionContext * /*ctx*/) override { }
  virtual void exitKeySetExpression(P416Parser::KeySetExpressionContext * /*ctx*/) override { }

  virtual void enterTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext * /*ctx*/) override { }
  virtual void exitTupleKeySetExpression(P416Parser::TupleKeySetExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleKeySetExpression(P416Parser::SimpleKeySetExpressionContext * /*ctx*/) override { }

  virtual void enterControlDeclaration(P416Parser::ControlDeclarationContext * /*ctx*/) override { }
  virtual void exitControlDeclaration(P416Parser::ControlDeclarationContext * /*ctx*/) override { }

  virtual void enterControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitControlTypeDeclaration(P416Parser::ControlTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext * /*ctx*/) override { }
  virtual void exitControlLocalDeclarations(P416Parser::ControlLocalDeclarationsContext * /*ctx*/) override { }

  virtual void enterControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext * /*ctx*/) override { }
  virtual void exitControlLocalDeclaration(P416Parser::ControlLocalDeclarationContext * /*ctx*/) override { }

  virtual void enterControlBody(P416Parser::ControlBodyContext * /*ctx*/) override { }
  virtual void exitControlBody(P416Parser::ControlBodyContext * /*ctx*/) override { }

  virtual void enterExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext * /*ctx*/) override { }
  virtual void exitExternObjectDeclaration(P416Parser::ExternObjectDeclarationContext * /*ctx*/) override { }

  virtual void enterExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitExternFunctionDeclaration(P416Parser::ExternFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodPrototypes(P416Parser::MethodPrototypesContext * /*ctx*/) override { }
  virtual void exitMethodPrototypes(P416Parser::MethodPrototypesContext * /*ctx*/) override { }

  virtual void enterFunctionPrototype(P416Parser::FunctionPrototypeContext * /*ctx*/) override { }
  virtual void exitFunctionPrototype(P416Parser::FunctionPrototypeContext * /*ctx*/) override { }

  virtual void enterMethodPrototype(P416Parser::MethodPrototypeContext * /*ctx*/) override { }
  virtual void exitMethodPrototype(P416Parser::MethodPrototypeContext * /*ctx*/) override { }

  virtual void enterTypeRef(P416Parser::TypeRefContext * /*ctx*/) override { }
  virtual void exitTypeRef(P416Parser::TypeRefContext * /*ctx*/) override { }

  virtual void enterPrefixedType(P416Parser::PrefixedTypeContext * /*ctx*/) override { }
  virtual void exitPrefixedType(P416Parser::PrefixedTypeContext * /*ctx*/) override { }

  virtual void enterTypeName(P416Parser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(P416Parser::TypeNameContext * /*ctx*/) override { }

  virtual void enterTupleType(P416Parser::TupleTypeContext * /*ctx*/) override { }
  virtual void exitTupleType(P416Parser::TupleTypeContext * /*ctx*/) override { }

  virtual void enterHeaderStackType(P416Parser::HeaderStackTypeContext * /*ctx*/) override { }
  virtual void exitHeaderStackType(P416Parser::HeaderStackTypeContext * /*ctx*/) override { }

  virtual void enterSpecializedType(P416Parser::SpecializedTypeContext * /*ctx*/) override { }
  virtual void exitSpecializedType(P416Parser::SpecializedTypeContext * /*ctx*/) override { }

  virtual void enterBoolType(P416Parser::BoolTypeContext * /*ctx*/) override { }
  virtual void exitBoolType(P416Parser::BoolTypeContext * /*ctx*/) override { }

  virtual void enterErrorType(P416Parser::ErrorTypeContext * /*ctx*/) override { }
  virtual void exitErrorType(P416Parser::ErrorTypeContext * /*ctx*/) override { }

  virtual void enterBitType(P416Parser::BitTypeContext * /*ctx*/) override { }
  virtual void exitBitType(P416Parser::BitTypeContext * /*ctx*/) override { }

  virtual void enterBitSizeType(P416Parser::BitSizeTypeContext * /*ctx*/) override { }
  virtual void exitBitSizeType(P416Parser::BitSizeTypeContext * /*ctx*/) override { }

  virtual void enterIntSizeType(P416Parser::IntSizeTypeContext * /*ctx*/) override { }
  virtual void exitIntSizeType(P416Parser::IntSizeTypeContext * /*ctx*/) override { }

  virtual void enterVarBitSizeType(P416Parser::VarBitSizeTypeContext * /*ctx*/) override { }
  virtual void exitVarBitSizeType(P416Parser::VarBitSizeTypeContext * /*ctx*/) override { }

  virtual void enterTypeOrVoid(P416Parser::TypeOrVoidContext * /*ctx*/) override { }
  virtual void exitTypeOrVoid(P416Parser::TypeOrVoidContext * /*ctx*/) override { }

  virtual void enterOptTypeParameters(P416Parser::OptTypeParametersContext * /*ctx*/) override { }
  virtual void exitOptTypeParameters(P416Parser::OptTypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(P416Parser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(P416Parser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterTypeArg(P416Parser::TypeArgContext * /*ctx*/) override { }
  virtual void exitTypeArg(P416Parser::TypeArgContext * /*ctx*/) override { }

  virtual void enterDontcare(P416Parser::DontcareContext * /*ctx*/) override { }
  virtual void exitDontcare(P416Parser::DontcareContext * /*ctx*/) override { }

  virtual void enterTypeArgumentList(P416Parser::TypeArgumentListContext * /*ctx*/) override { }
  virtual void exitTypeArgumentList(P416Parser::TypeArgumentListContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(P416Parser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(P416Parser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitDerivedTypeDeclaration(P416Parser::DerivedTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitHeaderTypeDeclaration(P416Parser::HeaderTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext * /*ctx*/) override { }
  virtual void exitHeaderUnionDeclaration(P416Parser::HeaderUnionDeclarationContext * /*ctx*/) override { }

  virtual void enterStructTypeDeclaration(P416Parser::StructTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitStructTypeDeclaration(P416Parser::StructTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterStructFieldList(P416Parser::StructFieldListContext * /*ctx*/) override { }
  virtual void exitStructFieldList(P416Parser::StructFieldListContext * /*ctx*/) override { }

  virtual void enterStructField(P416Parser::StructFieldContext * /*ctx*/) override { }
  virtual void exitStructField(P416Parser::StructFieldContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(P416Parser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(P416Parser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterErrorDeclaration(P416Parser::ErrorDeclarationContext * /*ctx*/) override { }
  virtual void exitErrorDeclaration(P416Parser::ErrorDeclarationContext * /*ctx*/) override { }

  virtual void enterMatchKindDeclaration(P416Parser::MatchKindDeclarationContext * /*ctx*/) override { }
  virtual void exitMatchKindDeclaration(P416Parser::MatchKindDeclarationContext * /*ctx*/) override { }

  virtual void enterIdentifierList(P416Parser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(P416Parser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterSimpleTypeDef(P416Parser::SimpleTypeDefContext * /*ctx*/) override { }
  virtual void exitSimpleTypeDef(P416Parser::SimpleTypeDefContext * /*ctx*/) override { }

  virtual void enterDerivedTypeDef(P416Parser::DerivedTypeDefContext * /*ctx*/) override { }
  virtual void exitDerivedTypeDef(P416Parser::DerivedTypeDefContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(P416Parser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(P416Parser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterApplyMethodCall(P416Parser::ApplyMethodCallContext * /*ctx*/) override { }
  virtual void exitApplyMethodCall(P416Parser::ApplyMethodCallContext * /*ctx*/) override { }

  virtual void enterExtractMethodCall(P416Parser::ExtractMethodCallContext * /*ctx*/) override { }
  virtual void exitExtractMethodCall(P416Parser::ExtractMethodCallContext * /*ctx*/) override { }

  virtual void enterCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext * /*ctx*/) override { }
  virtual void exitCallWithoutTypeArgs(P416Parser::CallWithoutTypeArgsContext * /*ctx*/) override { }

  virtual void enterCallWithTypeArgs(P416Parser::CallWithTypeArgsContext * /*ctx*/) override { }
  virtual void exitCallWithTypeArgs(P416Parser::CallWithTypeArgsContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(P416Parser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(P416Parser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(P416Parser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(P416Parser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExitStatement(P416Parser::ExitStatementContext * /*ctx*/) override { }
  virtual void exitExitStatement(P416Parser::ExitStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(P416Parser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(P416Parser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIfElseStatement(P416Parser::IfElseStatementContext * /*ctx*/) override { }
  virtual void exitIfElseStatement(P416Parser::IfElseStatementContext * /*ctx*/) override { }

  virtual void enterDirectApplication(P416Parser::DirectApplicationContext * /*ctx*/) override { }
  virtual void exitDirectApplication(P416Parser::DirectApplicationContext * /*ctx*/) override { }

  virtual void enterStatement(P416Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(P416Parser::StatementContext * /*ctx*/) override { }

  virtual void enterBlockStatement(P416Parser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(P416Parser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterStatOrDeclList(P416Parser::StatOrDeclListContext * /*ctx*/) override { }
  virtual void exitStatOrDeclList(P416Parser::StatOrDeclListContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(P416Parser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(P416Parser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterSwitchCases(P416Parser::SwitchCasesContext * /*ctx*/) override { }
  virtual void exitSwitchCases(P416Parser::SwitchCasesContext * /*ctx*/) override { }

  virtual void enterSwitchCase(P416Parser::SwitchCaseContext * /*ctx*/) override { }
  virtual void exitSwitchCase(P416Parser::SwitchCaseContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(P416Parser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(P416Parser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterStatementOrDeclaration(P416Parser::StatementOrDeclarationContext * /*ctx*/) override { }
  virtual void exitStatementOrDeclaration(P416Parser::StatementOrDeclarationContext * /*ctx*/) override { }

  virtual void enterTableDeclaration(P416Parser::TableDeclarationContext * /*ctx*/) override { }
  virtual void exitTableDeclaration(P416Parser::TableDeclarationContext * /*ctx*/) override { }

  virtual void enterTablePropertyList(P416Parser::TablePropertyListContext * /*ctx*/) override { }
  virtual void exitTablePropertyList(P416Parser::TablePropertyListContext * /*ctx*/) override { }

  virtual void enterKey(P416Parser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(P416Parser::KeyContext * /*ctx*/) override { }

  virtual void enterActions(P416Parser::ActionsContext * /*ctx*/) override { }
  virtual void exitActions(P416Parser::ActionsContext * /*ctx*/) override { }

  virtual void enterConstEntries(P416Parser::ConstEntriesContext * /*ctx*/) override { }
  virtual void exitConstEntries(P416Parser::ConstEntriesContext * /*ctx*/) override { }

  virtual void enterLocalVariable(P416Parser::LocalVariableContext * /*ctx*/) override { }
  virtual void exitLocalVariable(P416Parser::LocalVariableContext * /*ctx*/) override { }

  virtual void enterLocalConstVariable(P416Parser::LocalConstVariableContext * /*ctx*/) override { }
  virtual void exitLocalConstVariable(P416Parser::LocalConstVariableContext * /*ctx*/) override { }

  virtual void enterKeyElementList(P416Parser::KeyElementListContext * /*ctx*/) override { }
  virtual void exitKeyElementList(P416Parser::KeyElementListContext * /*ctx*/) override { }

  virtual void enterKeyElement(P416Parser::KeyElementContext * /*ctx*/) override { }
  virtual void exitKeyElement(P416Parser::KeyElementContext * /*ctx*/) override { }

  virtual void enterActionList(P416Parser::ActionListContext * /*ctx*/) override { }
  virtual void exitActionList(P416Parser::ActionListContext * /*ctx*/) override { }

  virtual void enterEntriesList(P416Parser::EntriesListContext * /*ctx*/) override { }
  virtual void exitEntriesList(P416Parser::EntriesListContext * /*ctx*/) override { }

  virtual void enterEntry(P416Parser::EntryContext * /*ctx*/) override { }
  virtual void exitEntry(P416Parser::EntryContext * /*ctx*/) override { }

  virtual void enterActionWithoutArgs(P416Parser::ActionWithoutArgsContext * /*ctx*/) override { }
  virtual void exitActionWithoutArgs(P416Parser::ActionWithoutArgsContext * /*ctx*/) override { }

  virtual void enterActionWithArgs(P416Parser::ActionWithArgsContext * /*ctx*/) override { }
  virtual void exitActionWithArgs(P416Parser::ActionWithArgsContext * /*ctx*/) override { }

  virtual void enterActionDeclaration(P416Parser::ActionDeclarationContext * /*ctx*/) override { }
  virtual void exitActionDeclaration(P416Parser::ActionDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(P416Parser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(P416Parser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclaration(P416Parser::ConstantDeclarationContext * /*ctx*/) override { }
  virtual void exitConstantDeclaration(P416Parser::ConstantDeclarationContext * /*ctx*/) override { }

  virtual void enterOptInitializer(P416Parser::OptInitializerContext * /*ctx*/) override { }
  virtual void exitOptInitializer(P416Parser::OptInitializerContext * /*ctx*/) override { }

  virtual void enterInitializer(P416Parser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(P416Parser::InitializerContext * /*ctx*/) override { }

  virtual void enterArgumentList(P416Parser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(P416Parser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterArgument(P416Parser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(P416Parser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpressionList(P416Parser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(P416Parser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMember(P416Parser::MemberContext * /*ctx*/) override { }
  virtual void exitMember(P416Parser::MemberContext * /*ctx*/) override { }

  virtual void enterPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext * /*ctx*/) override { }
  virtual void exitPrefixedNonTypeName(P416Parser::PrefixedNonTypeNameContext * /*ctx*/) override { }

  virtual void enterPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext * /*ctx*/) override { }
  virtual void exitPrefixedNameLvalue(P416Parser::PrefixedNameLvalueContext * /*ctx*/) override { }

  virtual void enterArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext * /*ctx*/) override { }
  virtual void exitArrayIndexLvalue(P416Parser::ArrayIndexLvalueContext * /*ctx*/) override { }

  virtual void enterRangeIndexLvalue(P416Parser::RangeIndexLvalueContext * /*ctx*/) override { }
  virtual void exitRangeIndexLvalue(P416Parser::RangeIndexLvalueContext * /*ctx*/) override { }

  virtual void enterPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext * /*ctx*/) override { }
  virtual void exitPrefixedNonTypeNameLvalue(P416Parser::PrefixedNonTypeNameLvalueContext * /*ctx*/) override { }

  virtual void enterMinus(P416Parser::MinusContext * /*ctx*/) override { }
  virtual void exitMinus(P416Parser::MinusContext * /*ctx*/) override { }

  virtual void enterRangeIndex(P416Parser::RangeIndexContext * /*ctx*/) override { }
  virtual void exitRangeIndex(P416Parser::RangeIndexContext * /*ctx*/) override { }

  virtual void enterMod(P416Parser::ModContext * /*ctx*/) override { }
  virtual void exitMod(P416Parser::ModContext * /*ctx*/) override { }

  virtual void enterString(P416Parser::StringContext * /*ctx*/) override { }
  virtual void exitString(P416Parser::StringContext * /*ctx*/) override { }

  virtual void enterBitOr(P416Parser::BitOrContext * /*ctx*/) override { }
  virtual void exitBitOr(P416Parser::BitOrContext * /*ctx*/) override { }

  virtual void enterPrefixedNonType(P416Parser::PrefixedNonTypeContext * /*ctx*/) override { }
  virtual void exitPrefixedNonType(P416Parser::PrefixedNonTypeContext * /*ctx*/) override { }

  virtual void enterInteger(P416Parser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(P416Parser::IntegerContext * /*ctx*/) override { }

  virtual void enterCast(P416Parser::CastContext * /*ctx*/) override { }
  virtual void exitCast(P416Parser::CastContext * /*ctx*/) override { }

  virtual void enterNot(P416Parser::NotContext * /*ctx*/) override { }
  virtual void exitNot(P416Parser::NotContext * /*ctx*/) override { }

  virtual void enterShiftLeft(P416Parser::ShiftLeftContext * /*ctx*/) override { }
  virtual void exitShiftLeft(P416Parser::ShiftLeftContext * /*ctx*/) override { }

  virtual void enterPlusPlus(P416Parser::PlusPlusContext * /*ctx*/) override { }
  virtual void exitPlusPlus(P416Parser::PlusPlusContext * /*ctx*/) override { }

  virtual void enterAnd(P416Parser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(P416Parser::AndContext * /*ctx*/) override { }

  virtual void enterOf(P416Parser::OfContext * /*ctx*/) override { }
  virtual void exitOf(P416Parser::OfContext * /*ctx*/) override { }

  virtual void enterLessThan(P416Parser::LessThanContext * /*ctx*/) override { }
  virtual void exitLessThan(P416Parser::LessThanContext * /*ctx*/) override { }

  virtual void enterTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext * /*ctx*/) override { }
  virtual void exitTempletizedFunctionCall(P416Parser::TempletizedFunctionCallContext * /*ctx*/) override { }

  virtual void enterGreaterThan(P416Parser::GreaterThanContext * /*ctx*/) override { }
  virtual void exitGreaterThan(P416Parser::GreaterThanContext * /*ctx*/) override { }

  virtual void enterMemberAccess(P416Parser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(P416Parser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterExprMemberAccess(P416Parser::ExprMemberAccessContext * /*ctx*/) override { }
  virtual void exitExprMemberAccess(P416Parser::ExprMemberAccessContext * /*ctx*/) override { }

  virtual void enterSet(P416Parser::SetContext * /*ctx*/) override { }
  virtual void exitSet(P416Parser::SetContext * /*ctx*/) override { }

  virtual void enterShifRight(P416Parser::ShifRightContext * /*ctx*/) override { }
  virtual void exitShifRight(P416Parser::ShifRightContext * /*ctx*/) override { }

  virtual void enterOr(P416Parser::OrContext * /*ctx*/) override { }
  virtual void exitOr(P416Parser::OrContext * /*ctx*/) override { }

  virtual void enterStar(P416Parser::StarContext * /*ctx*/) override { }
  virtual void exitStar(P416Parser::StarContext * /*ctx*/) override { }

  virtual void enterFalse(P416Parser::FalseContext * /*ctx*/) override { }
  virtual void exitFalse(P416Parser::FalseContext * /*ctx*/) override { }

  virtual void enterConstructor(P416Parser::ConstructorContext * /*ctx*/) override { }
  virtual void exitConstructor(P416Parser::ConstructorContext * /*ctx*/) override { }

  virtual void enterNotEqual(P416Parser::NotEqualContext * /*ctx*/) override { }
  virtual void exitNotEqual(P416Parser::NotEqualContext * /*ctx*/) override { }

  virtual void enterNonType(P416Parser::NonTypeContext * /*ctx*/) override { }
  virtual void exitNonType(P416Parser::NonTypeContext * /*ctx*/) override { }

  virtual void enterPlus(P416Parser::PlusContext * /*ctx*/) override { }
  virtual void exitPlus(P416Parser::PlusContext * /*ctx*/) override { }

  virtual void enterGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext * /*ctx*/) override { }
  virtual void exitGreaterThanOrEqual(P416Parser::GreaterThanOrEqualContext * /*ctx*/) override { }

  virtual void enterEqual(P416Parser::EqualContext * /*ctx*/) override { }
  virtual void exitEqual(P416Parser::EqualContext * /*ctx*/) override { }

  virtual void enterBitAnd(P416Parser::BitAndContext * /*ctx*/) override { }
  virtual void exitBitAnd(P416Parser::BitAndContext * /*ctx*/) override { }

  virtual void enterUnaryPlus(P416Parser::UnaryPlusContext * /*ctx*/) override { }
  virtual void exitUnaryPlus(P416Parser::UnaryPlusContext * /*ctx*/) override { }

  virtual void enterSlah(P416Parser::SlahContext * /*ctx*/) override { }
  virtual void exitSlah(P416Parser::SlahContext * /*ctx*/) override { }

  virtual void enterNegate(P416Parser::NegateContext * /*ctx*/) override { }
  virtual void exitNegate(P416Parser::NegateContext * /*ctx*/) override { }

  virtual void enterBitXor(P416Parser::BitXorContext * /*ctx*/) override { }
  virtual void exitBitXor(P416Parser::BitXorContext * /*ctx*/) override { }

  virtual void enterLessThanOrEqual(P416Parser::LessThanOrEqualContext * /*ctx*/) override { }
  virtual void exitLessThanOrEqual(P416Parser::LessThanOrEqualContext * /*ctx*/) override { }

  virtual void enterFunctionCall(P416Parser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(P416Parser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterTrue(P416Parser::TrueContext * /*ctx*/) override { }
  virtual void exitTrue(P416Parser::TrueContext * /*ctx*/) override { }

  virtual void enterUnaryMinus(P416Parser::UnaryMinusContext * /*ctx*/) override { }
  virtual void exitUnaryMinus(P416Parser::UnaryMinusContext * /*ctx*/) override { }

  virtual void enterErrorMemberAccess(P416Parser::ErrorMemberAccessContext * /*ctx*/) override { }
  virtual void exitErrorMemberAccess(P416Parser::ErrorMemberAccessContext * /*ctx*/) override { }

  virtual void enterArrayIndex(P416Parser::ArrayIndexContext * /*ctx*/) override { }
  virtual void exitArrayIndex(P416Parser::ArrayIndexContext * /*ctx*/) override { }

  virtual void enterTernary(P416Parser::TernaryContext * /*ctx*/) override { }
  virtual void exitTernary(P416Parser::TernaryContext * /*ctx*/) override { }

  virtual void enterUnaryExpression_not(P416Parser::UnaryExpression_notContext * /*ctx*/) override { }
  virtual void exitUnaryExpression_not(P416Parser::UnaryExpression_notContext * /*ctx*/) override { }

  virtual void enterUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext * /*ctx*/) override { }
  virtual void exitUnaryExpression_tilda(P416Parser::UnaryExpression_tildaContext * /*ctx*/) override { }

  virtual void enterUnaryExpression_plus(P416Parser::UnaryExpression_plusContext * /*ctx*/) override { }
  virtual void exitUnaryExpression_plus(P416Parser::UnaryExpression_plusContext * /*ctx*/) override { }

  virtual void enterUnaryExpression_minus(P416Parser::UnaryExpression_minusContext * /*ctx*/) override { }
  virtual void exitUnaryExpression_minus(P416Parser::UnaryExpression_minusContext * /*ctx*/) override { }

  virtual void enterNumber(P416Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(P416Parser::NumberContext * /*ctx*/) override { }

  virtual void enterDecimalNumber(P416Parser::DecimalNumberContext * /*ctx*/) override { }
  virtual void exitDecimalNumber(P416Parser::DecimalNumberContext * /*ctx*/) override { }

  virtual void enterOctalNumber(P416Parser::OctalNumberContext * /*ctx*/) override { }
  virtual void exitOctalNumber(P416Parser::OctalNumberContext * /*ctx*/) override { }

  virtual void enterBinaryNumber(P416Parser::BinaryNumberContext * /*ctx*/) override { }
  virtual void exitBinaryNumber(P416Parser::BinaryNumberContext * /*ctx*/) override { }

  virtual void enterHexNumber(P416Parser::HexNumberContext * /*ctx*/) override { }
  virtual void exitHexNumber(P416Parser::HexNumberContext * /*ctx*/) override { }

  virtual void enterRealNumber(P416Parser::RealNumberContext * /*ctx*/) override { }
  virtual void exitRealNumber(P416Parser::RealNumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

