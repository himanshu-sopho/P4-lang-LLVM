


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  P416Parser : public antlr4::Parser {
public:
  enum {
    Hex_number = 1, Decimal_number = 2, Octal_number = 3, Binary_number = 4, 
    Real_number = 5, COMMENT = 6, WS = 7, ABSTRACT = 8, ACTION = 9, ACTIONS = 10, 
    ENTRIES = 11, APPLY = 12, EXTRACT = 13, BOOL = 14, BIT = 15, CONST = 16, 
    CONTROL = 17, DEFAULT = 18, ELSE = 19, ENUM = 20, ERROR = 21, EXIT = 22, 
    EXTERN = 23, FALSE = 24, HEADER = 25, HEADER_UNION = 26, IF = 27, IN = 28, 
    INOUT = 29, INT = 30, KEY = 31, MATCH_KIND = 32, OUT = 33, PARSER = 34, 
    PACKAGE = 35, RETURN = 36, SELECT = 37, STATE = 38, STRUCT = 39, SWITCH = 40, 
    TABLE = 41, THIS = 42, TRANSITION = 43, TRUE = 44, TUPLE = 45, TYPEDEF = 46, 
    VARBIT = 47, VOID = 48, DONTCARE = 49, IDENTIFIER = 50, MASK = 51, RANGE = 52, 
    SHL = 53, LAND = 54, LOR = 55, EQ = 56, NE = 57, GE = 58, LE = 59, PP = 60, 
    SEMI = 61, COLON = 62, AT = 63, COMMA = 64, LPARAN = 65, RPARAN = 66, 
    LCURL = 67, RCURL = 68, LBRKT = 69, RBRKT = 70, ASSIGN = 71, DOT = 72, 
    LT = 73, GT = 74, NOT = 75, TILDA = 76, MINUS = 77, PLUS = 78, STAR = 79, 
    SLASH = 80, PRCNT = 81, AND = 82, OR = 83, XOR = 84, QUESTION = 85, 
    STRING_LITERAL = 86
  };

  enum {
    RuleP4program = 0, RuleDeclaration = 1, RuleNonTypeName = 2, RuleName = 3, 
    RuleOptAnnotations = 4, RuleAnnotations = 5, RuleAnnotation = 6, RuleParameterList = 7, 
    RuleParameter = 8, RuleDirection = 9, RulePackageTypeDeclaration = 10, 
    RuleInstantiation = 11, RuleOptConstructorParameters = 12, RuleDotPrefix = 13, 
    RuleParserDeclaration = 14, RuleParserLocalElements = 15, RuleParserLocalElement = 16, 
    RuleParserTypeDeclaration = 17, RuleParserStates = 18, RuleParserState = 19, 
    RuleParserStatements = 20, RuleParserStatement = 21, RuleParserBlockStatement = 22, 
    RuleTransitionStatement = 23, RuleStateExpression = 24, RuleSelectExpression = 25, 
    RuleSelectCaseList = 26, RuleSelectCase = 27, RuleKeySetExpression = 28, 
    RuleTupleKeySetExpression = 29, RuleSimpleKeySetExpression = 30, RuleControlDeclaration = 31, 
    RuleControlTypeDeclaration = 32, RuleControlLocalDeclarations = 33, 
    RuleControlLocalDeclaration = 34, RuleControlBody = 35, RuleExternDeclaration = 36, 
    RuleMethodPrototypes = 37, RuleFunctionPrototype = 38, RuleMethodPrototype = 39, 
    RuleTypeRef = 40, RulePrefixedType = 41, RuleTypeName = 42, RuleTupleType = 43, 
    RuleHeaderStackType = 44, RuleSpecializedType = 45, RuleBaseType = 46, 
    RuleTypeOrVoid = 47, RuleOptTypeParameters = 48, RuleTypeParameterList = 49, 
    RuleTypeArg = 50, RuleDontcare = 51, RuleTypeArgumentList = 52, RuleTypeDeclaration = 53, 
    RuleDerivedTypeDeclaration = 54, RuleHeaderTypeDeclaration = 55, RuleHeaderUnionDeclaration = 56, 
    RuleStructTypeDeclaration = 57, RuleStructFieldList = 58, RuleStructField = 59, 
    RuleEnumDeclaration = 60, RuleErrorDeclaration = 61, RuleMatchKindDeclaration = 62, 
    RuleIdentifierList = 63, RuleTypedefDeclaration = 64, RuleAssignmentStatement = 65, 
    RuleMethodCallStatement = 66, RuleEmptyStatement = 67, RuleReturnStatement = 68, 
    RuleExitStatement = 69, RuleConditionalStatement = 70, RuleDirectApplication = 71, 
    RuleStatement = 72, RuleBlockStatement = 73, RuleStatOrDeclList = 74, 
    RuleSwitchStatement = 75, RuleSwitchCases = 76, RuleSwitchCase = 77, 
    RuleSwitchLabel = 78, RuleStatementOrDeclaration = 79, RuleTableDeclaration = 80, 
    RuleTablePropertyList = 81, RuleTableProperty = 82, RuleKeyElementList = 83, 
    RuleKeyElement = 84, RuleActionList = 85, RuleEntriesList = 86, RuleEntry = 87, 
    RuleActionRef = 88, RuleActionDeclaration = 89, RuleVariableDeclaration = 90, 
    RuleConstantDeclaration = 91, RuleOptInitializer = 92, RuleInitializer = 93, 
    RuleArgumentList = 94, RuleArgument = 95, RuleExpressionList = 96, RuleMember = 97, 
    RulePrefixedNonTypeName = 98, RuleLvalue = 99, RuleExpression = 100, 
    RuleUnaryExpression_not = 101, RuleUnaryExpression_tilda = 102, RuleUnaryExpression_plus = 103, 
    RuleUnaryExpression_minus = 104, RuleNumber = 105, RuleDecimalNumber = 106, 
    RuleOctalNumber = 107, RuleBinaryNumber = 108, RuleHexNumber = 109, 
    RuleRealNumber = 110
  };

  P416Parser(antlr4::TokenStream *input);
  ~P416Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class P4programContext;
  class DeclarationContext;
  class NonTypeNameContext;
  class NameContext;
  class OptAnnotationsContext;
  class AnnotationsContext;
  class AnnotationContext;
  class ParameterListContext;
  class ParameterContext;
  class DirectionContext;
  class PackageTypeDeclarationContext;
  class InstantiationContext;
  class OptConstructorParametersContext;
  class DotPrefixContext;
  class ParserDeclarationContext;
  class ParserLocalElementsContext;
  class ParserLocalElementContext;
  class ParserTypeDeclarationContext;
  class ParserStatesContext;
  class ParserStateContext;
  class ParserStatementsContext;
  class ParserStatementContext;
  class ParserBlockStatementContext;
  class TransitionStatementContext;
  class StateExpressionContext;
  class SelectExpressionContext;
  class SelectCaseListContext;
  class SelectCaseContext;
  class KeySetExpressionContext;
  class TupleKeySetExpressionContext;
  class SimpleKeySetExpressionContext;
  class ControlDeclarationContext;
  class ControlTypeDeclarationContext;
  class ControlLocalDeclarationsContext;
  class ControlLocalDeclarationContext;
  class ControlBodyContext;
  class ExternDeclarationContext;
  class MethodPrototypesContext;
  class FunctionPrototypeContext;
  class MethodPrototypeContext;
  class TypeRefContext;
  class PrefixedTypeContext;
  class TypeNameContext;
  class TupleTypeContext;
  class HeaderStackTypeContext;
  class SpecializedTypeContext;
  class BaseTypeContext;
  class TypeOrVoidContext;
  class OptTypeParametersContext;
  class TypeParameterListContext;
  class TypeArgContext;
  class DontcareContext;
  class TypeArgumentListContext;
  class TypeDeclarationContext;
  class DerivedTypeDeclarationContext;
  class HeaderTypeDeclarationContext;
  class HeaderUnionDeclarationContext;
  class StructTypeDeclarationContext;
  class StructFieldListContext;
  class StructFieldContext;
  class EnumDeclarationContext;
  class ErrorDeclarationContext;
  class MatchKindDeclarationContext;
  class IdentifierListContext;
  class TypedefDeclarationContext;
  class AssignmentStatementContext;
  class MethodCallStatementContext;
  class EmptyStatementContext;
  class ReturnStatementContext;
  class ExitStatementContext;
  class ConditionalStatementContext;
  class DirectApplicationContext;
  class StatementContext;
  class BlockStatementContext;
  class StatOrDeclListContext;
  class SwitchStatementContext;
  class SwitchCasesContext;
  class SwitchCaseContext;
  class SwitchLabelContext;
  class StatementOrDeclarationContext;
  class TableDeclarationContext;
  class TablePropertyListContext;
  class TablePropertyContext;
  class KeyElementListContext;
  class KeyElementContext;
  class ActionListContext;
  class EntriesListContext;
  class EntryContext;
  class ActionRefContext;
  class ActionDeclarationContext;
  class VariableDeclarationContext;
  class ConstantDeclarationContext;
  class OptInitializerContext;
  class InitializerContext;
  class ArgumentListContext;
  class ArgumentContext;
  class ExpressionListContext;
  class MemberContext;
  class PrefixedNonTypeNameContext;
  class LvalueContext;
  class ExpressionContext;
  class UnaryExpression_notContext;
  class UnaryExpression_tildaContext;
  class UnaryExpression_plusContext;
  class UnaryExpression_minusContext;
  class NumberContext;
  class DecimalNumberContext;
  class OctalNumberContext;
  class BinaryNumberContext;
  class HexNumberContext;
  class RealNumberContext; 

  class  P4programContext : public antlr4::ParserRuleContext {
  public:
    P4programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  P4programContext* p4program();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    ExternDeclarationContext *externDeclaration();
    ActionDeclarationContext *actionDeclaration();
    ParserDeclarationContext *parserDeclaration();
    TypeDeclarationContext *typeDeclaration();
    ControlDeclarationContext *controlDeclaration();
    InstantiationContext *instantiation();
    ErrorDeclarationContext *errorDeclaration();
    MatchKindDeclarationContext *matchKindDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  NonTypeNameContext : public antlr4::ParserRuleContext {
  public:
    NonTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *APPLY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *ACTIONS();
    antlr4::tree::TerminalNode *STATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonTypeNameContext* nonTypeName();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonTypeNameContext *nonTypeName();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *APPLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  OptAnnotationsContext : public antlr4::ParserRuleContext {
  public:
    OptAnnotationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptAnnotationsContext* optAnnotations();

  class  AnnotationsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationsContext* annotations();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AnnotationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AnnotationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleAnnotationContext : public AnnotationContext {
  public:
    SimpleAnnotationContext(AnnotationContext *ctx);

    antlr4::tree::TerminalNode *AT();
    NameContext *name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComplexAnnotationContext : public AnnotationContext {
  public:
    ComplexAnnotationContext(AnnotationContext *ctx);

    antlr4::tree::TerminalNode *AT();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ExpressionListContext *expressionList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AnnotationContext* annotation();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    TypeRefContext *typeRef();
    NameContext *name();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DirectionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DirectionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InOutDirectionContext : public DirectionContext {
  public:
    InOutDirectionContext(DirectionContext *ctx);

    antlr4::tree::TerminalNode *INOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InDirectionContext : public DirectionContext {
  public:
    InDirectionContext(DirectionContext *ctx);

    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OutDirectionContext : public DirectionContext {
  public:
    OutDirectionContext(DirectionContext *ctx);

    antlr4::tree::TerminalNode *OUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DirectionContext* direction();

  class  PackageTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PackageTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *PACKAGE();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    OptTypeParametersContext *optTypeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageTypeDeclarationContext* packageTypeDeclaration();

  class  InstantiationContext : public antlr4::ParserRuleContext {
  public:
    InstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    AnnotationsContext *annotations();
    ArgumentListContext *argumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstantiationContext* instantiation();

  class  OptConstructorParametersContext : public antlr4::ParserRuleContext {
  public:
    OptConstructorParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptConstructorParametersContext* optConstructorParameters();

  class  DotPrefixContext : public antlr4::ParserRuleContext {
  public:
    DotPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DotPrefixContext* dotPrefix();

  class  ParserDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParserDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParserTypeDeclarationContext *parserTypeDeclaration();
    antlr4::tree::TerminalNode *LCURL();
    ParserStatesContext *parserStates();
    antlr4::tree::TerminalNode *RCURL();
    OptConstructorParametersContext *optConstructorParameters();
    ParserLocalElementsContext *parserLocalElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserDeclarationContext* parserDeclaration();

  class  ParserLocalElementsContext : public antlr4::ParserRuleContext {
  public:
    ParserLocalElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParserLocalElementContext *> parserLocalElement();
    ParserLocalElementContext* parserLocalElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserLocalElementsContext* parserLocalElements();

  class  ParserLocalElementContext : public antlr4::ParserRuleContext {
  public:
    ParserLocalElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    VariableDeclarationContext *variableDeclaration();
    InstantiationContext *instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserLocalElementContext* parserLocalElement();

  class  ParserTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParserTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *PARSER();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    OptTypeParametersContext *optTypeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserTypeDeclarationContext* parserTypeDeclaration();

  class  ParserStatesContext : public antlr4::ParserRuleContext {
  public:
    ParserStatesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParserStateContext *> parserState();
    ParserStateContext* parserState(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserStatesContext* parserStates();

  class  ParserStateContext : public antlr4::ParserRuleContext {
  public:
    ParserStateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *STATE();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    ParserStatementsContext *parserStatements();
    TransitionStatementContext *transitionStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserStateContext* parserState();

  class  ParserStatementsContext : public antlr4::ParserRuleContext {
  public:
    ParserStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParserStatementContext *> parserStatement();
    ParserStatementContext* parserStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserStatementsContext* parserStatements();

  class  ParserStatementContext : public antlr4::ParserRuleContext {
  public:
    ParserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentStatementContext *assignmentStatement();
    MethodCallStatementContext *methodCallStatement();
    DirectApplicationContext *directApplication();
    ParserBlockStatementContext *parserBlockStatement();
    ConstantDeclarationContext *constantDeclaration();
    VariableDeclarationContext *variableDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserStatementContext* parserStatement();

  class  ParserBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    ParserBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *LCURL();
    ParserStatementsContext *parserStatements();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserBlockStatementContext* parserBlockStatement();

  class  TransitionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSITION();
    StateExpressionContext *stateExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransitionStatementContext* transitionStatement();

  class  StateExpressionContext : public antlr4::ParserRuleContext {
  public:
    StateExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    SelectExpressionContext *selectExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StateExpressionContext* stateExpression();

  class  SelectExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    ExpressionListContext *expressionList();
    SelectCaseListContext *selectCaseList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectExpressionContext* selectExpression();

  class  SelectCaseListContext : public antlr4::ParserRuleContext {
  public:
    SelectCaseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectCaseContext *> selectCase();
    SelectCaseContext* selectCase(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectCaseListContext* selectCaseList();

  class  SelectCaseContext : public antlr4::ParserRuleContext {
  public:
    SelectCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeySetExpressionContext *keySetExpression();
    antlr4::tree::TerminalNode *COLON();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectCaseContext* selectCase();

  class  KeySetExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeySetExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TupleKeySetExpressionContext *tupleKeySetExpression();
    SimpleKeySetExpressionContext *simpleKeySetExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeySetExpressionContext* keySetExpression();

  class  TupleKeySetExpressionContext : public antlr4::ParserRuleContext {
  public:
    TupleKeySetExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPARAN();
    std::vector<SimpleKeySetExpressionContext *> simpleKeySetExpression();
    SimpleKeySetExpressionContext* simpleKeySetExpression(size_t i);
    antlr4::tree::TerminalNode *RPARAN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleKeySetExpressionContext* tupleKeySetExpression();

  class  SimpleKeySetExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleKeySetExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DONTCARE();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *RANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleKeySetExpressionContext* simpleKeySetExpression();

  class  ControlDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ControlDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ControlTypeDeclarationContext *controlTypeDeclaration();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *APPLY();
    ControlBodyContext *controlBody();
    antlr4::tree::TerminalNode *RCURL();
    OptConstructorParametersContext *optConstructorParameters();
    ControlLocalDeclarationsContext *controlLocalDeclarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlDeclarationContext* controlDeclaration();

  class  ControlTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ControlTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *CONTROL();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    OptTypeParametersContext *optTypeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlTypeDeclarationContext* controlTypeDeclaration();

  class  ControlLocalDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    ControlLocalDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ControlLocalDeclarationContext *> controlLocalDeclaration();
    ControlLocalDeclarationContext* controlLocalDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlLocalDeclarationsContext* controlLocalDeclarations();

  class  ControlLocalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ControlLocalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    ActionDeclarationContext *actionDeclaration();
    TableDeclarationContext *tableDeclaration();
    InstantiationContext *instantiation();
    VariableDeclarationContext *variableDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlLocalDeclarationContext* controlLocalDeclaration();

  class  ControlBodyContext : public antlr4::ParserRuleContext {
  public:
    ControlBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlBodyContext* controlBody();

  class  ExternDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExternDeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExternDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExternObjectDeclarationContext : public ExternDeclarationContext {
  public:
    ExternObjectDeclarationContext(ExternDeclarationContext *ctx);

    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *EXTERN();
    NonTypeNameContext *nonTypeName();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    OptTypeParametersContext *optTypeParameters();
    MethodPrototypesContext *methodPrototypes();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExternFunctionDeclarationContext : public ExternDeclarationContext {
  public:
    ExternFunctionDeclarationContext(ExternDeclarationContext *ctx);

    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *EXTERN();
    FunctionPrototypeContext *functionPrototype();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExternDeclarationContext* externDeclaration();

  class  MethodPrototypesContext : public antlr4::ParserRuleContext {
  public:
    MethodPrototypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MethodPrototypeContext *> methodPrototype();
    MethodPrototypeContext* methodPrototype(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodPrototypesContext* methodPrototypes();

  class  FunctionPrototypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeOrVoidContext *typeOrVoid();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    OptTypeParametersContext *optTypeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionPrototypeContext* functionPrototype();

  class  MethodPrototypeContext : public antlr4::ParserRuleContext {
  public:
    MethodPrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeContext *functionPrototype();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodPrototypeContext* methodPrototype();

  class  TypeRefContext : public antlr4::ParserRuleContext {
  public:
    TypeRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeContext *baseType();
    TypeNameContext *typeName();
    SpecializedTypeContext *specializedType();
    HeaderStackTypeContext *headerStackType();
    TupleTypeContext *tupleType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeRefContext* typeRef();

  class  PrefixedTypeContext : public antlr4::ParserRuleContext {
  public:
    PrefixedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    DotPrefixContext *dotPrefix();
    antlr4::tree::TerminalNode *ERROR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixedTypeContext* prefixedType();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixedTypeContext *prefixedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  TupleTypeContext : public antlr4::ParserRuleContext {
  public:
    TupleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TUPLE();
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleTypeContext* tupleType();

  class  HeaderStackTypeContext : public antlr4::ParserRuleContext {
  public:
    HeaderStackTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *LBRKT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRKT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderStackTypeContext* headerStackType();

  class  SpecializedTypeContext : public antlr4::ParserRuleContext {
  public:
    SpecializedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixedTypeContext *prefixedType();
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecializedTypeContext* specializedType();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BaseTypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BaseTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ErrorTypeContext : public BaseTypeContext {
  public:
    ErrorTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *ERROR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarBitSizeTypeContext : public BaseTypeContext {
  public:
    VarBitSizeTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *VARBIT();
    antlr4::tree::TerminalNode *LT();
    NumberContext *number();
    antlr4::tree::TerminalNode *GT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitSizeTypeContext : public BaseTypeContext {
  public:
    BitSizeTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *LT();
    NumberContext *number();
    antlr4::tree::TerminalNode *GT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitTypeContext : public BaseTypeContext {
  public:
    BitTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *BIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolTypeContext : public BaseTypeContext {
  public:
    BoolTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *BOOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntSizeTypeContext : public BaseTypeContext {
  public:
    IntSizeTypeContext(BaseTypeContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LT();
    NumberContext *number();
    antlr4::tree::TerminalNode *GT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BaseTypeContext* baseType();

  class  TypeOrVoidContext : public antlr4::ParserRuleContext {
  public:
    TypeOrVoidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID();
    TypeRefContext *typeRef();
    NonTypeNameContext *nonTypeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeOrVoidContext* typeOrVoid();

  class  OptTypeParametersContext : public antlr4::ParserRuleContext {
  public:
    OptTypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    TypeParameterListContext *typeParameterList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptTypeParametersContext* optTypeParameters();

  class  TypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NonTypeNameContext *> nonTypeName();
    NonTypeNameContext* nonTypeName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterListContext* typeParameterList();

  class  TypeArgContext : public antlr4::ParserRuleContext {
  public:
    TypeArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DontcareContext *dontcare();
    TypeRefContext *typeRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgContext* typeArg();

  class  DontcareContext : public antlr4::ParserRuleContext {
  public:
    DontcareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DONTCARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DontcareContext* dontcare();

  class  TypeArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeArgContext *> typeArg();
    TypeArgContext* typeArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentListContext* typeArgumentList();

  class  TypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DerivedTypeDeclarationContext *derivedTypeDeclaration();
    TypedefDeclarationContext *typedefDeclaration();
    ParserTypeDeclarationContext *parserTypeDeclaration();
    antlr4::tree::TerminalNode *SEMI();
    ControlTypeDeclarationContext *controlTypeDeclaration();
    PackageTypeDeclarationContext *packageTypeDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclarationContext* typeDeclaration();

  class  DerivedTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    DerivedTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderTypeDeclarationContext *headerTypeDeclaration();
    HeaderUnionDeclarationContext *headerUnionDeclaration();
    StructTypeDeclarationContext *structTypeDeclaration();
    EnumDeclarationContext *enumDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DerivedTypeDeclarationContext* derivedTypeDeclaration();

  class  HeaderTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    HeaderTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *HEADER();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    StructFieldListContext *structFieldList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderTypeDeclarationContext* headerTypeDeclaration();

  class  HeaderUnionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    HeaderUnionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *HEADER_UNION();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    StructFieldListContext *structFieldList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderUnionDeclarationContext* headerUnionDeclaration();

  class  StructTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StructTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *STRUCT();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    StructFieldListContext *structFieldList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeDeclarationContext* structTypeDeclaration();

  class  StructFieldListContext : public antlr4::ParserRuleContext {
  public:
    StructFieldListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructFieldContext *> structField();
    StructFieldContext* structField(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructFieldListContext* structFieldList();

  class  StructFieldContext : public antlr4::ParserRuleContext {
  public:
    StructFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    TypeRefContext *typeRef();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructFieldContext* structField();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *ENUM();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  ErrorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ErrorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *LCURL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorDeclarationContext* errorDeclaration();

  class  MatchKindDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MatchKindDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATCH_KIND();
    antlr4::tree::TerminalNode *LCURL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchKindDeclarationContext* matchKindDeclaration();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  TypedefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypedefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypedefDeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypedefDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DerivedTypeDefContext : public TypedefDeclarationContext {
  public:
    DerivedTypeDefContext(TypedefDeclarationContext *ctx);

    antlr4::tree::TerminalNode *TYPEDEF();
    DerivedTypeDeclarationContext *derivedTypeDeclaration();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    AnnotationsContext *annotations();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleTypeDefContext : public TypedefDeclarationContext {
  public:
    SimpleTypeDefContext(TypedefDeclarationContext *ctx);

    antlr4::tree::TerminalNode *TYPEDEF();
    TypeRefContext *typeRef();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    AnnotationsContext *annotations();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypedefDeclarationContext* typedefDeclaration();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  MethodCallStatementContext : public antlr4::ParserRuleContext {
  public:
    MethodCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MethodCallStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(MethodCallStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExtractMethodCallContext : public MethodCallStatementContext {
  public:
    ExtractMethodCallContext(MethodCallStatementContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ApplyMethodCallContext : public MethodCallStatementContext {
  public:
    ApplyMethodCallContext(MethodCallStatementContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *APPLY();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *SEMI();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallWithTypeArgsContext : public MethodCallStatementContext {
  public:
    CallWithTypeArgsContext(MethodCallStatementContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *SEMI();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallWithoutTypeArgsContext : public MethodCallStatementContext {
  public:
    CallWithoutTypeArgsContext(MethodCallStatementContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *SEMI();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MethodCallStatementContext* methodCallStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ExitStatementContext : public antlr4::ParserRuleContext {
  public:
    ExitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExitStatementContext* exitStatement();

  class  ConditionalStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ConditionalStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfElseStatementContext : public ConditionalStatementContext {
  public:
    IfElseStatementContext(ConditionalStatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPARAN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPARAN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStatementContext : public ConditionalStatementContext {
  public:
    IfStatementContext(ConditionalStatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPARAN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPARAN();
    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalStatementContext* conditionalStatement();

  class  DirectApplicationContext : public antlr4::ParserRuleContext {
  public:
    DirectApplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *APPLY();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *SEMI();
    ArgumentListContext *argumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectApplicationContext* directApplication();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentStatementContext *assignmentStatement();
    MethodCallStatementContext *methodCallStatement();
    DirectApplicationContext *directApplication();
    ConditionalStatementContext *conditionalStatement();
    EmptyStatementContext *emptyStatement();
    BlockStatementContext *blockStatement();
    ExitStatementContext *exitStatement();
    ReturnStatementContext *returnStatement();
    SwitchStatementContext *switchStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    StatOrDeclListContext *statOrDeclList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  StatOrDeclListContext : public antlr4::ParserRuleContext {
  public:
    StatOrDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementOrDeclarationContext *> statementOrDeclaration();
    StatementOrDeclarationContext* statementOrDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatOrDeclListContext* statOrDeclList();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LPARAN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPARAN();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    SwitchCasesContext *switchCases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchCasesContext : public antlr4::ParserRuleContext {
  public:
    SwitchCasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchCaseContext *> switchCase();
    SwitchCaseContext* switchCase(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchCasesContext* switchCases();

  class  SwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    SwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SwitchLabelContext *switchLabel();
    antlr4::tree::TerminalNode *COLON();
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchCaseContext* switchCase();

  class  SwitchLabelContext : public antlr4::ParserRuleContext {
  public:
    SwitchLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchLabelContext* switchLabel();

  class  StatementOrDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StatementOrDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    ConstantDeclarationContext *constantDeclaration();
    StatementContext *statement();
    InstantiationContext *instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementOrDeclarationContext* statementOrDeclaration();

  class  TableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *TABLE();
    NameContext *name();
    antlr4::tree::TerminalNode *LCURL();
    TablePropertyListContext *tablePropertyList();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableDeclarationContext* tableDeclaration();

  class  TablePropertyListContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablePropertyContext *> tableProperty();
    TablePropertyContext* tableProperty(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyListContext* tablePropertyList();

  class  TablePropertyContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TablePropertyContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TablePropertyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstEntriesContext : public TablePropertyContext {
  public:
    ConstEntriesContext(TablePropertyContext *ctx);

    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *ENTRIES();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *LCURL();
    EntriesListContext *entriesList();
    antlr4::tree::TerminalNode *RCURL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LocalConstVariableContext : public TablePropertyContext {
  public:
    LocalConstVariableContext(TablePropertyContext *ctx);

    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LocalVariableContext : public TablePropertyContext {
  public:
    LocalVariableContext(TablePropertyContext *ctx);

    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ActionsContext : public TablePropertyContext {
  public:
    ActionsContext(TablePropertyContext *ctx);

    antlr4::tree::TerminalNode *ACTIONS();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *LCURL();
    ActionListContext *actionList();
    antlr4::tree::TerminalNode *RCURL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  KeyContext : public TablePropertyContext {
  public:
    KeyContext(TablePropertyContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    KeyElementListContext *keyElementList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TablePropertyContext* tableProperty();

  class  KeyElementListContext : public antlr4::ParserRuleContext {
  public:
    KeyElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyElementContext *> keyElement();
    KeyElementContext* keyElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyElementListContext* keyElementList();

  class  KeyElementContext : public antlr4::ParserRuleContext {
  public:
    KeyElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    NameContext *name();
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyElementContext* keyElement();

  class  ActionListContext : public antlr4::ParserRuleContext {
  public:
    ActionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ActionRefContext *> actionRef();
    ActionRefContext* actionRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionListContext* actionList();

  class  EntriesListContext : public antlr4::ParserRuleContext {
  public:
    EntriesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EntryContext *> entry();
    EntryContext* entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntriesListContext* entriesList();

  class  EntryContext : public antlr4::ParserRuleContext {
  public:
    EntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    KeySetExpressionContext *keySetExpression();
    antlr4::tree::TerminalNode *COLON();
    ActionRefContext *actionRef();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntryContext* entry();

  class  ActionRefContext : public antlr4::ParserRuleContext {
  public:
    ActionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ActionRefContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ActionRefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ActionWithoutArgsContext : public ActionRefContext {
  public:
    ActionWithoutArgsContext(ActionRefContext *ctx);

    OptAnnotationsContext *optAnnotations();
    NameContext *name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ActionWithArgsContext : public ActionRefContext {
  public:
    ActionWithArgsContext(ActionRefContext *ctx);

    OptAnnotationsContext *optAnnotations();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ActionRefContext* actionRef();

  class  ActionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ActionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *ACTION();
    NameContext *name();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    BlockStatementContext *blockStatement();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionDeclarationContext* actionDeclaration();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    AnnotationsContext *annotations();
    OptInitializerContext *optInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  ConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptAnnotationsContext *optAnnotations();
    antlr4::tree::TerminalNode *CONST();
    TypeRefContext *typeRef();
    NameContext *name();
    antlr4::tree::TerminalNode *ASSIGN();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class  OptInitializerContext : public antlr4::ParserRuleContext {
  public:
    OptInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptInitializerContext* optInitializer();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  MemberContext : public antlr4::ParserRuleContext {
  public:
    MemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberContext* member();

  class  PrefixedNonTypeNameContext : public antlr4::ParserRuleContext {
  public:
    PrefixedNonTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonTypeNameContext *nonTypeName();
    DotPrefixContext *dotPrefix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixedNonTypeNameContext* prefixedNonTypeName();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LvalueContext() : antlr4::ParserRuleContext() { }
    void copyFrom(LvalueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrefixedNameLvalueContext : public LvalueContext {
  public:
    PrefixedNameLvalueContext(LvalueContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *DOT();
    MemberContext *member();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayIndexLvalueContext : public LvalueContext {
  public:
    ArrayIndexLvalueContext(LvalueContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *LBRKT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRKT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeIndexLvalueContext : public LvalueContext {
  public:
    RangeIndexLvalueContext(LvalueContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *LBRKT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RBRKT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixedNonTypeNameLvalueContext : public LvalueContext {
  public:
    PrefixedNonTypeNameLvalueContext(LvalueContext *ctx);

    PrefixedNonTypeNameContext *prefixedNonTypeName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LvalueContext* lvalue();
  LvalueContext* lvalue(int precedence);
  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinusContext : public ExpressionContext {
  public:
    MinusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeIndexContext : public ExpressionContext {
  public:
    RangeIndexContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LBRKT();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RBRKT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModContext : public ExpressionContext {
  public:
    ModContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PRCNT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public ExpressionContext {
  public:
    StringContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrContext : public ExpressionContext {
  public:
    BitOrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixedNonTypeContext : public ExpressionContext {
  public:
    PrefixedNonTypeContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DOT();
    NonTypeNameContext *nonTypeName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerContext : public ExpressionContext {
  public:
    IntegerContext(ExpressionContext *ctx);

    NumberContext *number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastContext : public ExpressionContext {
  public:
    CastContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPARAN();
    TypeRefContext *typeRef();
    antlr4::tree::TerminalNode *RPARAN();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotContext : public ExpressionContext {
  public:
    NotContext(ExpressionContext *ctx);

    UnaryExpression_notContext *unaryExpression_not();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShiftLeftContext : public ExpressionContext {
  public:
    ShiftLeftContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SHL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusPlusContext : public ExpressionContext {
  public:
    PlusPlusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExpressionContext {
  public:
    AndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OfContext : public ExpressionContext {
  public:
    OfContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPARAN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPARAN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessThanContext : public ExpressionContext {
  public:
    LessThanContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TempletizedFunctionCallContext : public ExpressionContext {
  public:
    TempletizedFunctionCallContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterThanContext : public ExpressionContext {
  public:
    GreaterThanContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *GT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberAccessContext : public ExpressionContext {
  public:
    MemberAccessContext(ExpressionContext *ctx);

    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    MemberContext *member();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMemberAccessContext : public ExpressionContext {
  public:
    ExprMemberAccessContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    MemberContext *member();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetContext : public ExpressionContext {
  public:
    SetContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    ExpressionListContext *expressionList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShifRightContext : public ExpressionContext {
  public:
    ShifRightContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public ExpressionContext {
  public:
    OrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StarContext : public ExpressionContext {
  public:
    StarContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FalseContext : public ExpressionContext {
  public:
    FalseContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *FALSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstructorContext : public ExpressionContext {
  public:
    ConstructorContext(ExpressionContext *ctx);

    TypeRefContext *typeRef();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotEqualContext : public ExpressionContext {
  public:
    NotEqualContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonTypeContext : public ExpressionContext {
  public:
    NonTypeContext(ExpressionContext *ctx);

    NonTypeNameContext *nonTypeName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusContext : public ExpressionContext {
  public:
    PlusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterThanOrEqualContext : public ExpressionContext {
  public:
    GreaterThanOrEqualContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *GE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualContext : public ExpressionContext {
  public:
    EqualContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndContext : public ExpressionContext {
  public:
    BitAndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryPlusContext : public ExpressionContext {
  public:
    UnaryPlusContext(ExpressionContext *ctx);

    UnaryExpression_plusContext *unaryExpression_plus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SlahContext : public ExpressionContext {
  public:
    SlahContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegateContext : public ExpressionContext {
  public:
    NegateContext(ExpressionContext *ctx);

    UnaryExpression_tildaContext *unaryExpression_tilda();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXorContext : public ExpressionContext {
  public:
    BitXorContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessThanOrEqualContext : public ExpressionContext {
  public:
    LessThanOrEqualContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public ExpressionContext {
  public:
    FunctionCallContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LPARAN();
    antlr4::tree::TerminalNode *RPARAN();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TrueContext : public ExpressionContext {
  public:
    TrueContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *TRUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryMinusContext : public ExpressionContext {
  public:
    UnaryMinusContext(ExpressionContext *ctx);

    UnaryExpression_minusContext *unaryExpression_minus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ErrorMemberAccessContext : public ExpressionContext {
  public:
    ErrorMemberAccessContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *DOT();
    MemberContext *member();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayIndexContext : public ExpressionContext {
  public:
    ArrayIndexContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LBRKT();
    antlr4::tree::TerminalNode *RBRKT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryContext : public ExpressionContext {
  public:
    TernaryContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *COLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  UnaryExpression_notContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpression_notContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_notContext* unaryExpression_not();

  class  UnaryExpression_tildaContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpression_tildaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TILDA();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_tildaContext* unaryExpression_tilda();

  class  UnaryExpression_plusContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpression_plusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_plusContext* unaryExpression_plus();

  class  UnaryExpression_minusContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpression_minusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_minusContext* unaryExpression_minus();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalNumberContext *decimalNumber();
    OctalNumberContext *octalNumber();
    BinaryNumberContext *binaryNumber();
    HexNumberContext *hexNumber();
    RealNumberContext *realNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  DecimalNumberContext : public antlr4::ParserRuleContext {
  public:
    DecimalNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalNumberContext* decimalNumber();

  class  OctalNumberContext : public antlr4::ParserRuleContext {
  public:
    OctalNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Octal_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OctalNumberContext* octalNumber();

  class  BinaryNumberContext : public antlr4::ParserRuleContext {
  public:
    BinaryNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Binary_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryNumberContext* binaryNumber();

  class  HexNumberContext : public antlr4::ParserRuleContext {
  public:
    HexNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Hex_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexNumberContext* hexNumber();

  class  RealNumberContext : public antlr4::ParserRuleContext {
  public:
    RealNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Real_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealNumberContext* realNumber();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool lvalueSempred(LvalueContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

