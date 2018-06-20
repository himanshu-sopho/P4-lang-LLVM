


// Generated from P416.g4 by ANTLR 4.7.1


#include "P416Listener.h"
#include "P416Visitor.h"

#include "P416Parser.h"


using namespace antlrcpp;
using namespace antlr4;

P416Parser::P416Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

P416Parser::~P416Parser() {
  delete _interpreter;
}

std::string P416Parser::getGrammarFileName() const {
  return "P416.g4";
}

const std::vector<std::string>& P416Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& P416Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- P4programContext ------------------------------------------------------------------

P416Parser::P4programContext::P4programContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::DeclarationContext *> P416Parser::P4programContext::declaration() {
  return getRuleContexts<P416Parser::DeclarationContext>();
}

P416Parser::DeclarationContext* P416Parser::P4programContext::declaration(size_t i) {
  return getRuleContext<P416Parser::DeclarationContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::P4programContext::SEMI() {
  return getTokens(P416Parser::SEMI);
}

tree::TerminalNode* P416Parser::P4programContext::SEMI(size_t i) {
  return getToken(P416Parser::SEMI, i);
}


size_t P416Parser::P4programContext::getRuleIndex() const {
  return P416Parser::RuleP4program;
}

void P416Parser::P4programContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterP4program(this);
}

void P416Parser::P4programContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitP4program(this);
}


antlrcpp::Any P416Parser::P4programContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitP4program(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::P4programContext* P416Parser::p4program() {
  P4programContext *_localctx = _tracker.createInstance<P4programContext>(_ctx, getState());
  enterRule(_localctx, 0, P416Parser::RuleP4program);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 9) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 9)) & ((1ULL << (P416Parser::ACTION - 9))
        | (1ULL << (P416Parser::BOOL - 9))
        | (1ULL << (P416Parser::BIT - 9))
        | (1ULL << (P416Parser::CONST - 9))
        | (1ULL << (P416Parser::CONTROL - 9))
        | (1ULL << (P416Parser::ENUM - 9))
        | (1ULL << (P416Parser::ERROR - 9))
        | (1ULL << (P416Parser::EXTERN - 9))
        | (1ULL << (P416Parser::HEADER - 9))
        | (1ULL << (P416Parser::HEADER_UNION - 9))
        | (1ULL << (P416Parser::INT - 9))
        | (1ULL << (P416Parser::MATCH_KIND - 9))
        | (1ULL << (P416Parser::PARSER - 9))
        | (1ULL << (P416Parser::PACKAGE - 9))
        | (1ULL << (P416Parser::STRUCT - 9))
        | (1ULL << (P416Parser::TUPLE - 9))
        | (1ULL << (P416Parser::TYPEDEF - 9))
        | (1ULL << (P416Parser::VARBIT - 9))
        | (1ULL << (P416Parser::IDENTIFIER - 9))
        | (1ULL << (P416Parser::AT - 9))
        | (1ULL << (P416Parser::DOT - 9)))) != 0)) {
        setState(223);
        declaration();
        setState(225);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == P416Parser::SEMI) {
          setState(224);
          match(P416Parser::SEMI);
        }
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

P416Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ConstantDeclarationContext* P416Parser::DeclarationContext::constantDeclaration() {
  return getRuleContext<P416Parser::ConstantDeclarationContext>(0);
}

P416Parser::ExternDeclarationContext* P416Parser::DeclarationContext::externDeclaration() {
  return getRuleContext<P416Parser::ExternDeclarationContext>(0);
}

P416Parser::ActionDeclarationContext* P416Parser::DeclarationContext::actionDeclaration() {
  return getRuleContext<P416Parser::ActionDeclarationContext>(0);
}

P416Parser::ParserDeclarationContext* P416Parser::DeclarationContext::parserDeclaration() {
  return getRuleContext<P416Parser::ParserDeclarationContext>(0);
}

P416Parser::TypeDeclarationContext* P416Parser::DeclarationContext::typeDeclaration() {
  return getRuleContext<P416Parser::TypeDeclarationContext>(0);
}

P416Parser::ControlDeclarationContext* P416Parser::DeclarationContext::controlDeclaration() {
  return getRuleContext<P416Parser::ControlDeclarationContext>(0);
}

P416Parser::InstantiationContext* P416Parser::DeclarationContext::instantiation() {
  return getRuleContext<P416Parser::InstantiationContext>(0);
}

P416Parser::ErrorDeclarationContext* P416Parser::DeclarationContext::errorDeclaration() {
  return getRuleContext<P416Parser::ErrorDeclarationContext>(0);
}

P416Parser::MatchKindDeclarationContext* P416Parser::DeclarationContext::matchKindDeclaration() {
  return getRuleContext<P416Parser::MatchKindDeclarationContext>(0);
}


size_t P416Parser::DeclarationContext::getRuleIndex() const {
  return P416Parser::RuleDeclaration;
}

void P416Parser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void P416Parser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any P416Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DeclarationContext* P416Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, P416Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(234);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(235);
      externDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(236);
      actionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(237);
      parserDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(238);
      typeDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(239);
      controlDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(240);
      instantiation();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(241);
      errorDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(242);
      matchKindDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonTypeNameContext ------------------------------------------------------------------

P416Parser::NonTypeNameContext::NonTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::NonTypeNameContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

tree::TerminalNode* P416Parser::NonTypeNameContext::APPLY() {
  return getToken(P416Parser::APPLY, 0);
}

tree::TerminalNode* P416Parser::NonTypeNameContext::KEY() {
  return getToken(P416Parser::KEY, 0);
}

tree::TerminalNode* P416Parser::NonTypeNameContext::ACTIONS() {
  return getToken(P416Parser::ACTIONS, 0);
}

tree::TerminalNode* P416Parser::NonTypeNameContext::STATE() {
  return getToken(P416Parser::STATE, 0);
}


size_t P416Parser::NonTypeNameContext::getRuleIndex() const {
  return P416Parser::RuleNonTypeName;
}

void P416Parser::NonTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonTypeName(this);
}

void P416Parser::NonTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonTypeName(this);
}


antlrcpp::Any P416Parser::NonTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNonTypeName(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::NonTypeNameContext* P416Parser::nonTypeName() {
  NonTypeNameContext *_localctx = _tracker.createInstance<NonTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 4, P416Parser::RuleNonTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::IDENTIFIER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

P416Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::NonTypeNameContext* P416Parser::NameContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}

tree::TerminalNode* P416Parser::NameContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

tree::TerminalNode* P416Parser::NameContext::ERROR() {
  return getToken(P416Parser::ERROR, 0);
}

tree::TerminalNode* P416Parser::NameContext::EXTRACT() {
  return getToken(P416Parser::EXTRACT, 0);
}

tree::TerminalNode* P416Parser::NameContext::APPLY() {
  return getToken(P416Parser::APPLY, 0);
}


size_t P416Parser::NameContext::getRuleIndex() const {
  return P416Parser::RuleName;
}

void P416Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void P416Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any P416Parser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::NameContext* P416Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 6, P416Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(247);
      nonTypeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(248);
      match(P416Parser::IDENTIFIER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(249);
      match(P416Parser::ERROR);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(250);
      match(P416Parser::EXTRACT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(251);
      match(P416Parser::APPLY);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptAnnotationsContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext::OptAnnotationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::AnnotationsContext* P416Parser::OptAnnotationsContext::annotations() {
  return getRuleContext<P416Parser::AnnotationsContext>(0);
}


size_t P416Parser::OptAnnotationsContext::getRuleIndex() const {
  return P416Parser::RuleOptAnnotations;
}

void P416Parser::OptAnnotationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptAnnotations(this);
}

void P416Parser::OptAnnotationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptAnnotations(this);
}


antlrcpp::Any P416Parser::OptAnnotationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOptAnnotations(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::OptAnnotationsContext* P416Parser::optAnnotations() {
  OptAnnotationsContext *_localctx = _tracker.createInstance<OptAnnotationsContext>(_ctx, getState());
  enterRule(_localctx, 8, P416Parser::RuleOptAnnotations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::AT) {
      setState(254);
      annotations();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationsContext ------------------------------------------------------------------

P416Parser::AnnotationsContext::AnnotationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::AnnotationContext *> P416Parser::AnnotationsContext::annotation() {
  return getRuleContexts<P416Parser::AnnotationContext>();
}

P416Parser::AnnotationContext* P416Parser::AnnotationsContext::annotation(size_t i) {
  return getRuleContext<P416Parser::AnnotationContext>(i);
}


size_t P416Parser::AnnotationsContext::getRuleIndex() const {
  return P416Parser::RuleAnnotations;
}

void P416Parser::AnnotationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotations(this);
}

void P416Parser::AnnotationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotations(this);
}


antlrcpp::Any P416Parser::AnnotationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitAnnotations(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::AnnotationsContext* P416Parser::annotations() {
  AnnotationsContext *_localctx = _tracker.createInstance<AnnotationsContext>(_ctx, getState());
  enterRule(_localctx, 10, P416Parser::RuleAnnotations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(257);
      annotation();
      setState(260); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == P416Parser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

P416Parser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::AnnotationContext::getRuleIndex() const {
  return P416Parser::RuleAnnotation;
}

void P416Parser::AnnotationContext::copyFrom(AnnotationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleAnnotationContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::SimpleAnnotationContext::AT() {
  return getToken(P416Parser::AT, 0);
}

P416Parser::NameContext* P416Parser::SimpleAnnotationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

P416Parser::SimpleAnnotationContext::SimpleAnnotationContext(AnnotationContext *ctx) { copyFrom(ctx); }

void P416Parser::SimpleAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleAnnotation(this);
}
void P416Parser::SimpleAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleAnnotation(this);
}

antlrcpp::Any P416Parser::SimpleAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSimpleAnnotation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComplexAnnotationContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::ComplexAnnotationContext::AT() {
  return getToken(P416Parser::AT, 0);
}

P416Parser::NameContext* P416Parser::ComplexAnnotationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ComplexAnnotationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ComplexAnnotationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ExpressionListContext* P416Parser::ComplexAnnotationContext::expressionList() {
  return getRuleContext<P416Parser::ExpressionListContext>(0);
}

P416Parser::ComplexAnnotationContext::ComplexAnnotationContext(AnnotationContext *ctx) { copyFrom(ctx); }

void P416Parser::ComplexAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplexAnnotation(this);
}
void P416Parser::ComplexAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplexAnnotation(this);
}

antlrcpp::Any P416Parser::ComplexAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitComplexAnnotation(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::AnnotationContext* P416Parser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 12, P416Parser::RuleAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AnnotationContext *>(_tracker.createInstance<P416Parser::SimpleAnnotationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(262);
      match(P416Parser::AT);
      setState(263);
      name();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AnnotationContext *>(_tracker.createInstance<P416Parser::ComplexAnnotationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(264);
      match(P416Parser::AT);
      setState(265);
      name();
      setState(266);
      match(P416Parser::LPARAN);
      setState(268);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(267);
        expressionList();
      }
      setState(270);
      match(P416Parser::RPARAN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

P416Parser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ParameterContext *> P416Parser::ParameterListContext::parameter() {
  return getRuleContexts<P416Parser::ParameterContext>();
}

P416Parser::ParameterContext* P416Parser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<P416Parser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::ParameterListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::ParameterListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::ParameterListContext::getRuleIndex() const {
  return P416Parser::RuleParameterList;
}

void P416Parser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void P416Parser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any P416Parser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParameterListContext* P416Parser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 14, P416Parser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    parameter();
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(275);
      match(P416Parser::COMMA);
      setState(276);
      parameter();
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

P416Parser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ParameterContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

P416Parser::TypeRefContext* P416Parser::ParameterContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NameContext* P416Parser::ParameterContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

P416Parser::DirectionContext* P416Parser::ParameterContext::direction() {
  return getRuleContext<P416Parser::DirectionContext>(0);
}


size_t P416Parser::ParameterContext::getRuleIndex() const {
  return P416Parser::RuleParameter;
}

void P416Parser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void P416Parser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any P416Parser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParameterContext* P416Parser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 16, P416Parser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    optAnnotations();
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::IN)
      | (1ULL << P416Parser::INOUT)
      | (1ULL << P416Parser::OUT))) != 0)) {
      setState(283);
      direction();
    }
    setState(286);
    typeRef();
    setState(287);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectionContext ------------------------------------------------------------------

P416Parser::DirectionContext::DirectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::DirectionContext::getRuleIndex() const {
  return P416Parser::RuleDirection;
}

void P416Parser::DirectionContext::copyFrom(DirectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InOutDirectionContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::InOutDirectionContext::INOUT() {
  return getToken(P416Parser::INOUT, 0);
}

P416Parser::InOutDirectionContext::InOutDirectionContext(DirectionContext *ctx) { copyFrom(ctx); }

void P416Parser::InOutDirectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInOutDirection(this);
}
void P416Parser::InOutDirectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInOutDirection(this);
}

antlrcpp::Any P416Parser::InOutDirectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitInOutDirection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InDirectionContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::InDirectionContext::IN() {
  return getToken(P416Parser::IN, 0);
}

P416Parser::InDirectionContext::InDirectionContext(DirectionContext *ctx) { copyFrom(ctx); }

void P416Parser::InDirectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInDirection(this);
}
void P416Parser::InDirectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInDirection(this);
}

antlrcpp::Any P416Parser::InDirectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitInDirection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OutDirectionContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::OutDirectionContext::OUT() {
  return getToken(P416Parser::OUT, 0);
}

P416Parser::OutDirectionContext::OutDirectionContext(DirectionContext *ctx) { copyFrom(ctx); }

void P416Parser::OutDirectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutDirection(this);
}
void P416Parser::OutDirectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutDirection(this);
}

antlrcpp::Any P416Parser::OutDirectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOutDirection(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::DirectionContext* P416Parser::direction() {
  DirectionContext *_localctx = _tracker.createInstance<DirectionContext>(_ctx, getState());
  enterRule(_localctx, 18, P416Parser::RuleDirection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::IN: {
        _localctx = dynamic_cast<DirectionContext *>(_tracker.createInstance<P416Parser::InDirectionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(289);
        match(P416Parser::IN);
        break;
      }

      case P416Parser::OUT: {
        _localctx = dynamic_cast<DirectionContext *>(_tracker.createInstance<P416Parser::OutDirectionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(290);
        match(P416Parser::OUT);
        break;
      }

      case P416Parser::INOUT: {
        _localctx = dynamic_cast<DirectionContext *>(_tracker.createInstance<P416Parser::InOutDirectionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(291);
        match(P416Parser::INOUT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageTypeDeclarationContext ------------------------------------------------------------------

P416Parser::PackageTypeDeclarationContext::PackageTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::PackageTypeDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::PackageTypeDeclarationContext::PACKAGE() {
  return getToken(P416Parser::PACKAGE, 0);
}

P416Parser::NameContext* P416Parser::PackageTypeDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::PackageTypeDeclarationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::PackageTypeDeclarationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::OptTypeParametersContext* P416Parser::PackageTypeDeclarationContext::optTypeParameters() {
  return getRuleContext<P416Parser::OptTypeParametersContext>(0);
}

P416Parser::ParameterListContext* P416Parser::PackageTypeDeclarationContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::PackageTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RulePackageTypeDeclaration;
}

void P416Parser::PackageTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageTypeDeclaration(this);
}

void P416Parser::PackageTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageTypeDeclaration(this);
}


antlrcpp::Any P416Parser::PackageTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPackageTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::PackageTypeDeclarationContext* P416Parser::packageTypeDeclaration() {
  PackageTypeDeclarationContext *_localctx = _tracker.createInstance<PackageTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, P416Parser::RulePackageTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    optAnnotations();
    setState(295);
    match(P416Parser::PACKAGE);
    setState(296);
    name();
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LT) {
      setState(297);
      optTypeParameters();
    }
    setState(300);
    match(P416Parser::LPARAN);
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(301);
      parameterList();
    }
    setState(304);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstantiationContext ------------------------------------------------------------------

P416Parser::InstantiationContext::InstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TypeRefContext* P416Parser::InstantiationContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

tree::TerminalNode* P416Parser::InstantiationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::InstantiationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::NameContext* P416Parser::InstantiationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::InstantiationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::AnnotationsContext* P416Parser::InstantiationContext::annotations() {
  return getRuleContext<P416Parser::AnnotationsContext>(0);
}

P416Parser::ArgumentListContext* P416Parser::InstantiationContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}


size_t P416Parser::InstantiationContext::getRuleIndex() const {
  return P416Parser::RuleInstantiation;
}

void P416Parser::InstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstantiation(this);
}

void P416Parser::InstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstantiation(this);
}


antlrcpp::Any P416Parser::InstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitInstantiation(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::InstantiationContext* P416Parser::instantiation() {
  InstantiationContext *_localctx = _tracker.createInstance<InstantiationContext>(_ctx, getState());
  enterRule(_localctx, 22, P416Parser::RuleInstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::AT) {
      setState(306);
      annotations();
    }
    setState(309);
    typeRef();
    setState(310);
    match(P416Parser::LPARAN);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
      setState(311);
      argumentList();
    }
    setState(314);
    match(P416Parser::RPARAN);
    setState(315);
    name();
    setState(316);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptConstructorParametersContext ------------------------------------------------------------------

P416Parser::OptConstructorParametersContext::OptConstructorParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::OptConstructorParametersContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::OptConstructorParametersContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ParameterListContext* P416Parser::OptConstructorParametersContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::OptConstructorParametersContext::getRuleIndex() const {
  return P416Parser::RuleOptConstructorParameters;
}

void P416Parser::OptConstructorParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptConstructorParameters(this);
}

void P416Parser::OptConstructorParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptConstructorParameters(this);
}


antlrcpp::Any P416Parser::OptConstructorParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOptConstructorParameters(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::OptConstructorParametersContext* P416Parser::optConstructorParameters() {
  OptConstructorParametersContext *_localctx = _tracker.createInstance<OptConstructorParametersContext>(_ctx, getState());
  enterRule(_localctx, 24, P416Parser::RuleOptConstructorParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(P416Parser::LPARAN);
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(319);
      parameterList();
    }
    setState(322);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DotPrefixContext ------------------------------------------------------------------

P416Parser::DotPrefixContext::DotPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::DotPrefixContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}


size_t P416Parser::DotPrefixContext::getRuleIndex() const {
  return P416Parser::RuleDotPrefix;
}

void P416Parser::DotPrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotPrefix(this);
}

void P416Parser::DotPrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotPrefix(this);
}


antlrcpp::Any P416Parser::DotPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDotPrefix(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DotPrefixContext* P416Parser::dotPrefix() {
  DotPrefixContext *_localctx = _tracker.createInstance<DotPrefixContext>(_ctx, getState());
  enterRule(_localctx, 26, P416Parser::RuleDotPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(P416Parser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserDeclarationContext ------------------------------------------------------------------

P416Parser::ParserDeclarationContext::ParserDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ParserTypeDeclarationContext* P416Parser::ParserDeclarationContext::parserTypeDeclaration() {
  return getRuleContext<P416Parser::ParserTypeDeclarationContext>(0);
}

tree::TerminalNode* P416Parser::ParserDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::ParserStatesContext* P416Parser::ParserDeclarationContext::parserStates() {
  return getRuleContext<P416Parser::ParserStatesContext>(0);
}

tree::TerminalNode* P416Parser::ParserDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::OptConstructorParametersContext* P416Parser::ParserDeclarationContext::optConstructorParameters() {
  return getRuleContext<P416Parser::OptConstructorParametersContext>(0);
}

P416Parser::ParserLocalElementsContext* P416Parser::ParserDeclarationContext::parserLocalElements() {
  return getRuleContext<P416Parser::ParserLocalElementsContext>(0);
}


size_t P416Parser::ParserDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleParserDeclaration;
}

void P416Parser::ParserDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserDeclaration(this);
}

void P416Parser::ParserDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserDeclaration(this);
}


antlrcpp::Any P416Parser::ParserDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserDeclarationContext* P416Parser::parserDeclaration() {
  ParserDeclarationContext *_localctx = _tracker.createInstance<ParserDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, P416Parser::RuleParserDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    parserTypeDeclaration();
    setState(328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LPARAN) {
      setState(327);
      optConstructorParameters();
    }
    setState(330);
    match(P416Parser::LCURL);
    setState(332);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(331);
      parserLocalElements();
      break;
    }

    }
    setState(334);
    parserStates();
    setState(335);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserLocalElementsContext ------------------------------------------------------------------

P416Parser::ParserLocalElementsContext::ParserLocalElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ParserLocalElementContext *> P416Parser::ParserLocalElementsContext::parserLocalElement() {
  return getRuleContexts<P416Parser::ParserLocalElementContext>();
}

P416Parser::ParserLocalElementContext* P416Parser::ParserLocalElementsContext::parserLocalElement(size_t i) {
  return getRuleContext<P416Parser::ParserLocalElementContext>(i);
}


size_t P416Parser::ParserLocalElementsContext::getRuleIndex() const {
  return P416Parser::RuleParserLocalElements;
}

void P416Parser::ParserLocalElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserLocalElements(this);
}

void P416Parser::ParserLocalElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserLocalElements(this);
}


antlrcpp::Any P416Parser::ParserLocalElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserLocalElements(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserLocalElementsContext* P416Parser::parserLocalElements() {
  ParserLocalElementsContext *_localctx = _tracker.createInstance<ParserLocalElementsContext>(_ctx, getState());
  enterRule(_localctx, 30, P416Parser::RuleParserLocalElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(338); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(337);
              parserLocalElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(340); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserLocalElementContext ------------------------------------------------------------------

P416Parser::ParserLocalElementContext::ParserLocalElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ConstantDeclarationContext* P416Parser::ParserLocalElementContext::constantDeclaration() {
  return getRuleContext<P416Parser::ConstantDeclarationContext>(0);
}

P416Parser::VariableDeclarationContext* P416Parser::ParserLocalElementContext::variableDeclaration() {
  return getRuleContext<P416Parser::VariableDeclarationContext>(0);
}

P416Parser::InstantiationContext* P416Parser::ParserLocalElementContext::instantiation() {
  return getRuleContext<P416Parser::InstantiationContext>(0);
}


size_t P416Parser::ParserLocalElementContext::getRuleIndex() const {
  return P416Parser::RuleParserLocalElement;
}

void P416Parser::ParserLocalElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserLocalElement(this);
}

void P416Parser::ParserLocalElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserLocalElement(this);
}


antlrcpp::Any P416Parser::ParserLocalElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserLocalElement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserLocalElementContext* P416Parser::parserLocalElement() {
  ParserLocalElementContext *_localctx = _tracker.createInstance<ParserLocalElementContext>(_ctx, getState());
  enterRule(_localctx, 32, P416Parser::RuleParserLocalElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(342);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(343);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(344);
      instantiation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserTypeDeclarationContext ------------------------------------------------------------------

P416Parser::ParserTypeDeclarationContext::ParserTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ParserTypeDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ParserTypeDeclarationContext::PARSER() {
  return getToken(P416Parser::PARSER, 0);
}

P416Parser::NameContext* P416Parser::ParserTypeDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ParserTypeDeclarationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ParserTypeDeclarationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::OptTypeParametersContext* P416Parser::ParserTypeDeclarationContext::optTypeParameters() {
  return getRuleContext<P416Parser::OptTypeParametersContext>(0);
}

P416Parser::ParameterListContext* P416Parser::ParserTypeDeclarationContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::ParserTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleParserTypeDeclaration;
}

void P416Parser::ParserTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserTypeDeclaration(this);
}

void P416Parser::ParserTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserTypeDeclaration(this);
}


antlrcpp::Any P416Parser::ParserTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserTypeDeclarationContext* P416Parser::parserTypeDeclaration() {
  ParserTypeDeclarationContext *_localctx = _tracker.createInstance<ParserTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, P416Parser::RuleParserTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    optAnnotations();
    setState(348);
    match(P416Parser::PARSER);
    setState(349);
    name();
    setState(351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LT) {
      setState(350);
      optTypeParameters();
    }
    setState(353);
    match(P416Parser::LPARAN);
    setState(355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(354);
      parameterList();
    }
    setState(357);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserStatesContext ------------------------------------------------------------------

P416Parser::ParserStatesContext::ParserStatesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ParserStateContext *> P416Parser::ParserStatesContext::parserState() {
  return getRuleContexts<P416Parser::ParserStateContext>();
}

P416Parser::ParserStateContext* P416Parser::ParserStatesContext::parserState(size_t i) {
  return getRuleContext<P416Parser::ParserStateContext>(i);
}


size_t P416Parser::ParserStatesContext::getRuleIndex() const {
  return P416Parser::RuleParserStates;
}

void P416Parser::ParserStatesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserStates(this);
}

void P416Parser::ParserStatesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserStates(this);
}


antlrcpp::Any P416Parser::ParserStatesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserStates(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserStatesContext* P416Parser::parserStates() {
  ParserStatesContext *_localctx = _tracker.createInstance<ParserStatesContext>(_ctx, getState());
  enterRule(_localctx, 36, P416Parser::RuleParserStates);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(359);
      parserState();
      setState(362); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == P416Parser::STATE

    || _la == P416Parser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserStateContext ------------------------------------------------------------------

P416Parser::ParserStateContext::ParserStateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ParserStateContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ParserStateContext::STATE() {
  return getToken(P416Parser::STATE, 0);
}

P416Parser::NameContext* P416Parser::ParserStateContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ParserStateContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::ParserStateContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::ParserStatementsContext* P416Parser::ParserStateContext::parserStatements() {
  return getRuleContext<P416Parser::ParserStatementsContext>(0);
}

P416Parser::TransitionStatementContext* P416Parser::ParserStateContext::transitionStatement() {
  return getRuleContext<P416Parser::TransitionStatementContext>(0);
}


size_t P416Parser::ParserStateContext::getRuleIndex() const {
  return P416Parser::RuleParserState;
}

void P416Parser::ParserStateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserState(this);
}

void P416Parser::ParserStateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserState(this);
}


antlrcpp::Any P416Parser::ParserStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserState(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserStateContext* P416Parser::parserState() {
  ParserStateContext *_localctx = _tracker.createInstance<ParserStateContext>(_ctx, getState());
  enterRule(_localctx, 38, P416Parser::RuleParserState);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    optAnnotations();
    setState(365);
    match(P416Parser::STATE);
    setState(366);
    name();
    setState(367);
    match(P416Parser::LCURL);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
      | (1ULL << (P416Parser::APPLY - 10))
      | (1ULL << (P416Parser::BOOL - 10))
      | (1ULL << (P416Parser::BIT - 10))
      | (1ULL << (P416Parser::CONST - 10))
      | (1ULL << (P416Parser::ERROR - 10))
      | (1ULL << (P416Parser::INT - 10))
      | (1ULL << (P416Parser::KEY - 10))
      | (1ULL << (P416Parser::STATE - 10))
      | (1ULL << (P416Parser::TUPLE - 10))
      | (1ULL << (P416Parser::VARBIT - 10))
      | (1ULL << (P416Parser::IDENTIFIER - 10))
      | (1ULL << (P416Parser::AT - 10))
      | (1ULL << (P416Parser::LCURL - 10))
      | (1ULL << (P416Parser::DOT - 10)))) != 0)) {
      setState(368);
      parserStatements();
    }
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::TRANSITION) {
      setState(371);
      transitionStatement();
    }
    setState(374);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserStatementsContext ------------------------------------------------------------------

P416Parser::ParserStatementsContext::ParserStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ParserStatementContext *> P416Parser::ParserStatementsContext::parserStatement() {
  return getRuleContexts<P416Parser::ParserStatementContext>();
}

P416Parser::ParserStatementContext* P416Parser::ParserStatementsContext::parserStatement(size_t i) {
  return getRuleContext<P416Parser::ParserStatementContext>(i);
}


size_t P416Parser::ParserStatementsContext::getRuleIndex() const {
  return P416Parser::RuleParserStatements;
}

void P416Parser::ParserStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserStatements(this);
}

void P416Parser::ParserStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserStatements(this);
}


antlrcpp::Any P416Parser::ParserStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserStatements(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserStatementsContext* P416Parser::parserStatements() {
  ParserStatementsContext *_localctx = _tracker.createInstance<ParserStatementsContext>(_ctx, getState());
  enterRule(_localctx, 40, P416Parser::RuleParserStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(376);
      parserStatement();
      setState(379); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
      | (1ULL << (P416Parser::APPLY - 10))
      | (1ULL << (P416Parser::BOOL - 10))
      | (1ULL << (P416Parser::BIT - 10))
      | (1ULL << (P416Parser::CONST - 10))
      | (1ULL << (P416Parser::ERROR - 10))
      | (1ULL << (P416Parser::INT - 10))
      | (1ULL << (P416Parser::KEY - 10))
      | (1ULL << (P416Parser::STATE - 10))
      | (1ULL << (P416Parser::TUPLE - 10))
      | (1ULL << (P416Parser::VARBIT - 10))
      | (1ULL << (P416Parser::IDENTIFIER - 10))
      | (1ULL << (P416Parser::AT - 10))
      | (1ULL << (P416Parser::LCURL - 10))
      | (1ULL << (P416Parser::DOT - 10)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserStatementContext ------------------------------------------------------------------

P416Parser::ParserStatementContext::ParserStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::AssignmentStatementContext* P416Parser::ParserStatementContext::assignmentStatement() {
  return getRuleContext<P416Parser::AssignmentStatementContext>(0);
}

P416Parser::MethodCallStatementContext* P416Parser::ParserStatementContext::methodCallStatement() {
  return getRuleContext<P416Parser::MethodCallStatementContext>(0);
}

P416Parser::DirectApplicationContext* P416Parser::ParserStatementContext::directApplication() {
  return getRuleContext<P416Parser::DirectApplicationContext>(0);
}

P416Parser::ParserBlockStatementContext* P416Parser::ParserStatementContext::parserBlockStatement() {
  return getRuleContext<P416Parser::ParserBlockStatementContext>(0);
}

P416Parser::ConstantDeclarationContext* P416Parser::ParserStatementContext::constantDeclaration() {
  return getRuleContext<P416Parser::ConstantDeclarationContext>(0);
}

P416Parser::VariableDeclarationContext* P416Parser::ParserStatementContext::variableDeclaration() {
  return getRuleContext<P416Parser::VariableDeclarationContext>(0);
}


size_t P416Parser::ParserStatementContext::getRuleIndex() const {
  return P416Parser::RuleParserStatement;
}

void P416Parser::ParserStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserStatement(this);
}

void P416Parser::ParserStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserStatement(this);
}


antlrcpp::Any P416Parser::ParserStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserStatementContext* P416Parser::parserStatement() {
  ParserStatementContext *_localctx = _tracker.createInstance<ParserStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, P416Parser::RuleParserStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(387);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(381);
      assignmentStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(382);
      methodCallStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(383);
      directApplication();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(384);
      parserBlockStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(385);
      constantDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(386);
      variableDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserBlockStatementContext ------------------------------------------------------------------

P416Parser::ParserBlockStatementContext::ParserBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ParserBlockStatementContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ParserBlockStatementContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::ParserStatementsContext* P416Parser::ParserBlockStatementContext::parserStatements() {
  return getRuleContext<P416Parser::ParserStatementsContext>(0);
}

tree::TerminalNode* P416Parser::ParserBlockStatementContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}


size_t P416Parser::ParserBlockStatementContext::getRuleIndex() const {
  return P416Parser::RuleParserBlockStatement;
}

void P416Parser::ParserBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserBlockStatement(this);
}

void P416Parser::ParserBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserBlockStatement(this);
}


antlrcpp::Any P416Parser::ParserBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitParserBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ParserBlockStatementContext* P416Parser::parserBlockStatement() {
  ParserBlockStatementContext *_localctx = _tracker.createInstance<ParserBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, P416Parser::RuleParserBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    optAnnotations();
    setState(390);
    match(P416Parser::LCURL);
    setState(391);
    parserStatements();
    setState(392);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransitionStatementContext ------------------------------------------------------------------

P416Parser::TransitionStatementContext::TransitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::TransitionStatementContext::TRANSITION() {
  return getToken(P416Parser::TRANSITION, 0);
}

P416Parser::StateExpressionContext* P416Parser::TransitionStatementContext::stateExpression() {
  return getRuleContext<P416Parser::StateExpressionContext>(0);
}


size_t P416Parser::TransitionStatementContext::getRuleIndex() const {
  return P416Parser::RuleTransitionStatement;
}

void P416Parser::TransitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransitionStatement(this);
}

void P416Parser::TransitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransitionStatement(this);
}


antlrcpp::Any P416Parser::TransitionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTransitionStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TransitionStatementContext* P416Parser::transitionStatement() {
  TransitionStatementContext *_localctx = _tracker.createInstance<TransitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, P416Parser::RuleTransitionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(P416Parser::TRANSITION);
    setState(395);
    stateExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateExpressionContext ------------------------------------------------------------------

P416Parser::StateExpressionContext::StateExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::NameContext* P416Parser::StateExpressionContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::StateExpressionContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::SelectExpressionContext* P416Parser::StateExpressionContext::selectExpression() {
  return getRuleContext<P416Parser::SelectExpressionContext>(0);
}


size_t P416Parser::StateExpressionContext::getRuleIndex() const {
  return P416Parser::RuleStateExpression;
}

void P416Parser::StateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStateExpression(this);
}

void P416Parser::StateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStateExpression(this);
}


antlrcpp::Any P416Parser::StateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStateExpression(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StateExpressionContext* P416Parser::stateExpression() {
  StateExpressionContext *_localctx = _tracker.createInstance<StateExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, P416Parser::RuleStateExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(401);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::ACTIONS:
      case P416Parser::APPLY:
      case P416Parser::EXTRACT:
      case P416Parser::ERROR:
      case P416Parser::KEY:
      case P416Parser::STATE:
      case P416Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(397);
        name();
        setState(398);
        match(P416Parser::SEMI);
        break;
      }

      case P416Parser::SELECT: {
        enterOuterAlt(_localctx, 2);
        setState(400);
        selectExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectExpressionContext ------------------------------------------------------------------

P416Parser::SelectExpressionContext::SelectExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::SelectExpressionContext::SELECT() {
  return getToken(P416Parser::SELECT, 0);
}

tree::TerminalNode* P416Parser::SelectExpressionContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::SelectExpressionContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::SelectExpressionContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::SelectExpressionContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::ExpressionListContext* P416Parser::SelectExpressionContext::expressionList() {
  return getRuleContext<P416Parser::ExpressionListContext>(0);
}

P416Parser::SelectCaseListContext* P416Parser::SelectExpressionContext::selectCaseList() {
  return getRuleContext<P416Parser::SelectCaseListContext>(0);
}


size_t P416Parser::SelectExpressionContext::getRuleIndex() const {
  return P416Parser::RuleSelectExpression;
}

void P416Parser::SelectExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectExpression(this);
}

void P416Parser::SelectExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectExpression(this);
}


antlrcpp::Any P416Parser::SelectExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSelectExpression(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SelectExpressionContext* P416Parser::selectExpression() {
  SelectExpressionContext *_localctx = _tracker.createInstance<SelectExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, P416Parser::RuleSelectExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(P416Parser::SELECT);
    setState(404);
    match(P416Parser::LPARAN);
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
      setState(405);
      expressionList();
    }
    setState(408);
    match(P416Parser::RPARAN);
    setState(409);
    match(P416Parser::LCURL);
    setState(411);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::DEFAULT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::DONTCARE)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
      setState(410);
      selectCaseList();
    }
    setState(413);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectCaseListContext ------------------------------------------------------------------

P416Parser::SelectCaseListContext::SelectCaseListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::SelectCaseContext *> P416Parser::SelectCaseListContext::selectCase() {
  return getRuleContexts<P416Parser::SelectCaseContext>();
}

P416Parser::SelectCaseContext* P416Parser::SelectCaseListContext::selectCase(size_t i) {
  return getRuleContext<P416Parser::SelectCaseContext>(i);
}


size_t P416Parser::SelectCaseListContext::getRuleIndex() const {
  return P416Parser::RuleSelectCaseList;
}

void P416Parser::SelectCaseListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectCaseList(this);
}

void P416Parser::SelectCaseListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectCaseList(this);
}


antlrcpp::Any P416Parser::SelectCaseListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSelectCaseList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SelectCaseListContext* P416Parser::selectCaseList() {
  SelectCaseListContext *_localctx = _tracker.createInstance<SelectCaseListContext>(_ctx, getState());
  enterRule(_localctx, 52, P416Parser::RuleSelectCaseList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(415);
      selectCase();
      setState(418); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::DEFAULT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::DONTCARE)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectCaseContext ------------------------------------------------------------------

P416Parser::SelectCaseContext::SelectCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::KeySetExpressionContext* P416Parser::SelectCaseContext::keySetExpression() {
  return getRuleContext<P416Parser::KeySetExpressionContext>(0);
}

tree::TerminalNode* P416Parser::SelectCaseContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

P416Parser::NameContext* P416Parser::SelectCaseContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::SelectCaseContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::SelectCaseContext::getRuleIndex() const {
  return P416Parser::RuleSelectCase;
}

void P416Parser::SelectCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectCase(this);
}

void P416Parser::SelectCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectCase(this);
}


antlrcpp::Any P416Parser::SelectCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSelectCase(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SelectCaseContext* P416Parser::selectCase() {
  SelectCaseContext *_localctx = _tracker.createInstance<SelectCaseContext>(_ctx, getState());
  enterRule(_localctx, 54, P416Parser::RuleSelectCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    keySetExpression();
    setState(421);
    match(P416Parser::COLON);
    setState(422);
    name();
    setState(423);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeySetExpressionContext ------------------------------------------------------------------

P416Parser::KeySetExpressionContext::KeySetExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TupleKeySetExpressionContext* P416Parser::KeySetExpressionContext::tupleKeySetExpression() {
  return getRuleContext<P416Parser::TupleKeySetExpressionContext>(0);
}

P416Parser::SimpleKeySetExpressionContext* P416Parser::KeySetExpressionContext::simpleKeySetExpression() {
  return getRuleContext<P416Parser::SimpleKeySetExpressionContext>(0);
}


size_t P416Parser::KeySetExpressionContext::getRuleIndex() const {
  return P416Parser::RuleKeySetExpression;
}

void P416Parser::KeySetExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeySetExpression(this);
}

void P416Parser::KeySetExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeySetExpression(this);
}


antlrcpp::Any P416Parser::KeySetExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitKeySetExpression(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::KeySetExpressionContext* P416Parser::keySetExpression() {
  KeySetExpressionContext *_localctx = _tracker.createInstance<KeySetExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, P416Parser::RuleKeySetExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(427);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(425);
      tupleKeySetExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(426);
      simpleKeySetExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleKeySetExpressionContext ------------------------------------------------------------------

P416Parser::TupleKeySetExpressionContext::TupleKeySetExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::TupleKeySetExpressionContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

std::vector<P416Parser::SimpleKeySetExpressionContext *> P416Parser::TupleKeySetExpressionContext::simpleKeySetExpression() {
  return getRuleContexts<P416Parser::SimpleKeySetExpressionContext>();
}

P416Parser::SimpleKeySetExpressionContext* P416Parser::TupleKeySetExpressionContext::simpleKeySetExpression(size_t i) {
  return getRuleContext<P416Parser::SimpleKeySetExpressionContext>(i);
}

tree::TerminalNode* P416Parser::TupleKeySetExpressionContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

std::vector<tree::TerminalNode *> P416Parser::TupleKeySetExpressionContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::TupleKeySetExpressionContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::TupleKeySetExpressionContext::getRuleIndex() const {
  return P416Parser::RuleTupleKeySetExpression;
}

void P416Parser::TupleKeySetExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleKeySetExpression(this);
}

void P416Parser::TupleKeySetExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleKeySetExpression(this);
}


antlrcpp::Any P416Parser::TupleKeySetExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTupleKeySetExpression(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TupleKeySetExpressionContext* P416Parser::tupleKeySetExpression() {
  TupleKeySetExpressionContext *_localctx = _tracker.createInstance<TupleKeySetExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, P416Parser::RuleTupleKeySetExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    match(P416Parser::LPARAN);
    setState(430);
    simpleKeySetExpression();
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(431);
      match(P416Parser::COMMA);
      setState(432);
      simpleKeySetExpression();
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(438);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleKeySetExpressionContext ------------------------------------------------------------------

P416Parser::SimpleKeySetExpressionContext::SimpleKeySetExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ExpressionContext *> P416Parser::SimpleKeySetExpressionContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::SimpleKeySetExpressionContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::SimpleKeySetExpressionContext::DEFAULT() {
  return getToken(P416Parser::DEFAULT, 0);
}

tree::TerminalNode* P416Parser::SimpleKeySetExpressionContext::DONTCARE() {
  return getToken(P416Parser::DONTCARE, 0);
}

tree::TerminalNode* P416Parser::SimpleKeySetExpressionContext::MASK() {
  return getToken(P416Parser::MASK, 0);
}

tree::TerminalNode* P416Parser::SimpleKeySetExpressionContext::RANGE() {
  return getToken(P416Parser::RANGE, 0);
}


size_t P416Parser::SimpleKeySetExpressionContext::getRuleIndex() const {
  return P416Parser::RuleSimpleKeySetExpression;
}

void P416Parser::SimpleKeySetExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleKeySetExpression(this);
}

void P416Parser::SimpleKeySetExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleKeySetExpression(this);
}


antlrcpp::Any P416Parser::SimpleKeySetExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSimpleKeySetExpression(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SimpleKeySetExpressionContext* P416Parser::simpleKeySetExpression() {
  SimpleKeySetExpressionContext *_localctx = _tracker.createInstance<SimpleKeySetExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, P416Parser::RuleSimpleKeySetExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(451);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(440);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(441);
      match(P416Parser::DEFAULT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(442);
      match(P416Parser::DONTCARE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(443);
      expression(0);
      setState(444);
      match(P416Parser::MASK);
      setState(445);
      expression(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(447);
      expression(0);
      setState(448);
      match(P416Parser::RANGE);
      setState(449);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlDeclarationContext ------------------------------------------------------------------

P416Parser::ControlDeclarationContext::ControlDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ControlTypeDeclarationContext* P416Parser::ControlDeclarationContext::controlTypeDeclaration() {
  return getRuleContext<P416Parser::ControlTypeDeclarationContext>(0);
}

tree::TerminalNode* P416Parser::ControlDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::ControlDeclarationContext::APPLY() {
  return getToken(P416Parser::APPLY, 0);
}

P416Parser::ControlBodyContext* P416Parser::ControlDeclarationContext::controlBody() {
  return getRuleContext<P416Parser::ControlBodyContext>(0);
}

tree::TerminalNode* P416Parser::ControlDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::OptConstructorParametersContext* P416Parser::ControlDeclarationContext::optConstructorParameters() {
  return getRuleContext<P416Parser::OptConstructorParametersContext>(0);
}

P416Parser::ControlLocalDeclarationsContext* P416Parser::ControlDeclarationContext::controlLocalDeclarations() {
  return getRuleContext<P416Parser::ControlLocalDeclarationsContext>(0);
}


size_t P416Parser::ControlDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleControlDeclaration;
}

void P416Parser::ControlDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlDeclaration(this);
}

void P416Parser::ControlDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlDeclaration(this);
}


antlrcpp::Any P416Parser::ControlDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitControlDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ControlDeclarationContext* P416Parser::controlDeclaration() {
  ControlDeclarationContext *_localctx = _tracker.createInstance<ControlDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 62, P416Parser::RuleControlDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    controlTypeDeclaration();
    setState(455);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LPARAN) {
      setState(454);
      optConstructorParameters();
    }
    setState(457);
    match(P416Parser::LCURL);
    setState(459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 9) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 9)) & ((1ULL << (P416Parser::ACTION - 9))
      | (1ULL << (P416Parser::BOOL - 9))
      | (1ULL << (P416Parser::BIT - 9))
      | (1ULL << (P416Parser::CONST - 9))
      | (1ULL << (P416Parser::ERROR - 9))
      | (1ULL << (P416Parser::INT - 9))
      | (1ULL << (P416Parser::TABLE - 9))
      | (1ULL << (P416Parser::TUPLE - 9))
      | (1ULL << (P416Parser::VARBIT - 9))
      | (1ULL << (P416Parser::IDENTIFIER - 9))
      | (1ULL << (P416Parser::AT - 9))
      | (1ULL << (P416Parser::DOT - 9)))) != 0)) {
      setState(458);
      controlLocalDeclarations();
    }
    setState(461);
    match(P416Parser::APPLY);
    setState(462);
    controlBody();
    setState(463);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlTypeDeclarationContext ------------------------------------------------------------------

P416Parser::ControlTypeDeclarationContext::ControlTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ControlTypeDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ControlTypeDeclarationContext::CONTROL() {
  return getToken(P416Parser::CONTROL, 0);
}

P416Parser::NameContext* P416Parser::ControlTypeDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ControlTypeDeclarationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ControlTypeDeclarationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::OptTypeParametersContext* P416Parser::ControlTypeDeclarationContext::optTypeParameters() {
  return getRuleContext<P416Parser::OptTypeParametersContext>(0);
}

P416Parser::ParameterListContext* P416Parser::ControlTypeDeclarationContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::ControlTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleControlTypeDeclaration;
}

void P416Parser::ControlTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlTypeDeclaration(this);
}

void P416Parser::ControlTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlTypeDeclaration(this);
}


antlrcpp::Any P416Parser::ControlTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitControlTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ControlTypeDeclarationContext* P416Parser::controlTypeDeclaration() {
  ControlTypeDeclarationContext *_localctx = _tracker.createInstance<ControlTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 64, P416Parser::RuleControlTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    optAnnotations();
    setState(466);
    match(P416Parser::CONTROL);
    setState(467);
    name();
    setState(469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LT) {
      setState(468);
      optTypeParameters();
    }
    setState(471);
    match(P416Parser::LPARAN);
    setState(473);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(472);
      parameterList();
    }
    setState(475);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlLocalDeclarationsContext ------------------------------------------------------------------

P416Parser::ControlLocalDeclarationsContext::ControlLocalDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ControlLocalDeclarationContext *> P416Parser::ControlLocalDeclarationsContext::controlLocalDeclaration() {
  return getRuleContexts<P416Parser::ControlLocalDeclarationContext>();
}

P416Parser::ControlLocalDeclarationContext* P416Parser::ControlLocalDeclarationsContext::controlLocalDeclaration(size_t i) {
  return getRuleContext<P416Parser::ControlLocalDeclarationContext>(i);
}


size_t P416Parser::ControlLocalDeclarationsContext::getRuleIndex() const {
  return P416Parser::RuleControlLocalDeclarations;
}

void P416Parser::ControlLocalDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlLocalDeclarations(this);
}

void P416Parser::ControlLocalDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlLocalDeclarations(this);
}


antlrcpp::Any P416Parser::ControlLocalDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitControlLocalDeclarations(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ControlLocalDeclarationsContext* P416Parser::controlLocalDeclarations() {
  ControlLocalDeclarationsContext *_localctx = _tracker.createInstance<ControlLocalDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 66, P416Parser::RuleControlLocalDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(478); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(477);
      controlLocalDeclaration();
      setState(480); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 9) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 9)) & ((1ULL << (P416Parser::ACTION - 9))
      | (1ULL << (P416Parser::BOOL - 9))
      | (1ULL << (P416Parser::BIT - 9))
      | (1ULL << (P416Parser::CONST - 9))
      | (1ULL << (P416Parser::ERROR - 9))
      | (1ULL << (P416Parser::INT - 9))
      | (1ULL << (P416Parser::TABLE - 9))
      | (1ULL << (P416Parser::TUPLE - 9))
      | (1ULL << (P416Parser::VARBIT - 9))
      | (1ULL << (P416Parser::IDENTIFIER - 9))
      | (1ULL << (P416Parser::AT - 9))
      | (1ULL << (P416Parser::DOT - 9)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlLocalDeclarationContext ------------------------------------------------------------------

P416Parser::ControlLocalDeclarationContext::ControlLocalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ConstantDeclarationContext* P416Parser::ControlLocalDeclarationContext::constantDeclaration() {
  return getRuleContext<P416Parser::ConstantDeclarationContext>(0);
}

P416Parser::ActionDeclarationContext* P416Parser::ControlLocalDeclarationContext::actionDeclaration() {
  return getRuleContext<P416Parser::ActionDeclarationContext>(0);
}

P416Parser::TableDeclarationContext* P416Parser::ControlLocalDeclarationContext::tableDeclaration() {
  return getRuleContext<P416Parser::TableDeclarationContext>(0);
}

P416Parser::InstantiationContext* P416Parser::ControlLocalDeclarationContext::instantiation() {
  return getRuleContext<P416Parser::InstantiationContext>(0);
}

P416Parser::VariableDeclarationContext* P416Parser::ControlLocalDeclarationContext::variableDeclaration() {
  return getRuleContext<P416Parser::VariableDeclarationContext>(0);
}


size_t P416Parser::ControlLocalDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleControlLocalDeclaration;
}

void P416Parser::ControlLocalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlLocalDeclaration(this);
}

void P416Parser::ControlLocalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlLocalDeclaration(this);
}


antlrcpp::Any P416Parser::ControlLocalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitControlLocalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ControlLocalDeclarationContext* P416Parser::controlLocalDeclaration() {
  ControlLocalDeclarationContext *_localctx = _tracker.createInstance<ControlLocalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, P416Parser::RuleControlLocalDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(487);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(482);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(483);
      actionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(484);
      tableDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(485);
      instantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(486);
      variableDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlBodyContext ------------------------------------------------------------------

P416Parser::ControlBodyContext::ControlBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::BlockStatementContext* P416Parser::ControlBodyContext::blockStatement() {
  return getRuleContext<P416Parser::BlockStatementContext>(0);
}


size_t P416Parser::ControlBodyContext::getRuleIndex() const {
  return P416Parser::RuleControlBody;
}

void P416Parser::ControlBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlBody(this);
}

void P416Parser::ControlBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlBody(this);
}


antlrcpp::Any P416Parser::ControlBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitControlBody(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ControlBodyContext* P416Parser::controlBody() {
  ControlBodyContext *_localctx = _tracker.createInstance<ControlBodyContext>(_ctx, getState());
  enterRule(_localctx, 70, P416Parser::RuleControlBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternDeclarationContext ------------------------------------------------------------------

P416Parser::ExternDeclarationContext::ExternDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::ExternDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleExternDeclaration;
}

void P416Parser::ExternDeclarationContext::copyFrom(ExternDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExternObjectDeclarationContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::ExternObjectDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ExternObjectDeclarationContext::EXTERN() {
  return getToken(P416Parser::EXTERN, 0);
}

P416Parser::NonTypeNameContext* P416Parser::ExternObjectDeclarationContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}

tree::TerminalNode* P416Parser::ExternObjectDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::ExternObjectDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::OptTypeParametersContext* P416Parser::ExternObjectDeclarationContext::optTypeParameters() {
  return getRuleContext<P416Parser::OptTypeParametersContext>(0);
}

P416Parser::MethodPrototypesContext* P416Parser::ExternObjectDeclarationContext::methodPrototypes() {
  return getRuleContext<P416Parser::MethodPrototypesContext>(0);
}

P416Parser::ExternObjectDeclarationContext::ExternObjectDeclarationContext(ExternDeclarationContext *ctx) { copyFrom(ctx); }

void P416Parser::ExternObjectDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternObjectDeclaration(this);
}
void P416Parser::ExternObjectDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternObjectDeclaration(this);
}

antlrcpp::Any P416Parser::ExternObjectDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExternObjectDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExternFunctionDeclarationContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::ExternFunctionDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ExternFunctionDeclarationContext::EXTERN() {
  return getToken(P416Parser::EXTERN, 0);
}

P416Parser::FunctionPrototypeContext* P416Parser::ExternFunctionDeclarationContext::functionPrototype() {
  return getRuleContext<P416Parser::FunctionPrototypeContext>(0);
}

tree::TerminalNode* P416Parser::ExternFunctionDeclarationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ExternFunctionDeclarationContext::ExternFunctionDeclarationContext(ExternDeclarationContext *ctx) { copyFrom(ctx); }

void P416Parser::ExternFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternFunctionDeclaration(this);
}
void P416Parser::ExternFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternFunctionDeclaration(this);
}

antlrcpp::Any P416Parser::ExternFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExternFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::ExternDeclarationContext* P416Parser::externDeclaration() {
  ExternDeclarationContext *_localctx = _tracker.createInstance<ExternDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, P416Parser::RuleExternDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(508);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ExternDeclarationContext *>(_tracker.createInstance<P416Parser::ExternObjectDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(491);
      optAnnotations();
      setState(492);
      match(P416Parser::EXTERN);
      setState(493);
      nonTypeName();
      setState(495);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == P416Parser::LT) {
        setState(494);
        optTypeParameters();
      }
      setState(497);
      match(P416Parser::LCURL);
      setState(499);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 10) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
        | (1ULL << (P416Parser::APPLY - 10))
        | (1ULL << (P416Parser::BOOL - 10))
        | (1ULL << (P416Parser::BIT - 10))
        | (1ULL << (P416Parser::ERROR - 10))
        | (1ULL << (P416Parser::INT - 10))
        | (1ULL << (P416Parser::KEY - 10))
        | (1ULL << (P416Parser::STATE - 10))
        | (1ULL << (P416Parser::TUPLE - 10))
        | (1ULL << (P416Parser::VARBIT - 10))
        | (1ULL << (P416Parser::VOID - 10))
        | (1ULL << (P416Parser::IDENTIFIER - 10))
        | (1ULL << (P416Parser::DOT - 10)))) != 0)) {
        setState(498);
        methodPrototypes();
      }
      setState(501);
      match(P416Parser::RCURL);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ExternDeclarationContext *>(_tracker.createInstance<P416Parser::ExternFunctionDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(503);
      optAnnotations();
      setState(504);
      match(P416Parser::EXTERN);
      setState(505);
      functionPrototype();
      setState(506);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodPrototypesContext ------------------------------------------------------------------

P416Parser::MethodPrototypesContext::MethodPrototypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::MethodPrototypeContext *> P416Parser::MethodPrototypesContext::methodPrototype() {
  return getRuleContexts<P416Parser::MethodPrototypeContext>();
}

P416Parser::MethodPrototypeContext* P416Parser::MethodPrototypesContext::methodPrototype(size_t i) {
  return getRuleContext<P416Parser::MethodPrototypeContext>(i);
}


size_t P416Parser::MethodPrototypesContext::getRuleIndex() const {
  return P416Parser::RuleMethodPrototypes;
}

void P416Parser::MethodPrototypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodPrototypes(this);
}

void P416Parser::MethodPrototypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodPrototypes(this);
}


antlrcpp::Any P416Parser::MethodPrototypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMethodPrototypes(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::MethodPrototypesContext* P416Parser::methodPrototypes() {
  MethodPrototypesContext *_localctx = _tracker.createInstance<MethodPrototypesContext>(_ctx, getState());
  enterRule(_localctx, 74, P416Parser::RuleMethodPrototypes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(510);
      methodPrototype();
      setState(513); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
      | (1ULL << (P416Parser::APPLY - 10))
      | (1ULL << (P416Parser::BOOL - 10))
      | (1ULL << (P416Parser::BIT - 10))
      | (1ULL << (P416Parser::ERROR - 10))
      | (1ULL << (P416Parser::INT - 10))
      | (1ULL << (P416Parser::KEY - 10))
      | (1ULL << (P416Parser::STATE - 10))
      | (1ULL << (P416Parser::TUPLE - 10))
      | (1ULL << (P416Parser::VARBIT - 10))
      | (1ULL << (P416Parser::VOID - 10))
      | (1ULL << (P416Parser::IDENTIFIER - 10))
      | (1ULL << (P416Parser::DOT - 10)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionPrototypeContext ------------------------------------------------------------------

P416Parser::FunctionPrototypeContext::FunctionPrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TypeOrVoidContext* P416Parser::FunctionPrototypeContext::typeOrVoid() {
  return getRuleContext<P416Parser::TypeOrVoidContext>(0);
}

P416Parser::NameContext* P416Parser::FunctionPrototypeContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::FunctionPrototypeContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::FunctionPrototypeContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::OptTypeParametersContext* P416Parser::FunctionPrototypeContext::optTypeParameters() {
  return getRuleContext<P416Parser::OptTypeParametersContext>(0);
}

P416Parser::ParameterListContext* P416Parser::FunctionPrototypeContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::FunctionPrototypeContext::getRuleIndex() const {
  return P416Parser::RuleFunctionPrototype;
}

void P416Parser::FunctionPrototypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionPrototype(this);
}

void P416Parser::FunctionPrototypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionPrototype(this);
}


antlrcpp::Any P416Parser::FunctionPrototypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitFunctionPrototype(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::FunctionPrototypeContext* P416Parser::functionPrototype() {
  FunctionPrototypeContext *_localctx = _tracker.createInstance<FunctionPrototypeContext>(_ctx, getState());
  enterRule(_localctx, 76, P416Parser::RuleFunctionPrototype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    typeOrVoid();
    setState(516);
    name();
    setState(518);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::LT) {
      setState(517);
      optTypeParameters();
    }
    setState(520);
    match(P416Parser::LPARAN);
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(521);
      parameterList();
    }
    setState(524);
    match(P416Parser::RPARAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodPrototypeContext ------------------------------------------------------------------

P416Parser::MethodPrototypeContext::MethodPrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::FunctionPrototypeContext* P416Parser::MethodPrototypeContext::functionPrototype() {
  return getRuleContext<P416Parser::FunctionPrototypeContext>(0);
}

tree::TerminalNode* P416Parser::MethodPrototypeContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

tree::TerminalNode* P416Parser::MethodPrototypeContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

tree::TerminalNode* P416Parser::MethodPrototypeContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::MethodPrototypeContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ParameterListContext* P416Parser::MethodPrototypeContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::MethodPrototypeContext::getRuleIndex() const {
  return P416Parser::RuleMethodPrototype;
}

void P416Parser::MethodPrototypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodPrototype(this);
}

void P416Parser::MethodPrototypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodPrototype(this);
}


antlrcpp::Any P416Parser::MethodPrototypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMethodPrototype(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::MethodPrototypeContext* P416Parser::methodPrototype() {
  MethodPrototypeContext *_localctx = _tracker.createInstance<MethodPrototypeContext>(_ctx, getState());
  enterRule(_localctx, 78, P416Parser::RuleMethodPrototype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(526);
      functionPrototype();
      setState(527);
      match(P416Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(529);
      match(P416Parser::IDENTIFIER);
      setState(530);
      match(P416Parser::LPARAN);
      setState(532);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 14) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
        | (1ULL << (P416Parser::BIT - 14))
        | (1ULL << (P416Parser::ERROR - 14))
        | (1ULL << (P416Parser::IN - 14))
        | (1ULL << (P416Parser::INOUT - 14))
        | (1ULL << (P416Parser::INT - 14))
        | (1ULL << (P416Parser::OUT - 14))
        | (1ULL << (P416Parser::TUPLE - 14))
        | (1ULL << (P416Parser::VARBIT - 14))
        | (1ULL << (P416Parser::IDENTIFIER - 14))
        | (1ULL << (P416Parser::AT - 14))
        | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
        setState(531);
        parameterList();
      }
      setState(534);
      match(P416Parser::RPARAN);
      setState(535);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeRefContext ------------------------------------------------------------------

P416Parser::TypeRefContext::TypeRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::BaseTypeContext* P416Parser::TypeRefContext::baseType() {
  return getRuleContext<P416Parser::BaseTypeContext>(0);
}

P416Parser::TypeNameContext* P416Parser::TypeRefContext::typeName() {
  return getRuleContext<P416Parser::TypeNameContext>(0);
}

P416Parser::SpecializedTypeContext* P416Parser::TypeRefContext::specializedType() {
  return getRuleContext<P416Parser::SpecializedTypeContext>(0);
}

P416Parser::HeaderStackTypeContext* P416Parser::TypeRefContext::headerStackType() {
  return getRuleContext<P416Parser::HeaderStackTypeContext>(0);
}

P416Parser::TupleTypeContext* P416Parser::TypeRefContext::tupleType() {
  return getRuleContext<P416Parser::TupleTypeContext>(0);
}


size_t P416Parser::TypeRefContext::getRuleIndex() const {
  return P416Parser::RuleTypeRef;
}

void P416Parser::TypeRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeRef(this);
}

void P416Parser::TypeRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeRef(this);
}


antlrcpp::Any P416Parser::TypeRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeRef(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeRefContext* P416Parser::typeRef() {
  TypeRefContext *_localctx = _tracker.createInstance<TypeRefContext>(_ctx, getState());
  enterRule(_localctx, 80, P416Parser::RuleTypeRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(543);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(538);
      baseType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(539);
      typeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(540);
      specializedType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(541);
      headerStackType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(542);
      tupleType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixedTypeContext ------------------------------------------------------------------

P416Parser::PrefixedTypeContext::PrefixedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::PrefixedTypeContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

P416Parser::DotPrefixContext* P416Parser::PrefixedTypeContext::dotPrefix() {
  return getRuleContext<P416Parser::DotPrefixContext>(0);
}

tree::TerminalNode* P416Parser::PrefixedTypeContext::ERROR() {
  return getToken(P416Parser::ERROR, 0);
}


size_t P416Parser::PrefixedTypeContext::getRuleIndex() const {
  return P416Parser::RulePrefixedType;
}

void P416Parser::PrefixedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedType(this);
}

void P416Parser::PrefixedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedType(this);
}


antlrcpp::Any P416Parser::PrefixedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPrefixedType(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::PrefixedTypeContext* P416Parser::prefixedType() {
  PrefixedTypeContext *_localctx = _tracker.createInstance<PrefixedTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, P416Parser::RulePrefixedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(550);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(545);
        match(P416Parser::IDENTIFIER);
        break;
      }

      case P416Parser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(546);
        dotPrefix();
        setState(547);
        match(P416Parser::IDENTIFIER);
        break;
      }

      case P416Parser::ERROR: {
        enterOuterAlt(_localctx, 3);
        setState(549);
        match(P416Parser::ERROR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

P416Parser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::PrefixedTypeContext* P416Parser::TypeNameContext::prefixedType() {
  return getRuleContext<P416Parser::PrefixedTypeContext>(0);
}


size_t P416Parser::TypeNameContext::getRuleIndex() const {
  return P416Parser::RuleTypeName;
}

void P416Parser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void P416Parser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any P416Parser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeNameContext* P416Parser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 84, P416Parser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    prefixedType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleTypeContext ------------------------------------------------------------------

P416Parser::TupleTypeContext::TupleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::TupleTypeContext::TUPLE() {
  return getToken(P416Parser::TUPLE, 0);
}

tree::TerminalNode* P416Parser::TupleTypeContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeArgumentListContext* P416Parser::TupleTypeContext::typeArgumentList() {
  return getRuleContext<P416Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* P416Parser::TupleTypeContext::GT() {
  return getToken(P416Parser::GT, 0);
}


size_t P416Parser::TupleTypeContext::getRuleIndex() const {
  return P416Parser::RuleTupleType;
}

void P416Parser::TupleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleType(this);
}

void P416Parser::TupleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleType(this);
}


antlrcpp::Any P416Parser::TupleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTupleType(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TupleTypeContext* P416Parser::tupleType() {
  TupleTypeContext *_localctx = _tracker.createInstance<TupleTypeContext>(_ctx, getState());
  enterRule(_localctx, 86, P416Parser::RuleTupleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(P416Parser::TUPLE);
    setState(555);
    match(P416Parser::LT);
    setState(556);
    typeArgumentList();
    setState(557);
    match(P416Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderStackTypeContext ------------------------------------------------------------------

P416Parser::HeaderStackTypeContext::HeaderStackTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TypeNameContext* P416Parser::HeaderStackTypeContext::typeName() {
  return getRuleContext<P416Parser::TypeNameContext>(0);
}

tree::TerminalNode* P416Parser::HeaderStackTypeContext::LBRKT() {
  return getToken(P416Parser::LBRKT, 0);
}

P416Parser::ExpressionContext* P416Parser::HeaderStackTypeContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::HeaderStackTypeContext::RBRKT() {
  return getToken(P416Parser::RBRKT, 0);
}


size_t P416Parser::HeaderStackTypeContext::getRuleIndex() const {
  return P416Parser::RuleHeaderStackType;
}

void P416Parser::HeaderStackTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeaderStackType(this);
}

void P416Parser::HeaderStackTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeaderStackType(this);
}


antlrcpp::Any P416Parser::HeaderStackTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitHeaderStackType(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::HeaderStackTypeContext* P416Parser::headerStackType() {
  HeaderStackTypeContext *_localctx = _tracker.createInstance<HeaderStackTypeContext>(_ctx, getState());
  enterRule(_localctx, 88, P416Parser::RuleHeaderStackType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    typeName();
    setState(560);
    match(P416Parser::LBRKT);
    setState(561);
    expression(0);
    setState(562);
    match(P416Parser::RBRKT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecializedTypeContext ------------------------------------------------------------------

P416Parser::SpecializedTypeContext::SpecializedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::PrefixedTypeContext* P416Parser::SpecializedTypeContext::prefixedType() {
  return getRuleContext<P416Parser::PrefixedTypeContext>(0);
}

tree::TerminalNode* P416Parser::SpecializedTypeContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeArgumentListContext* P416Parser::SpecializedTypeContext::typeArgumentList() {
  return getRuleContext<P416Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* P416Parser::SpecializedTypeContext::GT() {
  return getToken(P416Parser::GT, 0);
}


size_t P416Parser::SpecializedTypeContext::getRuleIndex() const {
  return P416Parser::RuleSpecializedType;
}

void P416Parser::SpecializedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecializedType(this);
}

void P416Parser::SpecializedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecializedType(this);
}


antlrcpp::Any P416Parser::SpecializedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSpecializedType(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SpecializedTypeContext* P416Parser::specializedType() {
  SpecializedTypeContext *_localctx = _tracker.createInstance<SpecializedTypeContext>(_ctx, getState());
  enterRule(_localctx, 90, P416Parser::RuleSpecializedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    prefixedType();
    setState(565);
    match(P416Parser::LT);
    setState(566);
    typeArgumentList();
    setState(567);
    match(P416Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

P416Parser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::BaseTypeContext::getRuleIndex() const {
  return P416Parser::RuleBaseType;
}

void P416Parser::BaseTypeContext::copyFrom(BaseTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ErrorTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::ErrorTypeContext::ERROR() {
  return getToken(P416Parser::ERROR, 0);
}

P416Parser::ErrorTypeContext::ErrorTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::ErrorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErrorType(this);
}
void P416Parser::ErrorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErrorType(this);
}

antlrcpp::Any P416Parser::ErrorTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitErrorType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarBitSizeTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::VarBitSizeTypeContext::VARBIT() {
  return getToken(P416Parser::VARBIT, 0);
}

tree::TerminalNode* P416Parser::VarBitSizeTypeContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::NumberContext* P416Parser::VarBitSizeTypeContext::number() {
  return getRuleContext<P416Parser::NumberContext>(0);
}

tree::TerminalNode* P416Parser::VarBitSizeTypeContext::GT() {
  return getToken(P416Parser::GT, 0);
}

P416Parser::VarBitSizeTypeContext::VarBitSizeTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::VarBitSizeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarBitSizeType(this);
}
void P416Parser::VarBitSizeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarBitSizeType(this);
}

antlrcpp::Any P416Parser::VarBitSizeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitVarBitSizeType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitSizeTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::BitSizeTypeContext::BIT() {
  return getToken(P416Parser::BIT, 0);
}

tree::TerminalNode* P416Parser::BitSizeTypeContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::NumberContext* P416Parser::BitSizeTypeContext::number() {
  return getRuleContext<P416Parser::NumberContext>(0);
}

tree::TerminalNode* P416Parser::BitSizeTypeContext::GT() {
  return getToken(P416Parser::GT, 0);
}

P416Parser::BitSizeTypeContext::BitSizeTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::BitSizeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitSizeType(this);
}
void P416Parser::BitSizeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitSizeType(this);
}

antlrcpp::Any P416Parser::BitSizeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBitSizeType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::BitTypeContext::BIT() {
  return getToken(P416Parser::BIT, 0);
}

P416Parser::BitTypeContext::BitTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::BitTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitType(this);
}
void P416Parser::BitTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitType(this);
}

antlrcpp::Any P416Parser::BitTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBitType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::BoolTypeContext::BOOL() {
  return getToken(P416Parser::BOOL, 0);
}

P416Parser::BoolTypeContext::BoolTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::BoolTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolType(this);
}
void P416Parser::BoolTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolType(this);
}

antlrcpp::Any P416Parser::BoolTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBoolType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntSizeTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::IntSizeTypeContext::INT() {
  return getToken(P416Parser::INT, 0);
}

tree::TerminalNode* P416Parser::IntSizeTypeContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::NumberContext* P416Parser::IntSizeTypeContext::number() {
  return getRuleContext<P416Parser::NumberContext>(0);
}

tree::TerminalNode* P416Parser::IntSizeTypeContext::GT() {
  return getToken(P416Parser::GT, 0);
}

P416Parser::IntSizeTypeContext::IntSizeTypeContext(BaseTypeContext *ctx) { copyFrom(ctx); }

void P416Parser::IntSizeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntSizeType(this);
}
void P416Parser::IntSizeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntSizeType(this);
}

antlrcpp::Any P416Parser::IntSizeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitIntSizeType(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::BaseTypeContext* P416Parser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 92, P416Parser::RuleBaseType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(587);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::BoolTypeContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(569);
      match(P416Parser::BOOL);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::ErrorTypeContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(570);
      match(P416Parser::ERROR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::BitTypeContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(571);
      match(P416Parser::BIT);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::BitSizeTypeContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(572);
      match(P416Parser::BIT);
      setState(573);
      match(P416Parser::LT);
      setState(574);
      number();
      setState(575);
      match(P416Parser::GT);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::IntSizeTypeContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(577);
      match(P416Parser::INT);
      setState(578);
      match(P416Parser::LT);
      setState(579);
      number();
      setState(580);
      match(P416Parser::GT);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<BaseTypeContext *>(_tracker.createInstance<P416Parser::VarBitSizeTypeContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(582);
      match(P416Parser::VARBIT);
      setState(583);
      match(P416Parser::LT);
      setState(584);
      number();
      setState(585);
      match(P416Parser::GT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeOrVoidContext ------------------------------------------------------------------

P416Parser::TypeOrVoidContext::TypeOrVoidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::TypeOrVoidContext::VOID() {
  return getToken(P416Parser::VOID, 0);
}

P416Parser::TypeRefContext* P416Parser::TypeOrVoidContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NonTypeNameContext* P416Parser::TypeOrVoidContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}


size_t P416Parser::TypeOrVoidContext::getRuleIndex() const {
  return P416Parser::RuleTypeOrVoid;
}

void P416Parser::TypeOrVoidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeOrVoid(this);
}

void P416Parser::TypeOrVoidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeOrVoid(this);
}


antlrcpp::Any P416Parser::TypeOrVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeOrVoid(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeOrVoidContext* P416Parser::typeOrVoid() {
  TypeOrVoidContext *_localctx = _tracker.createInstance<TypeOrVoidContext>(_ctx, getState());
  enterRule(_localctx, 94, P416Parser::RuleTypeOrVoid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(589);
      match(P416Parser::VOID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(590);
      typeRef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(591);
      nonTypeName();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptTypeParametersContext ------------------------------------------------------------------

P416Parser::OptTypeParametersContext::OptTypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::OptTypeParametersContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeParameterListContext* P416Parser::OptTypeParametersContext::typeParameterList() {
  return getRuleContext<P416Parser::TypeParameterListContext>(0);
}

tree::TerminalNode* P416Parser::OptTypeParametersContext::GT() {
  return getToken(P416Parser::GT, 0);
}


size_t P416Parser::OptTypeParametersContext::getRuleIndex() const {
  return P416Parser::RuleOptTypeParameters;
}

void P416Parser::OptTypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptTypeParameters(this);
}

void P416Parser::OptTypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptTypeParameters(this);
}


antlrcpp::Any P416Parser::OptTypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOptTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::OptTypeParametersContext* P416Parser::optTypeParameters() {
  OptTypeParametersContext *_localctx = _tracker.createInstance<OptTypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 96, P416Parser::RuleOptTypeParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(P416Parser::LT);
    setState(595);
    typeParameterList();
    setState(596);
    match(P416Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

P416Parser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::NonTypeNameContext *> P416Parser::TypeParameterListContext::nonTypeName() {
  return getRuleContexts<P416Parser::NonTypeNameContext>();
}

P416Parser::NonTypeNameContext* P416Parser::TypeParameterListContext::nonTypeName(size_t i) {
  return getRuleContext<P416Parser::NonTypeNameContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::TypeParameterListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::TypeParameterListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::TypeParameterListContext::getRuleIndex() const {
  return P416Parser::RuleTypeParameterList;
}

void P416Parser::TypeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterList(this);
}

void P416Parser::TypeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterList(this);
}


antlrcpp::Any P416Parser::TypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeParameterListContext* P416Parser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 98, P416Parser::RuleTypeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    nonTypeName();
    setState(603);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(599);
      match(P416Parser::COMMA);
      setState(600);
      nonTypeName();
      setState(605);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgContext ------------------------------------------------------------------

P416Parser::TypeArgContext::TypeArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::DontcareContext* P416Parser::TypeArgContext::dontcare() {
  return getRuleContext<P416Parser::DontcareContext>(0);
}

P416Parser::TypeRefContext* P416Parser::TypeArgContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}


size_t P416Parser::TypeArgContext::getRuleIndex() const {
  return P416Parser::RuleTypeArg;
}

void P416Parser::TypeArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArg(this);
}

void P416Parser::TypeArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArg(this);
}


antlrcpp::Any P416Parser::TypeArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeArg(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeArgContext* P416Parser::typeArg() {
  TypeArgContext *_localctx = _tracker.createInstance<TypeArgContext>(_ctx, getState());
  enterRule(_localctx, 100, P416Parser::RuleTypeArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(608);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::DONTCARE: {
        enterOuterAlt(_localctx, 1);
        setState(606);
        dontcare();
        break;
      }

      case P416Parser::BOOL:
      case P416Parser::BIT:
      case P416Parser::ERROR:
      case P416Parser::INT:
      case P416Parser::TUPLE:
      case P416Parser::VARBIT:
      case P416Parser::IDENTIFIER:
      case P416Parser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(607);
        typeRef();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DontcareContext ------------------------------------------------------------------

P416Parser::DontcareContext::DontcareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::DontcareContext::DONTCARE() {
  return getToken(P416Parser::DONTCARE, 0);
}


size_t P416Parser::DontcareContext::getRuleIndex() const {
  return P416Parser::RuleDontcare;
}

void P416Parser::DontcareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDontcare(this);
}

void P416Parser::DontcareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDontcare(this);
}


antlrcpp::Any P416Parser::DontcareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDontcare(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DontcareContext* P416Parser::dontcare() {
  DontcareContext *_localctx = _tracker.createInstance<DontcareContext>(_ctx, getState());
  enterRule(_localctx, 102, P416Parser::RuleDontcare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(610);
    match(P416Parser::DONTCARE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

P416Parser::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::TypeArgContext *> P416Parser::TypeArgumentListContext::typeArg() {
  return getRuleContexts<P416Parser::TypeArgContext>();
}

P416Parser::TypeArgContext* P416Parser::TypeArgumentListContext::typeArg(size_t i) {
  return getRuleContext<P416Parser::TypeArgContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::TypeArgumentListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::TypeArgumentListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::TypeArgumentListContext::getRuleIndex() const {
  return P416Parser::RuleTypeArgumentList;
}

void P416Parser::TypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentList(this);
}

void P416Parser::TypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentList(this);
}


antlrcpp::Any P416Parser::TypeArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeArgumentList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeArgumentListContext* P416Parser::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 104, P416Parser::RuleTypeArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    typeArg();
    setState(617);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(613);
      match(P416Parser::COMMA);
      setState(614);
      typeArg();
      setState(619);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

P416Parser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::DerivedTypeDeclarationContext* P416Parser::TypeDeclarationContext::derivedTypeDeclaration() {
  return getRuleContext<P416Parser::DerivedTypeDeclarationContext>(0);
}

P416Parser::TypedefDeclarationContext* P416Parser::TypeDeclarationContext::typedefDeclaration() {
  return getRuleContext<P416Parser::TypedefDeclarationContext>(0);
}

P416Parser::ParserTypeDeclarationContext* P416Parser::TypeDeclarationContext::parserTypeDeclaration() {
  return getRuleContext<P416Parser::ParserTypeDeclarationContext>(0);
}

tree::TerminalNode* P416Parser::TypeDeclarationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ControlTypeDeclarationContext* P416Parser::TypeDeclarationContext::controlTypeDeclaration() {
  return getRuleContext<P416Parser::ControlTypeDeclarationContext>(0);
}

P416Parser::PackageTypeDeclarationContext* P416Parser::TypeDeclarationContext::packageTypeDeclaration() {
  return getRuleContext<P416Parser::PackageTypeDeclarationContext>(0);
}


size_t P416Parser::TypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleTypeDeclaration;
}

void P416Parser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void P416Parser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any P416Parser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TypeDeclarationContext* P416Parser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 106, P416Parser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(620);
      derivedTypeDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(621);
      typedefDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(622);
      parserTypeDeclaration();
      setState(623);
      match(P416Parser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(625);
      controlTypeDeclaration();
      setState(626);
      match(P416Parser::SEMI);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(628);
      packageTypeDeclaration();
      setState(629);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DerivedTypeDeclarationContext ------------------------------------------------------------------

P416Parser::DerivedTypeDeclarationContext::DerivedTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::HeaderTypeDeclarationContext* P416Parser::DerivedTypeDeclarationContext::headerTypeDeclaration() {
  return getRuleContext<P416Parser::HeaderTypeDeclarationContext>(0);
}

P416Parser::HeaderUnionDeclarationContext* P416Parser::DerivedTypeDeclarationContext::headerUnionDeclaration() {
  return getRuleContext<P416Parser::HeaderUnionDeclarationContext>(0);
}

P416Parser::StructTypeDeclarationContext* P416Parser::DerivedTypeDeclarationContext::structTypeDeclaration() {
  return getRuleContext<P416Parser::StructTypeDeclarationContext>(0);
}

P416Parser::EnumDeclarationContext* P416Parser::DerivedTypeDeclarationContext::enumDeclaration() {
  return getRuleContext<P416Parser::EnumDeclarationContext>(0);
}


size_t P416Parser::DerivedTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleDerivedTypeDeclaration;
}

void P416Parser::DerivedTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDerivedTypeDeclaration(this);
}

void P416Parser::DerivedTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDerivedTypeDeclaration(this);
}


antlrcpp::Any P416Parser::DerivedTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDerivedTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DerivedTypeDeclarationContext* P416Parser::derivedTypeDeclaration() {
  DerivedTypeDeclarationContext *_localctx = _tracker.createInstance<DerivedTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 108, P416Parser::RuleDerivedTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(637);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(633);
      headerTypeDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(634);
      headerUnionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(635);
      structTypeDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(636);
      enumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderTypeDeclarationContext ------------------------------------------------------------------

P416Parser::HeaderTypeDeclarationContext::HeaderTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::HeaderTypeDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::HeaderTypeDeclarationContext::HEADER() {
  return getToken(P416Parser::HEADER, 0);
}

P416Parser::NameContext* P416Parser::HeaderTypeDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::HeaderTypeDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::HeaderTypeDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::StructFieldListContext* P416Parser::HeaderTypeDeclarationContext::structFieldList() {
  return getRuleContext<P416Parser::StructFieldListContext>(0);
}


size_t P416Parser::HeaderTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleHeaderTypeDeclaration;
}

void P416Parser::HeaderTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeaderTypeDeclaration(this);
}

void P416Parser::HeaderTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeaderTypeDeclaration(this);
}


antlrcpp::Any P416Parser::HeaderTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitHeaderTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::HeaderTypeDeclarationContext* P416Parser::headerTypeDeclaration() {
  HeaderTypeDeclarationContext *_localctx = _tracker.createInstance<HeaderTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 110, P416Parser::RuleHeaderTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    optAnnotations();
    setState(640);
    match(P416Parser::HEADER);
    setState(641);
    name();
    setState(642);
    match(P416Parser::LCURL);
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(643);
      structFieldList();
    }
    setState(646);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderUnionDeclarationContext ------------------------------------------------------------------

P416Parser::HeaderUnionDeclarationContext::HeaderUnionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::HeaderUnionDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::HeaderUnionDeclarationContext::HEADER_UNION() {
  return getToken(P416Parser::HEADER_UNION, 0);
}

P416Parser::NameContext* P416Parser::HeaderUnionDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::HeaderUnionDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::HeaderUnionDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::StructFieldListContext* P416Parser::HeaderUnionDeclarationContext::structFieldList() {
  return getRuleContext<P416Parser::StructFieldListContext>(0);
}


size_t P416Parser::HeaderUnionDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleHeaderUnionDeclaration;
}

void P416Parser::HeaderUnionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeaderUnionDeclaration(this);
}

void P416Parser::HeaderUnionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeaderUnionDeclaration(this);
}


antlrcpp::Any P416Parser::HeaderUnionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitHeaderUnionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::HeaderUnionDeclarationContext* P416Parser::headerUnionDeclaration() {
  HeaderUnionDeclarationContext *_localctx = _tracker.createInstance<HeaderUnionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 112, P416Parser::RuleHeaderUnionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    optAnnotations();
    setState(649);
    match(P416Parser::HEADER_UNION);
    setState(650);
    name();
    setState(651);
    match(P416Parser::LCURL);
    setState(653);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(652);
      structFieldList();
    }
    setState(655);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructTypeDeclarationContext ------------------------------------------------------------------

P416Parser::StructTypeDeclarationContext::StructTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::StructTypeDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::StructTypeDeclarationContext::STRUCT() {
  return getToken(P416Parser::STRUCT, 0);
}

P416Parser::NameContext* P416Parser::StructTypeDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::StructTypeDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::StructTypeDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::StructFieldListContext* P416Parser::StructTypeDeclarationContext::structFieldList() {
  return getRuleContext<P416Parser::StructFieldListContext>(0);
}


size_t P416Parser::StructTypeDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleStructTypeDeclaration;
}

void P416Parser::StructTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructTypeDeclaration(this);
}

void P416Parser::StructTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructTypeDeclaration(this);
}


antlrcpp::Any P416Parser::StructTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStructTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StructTypeDeclarationContext* P416Parser::structTypeDeclaration() {
  StructTypeDeclarationContext *_localctx = _tracker.createInstance<StructTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 114, P416Parser::RuleStructTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    optAnnotations();
    setState(658);
    match(P416Parser::STRUCT);
    setState(659);
    name();
    setState(660);
    match(P416Parser::LCURL);
    setState(662);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(661);
      structFieldList();
    }
    setState(664);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldListContext ------------------------------------------------------------------

P416Parser::StructFieldListContext::StructFieldListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::StructFieldContext *> P416Parser::StructFieldListContext::structField() {
  return getRuleContexts<P416Parser::StructFieldContext>();
}

P416Parser::StructFieldContext* P416Parser::StructFieldListContext::structField(size_t i) {
  return getRuleContext<P416Parser::StructFieldContext>(i);
}


size_t P416Parser::StructFieldListContext::getRuleIndex() const {
  return P416Parser::RuleStructFieldList;
}

void P416Parser::StructFieldListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructFieldList(this);
}

void P416Parser::StructFieldListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructFieldList(this);
}


antlrcpp::Any P416Parser::StructFieldListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStructFieldList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StructFieldListContext* P416Parser::structFieldList() {
  StructFieldListContext *_localctx = _tracker.createInstance<StructFieldListContext>(_ctx, getState());
  enterRule(_localctx, 116, P416Parser::RuleStructFieldList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(666);
      structField();
      setState(669); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldContext ------------------------------------------------------------------

P416Parser::StructFieldContext::StructFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::StructFieldContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

P416Parser::TypeRefContext* P416Parser::StructFieldContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NameContext* P416Parser::StructFieldContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::StructFieldContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::StructFieldContext::getRuleIndex() const {
  return P416Parser::RuleStructField;
}

void P416Parser::StructFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructField(this);
}

void P416Parser::StructFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructField(this);
}


antlrcpp::Any P416Parser::StructFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStructField(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StructFieldContext* P416Parser::structField() {
  StructFieldContext *_localctx = _tracker.createInstance<StructFieldContext>(_ctx, getState());
  enterRule(_localctx, 118, P416Parser::RuleStructField);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    optAnnotations();
    setState(672);
    typeRef();
    setState(673);
    name();
    setState(674);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

P416Parser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::EnumDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::EnumDeclarationContext::ENUM() {
  return getToken(P416Parser::ENUM, 0);
}

P416Parser::NameContext* P416Parser::EnumDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::EnumDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::IdentifierListContext* P416Parser::EnumDeclarationContext::identifierList() {
  return getRuleContext<P416Parser::IdentifierListContext>(0);
}

tree::TerminalNode* P416Parser::EnumDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}


size_t P416Parser::EnumDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleEnumDeclaration;
}

void P416Parser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void P416Parser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any P416Parser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::EnumDeclarationContext* P416Parser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 120, P416Parser::RuleEnumDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    optAnnotations();
    setState(677);
    match(P416Parser::ENUM);
    setState(678);
    name();
    setState(679);
    match(P416Parser::LCURL);
    setState(680);
    identifierList();
    setState(681);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorDeclarationContext ------------------------------------------------------------------

P416Parser::ErrorDeclarationContext::ErrorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::ErrorDeclarationContext::ERROR() {
  return getToken(P416Parser::ERROR, 0);
}

tree::TerminalNode* P416Parser::ErrorDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::IdentifierListContext* P416Parser::ErrorDeclarationContext::identifierList() {
  return getRuleContext<P416Parser::IdentifierListContext>(0);
}

tree::TerminalNode* P416Parser::ErrorDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}


size_t P416Parser::ErrorDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleErrorDeclaration;
}

void P416Parser::ErrorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErrorDeclaration(this);
}

void P416Parser::ErrorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErrorDeclaration(this);
}


antlrcpp::Any P416Parser::ErrorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitErrorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ErrorDeclarationContext* P416Parser::errorDeclaration() {
  ErrorDeclarationContext *_localctx = _tracker.createInstance<ErrorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 122, P416Parser::RuleErrorDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    match(P416Parser::ERROR);
    setState(684);
    match(P416Parser::LCURL);
    setState(685);
    identifierList();
    setState(686);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchKindDeclarationContext ------------------------------------------------------------------

P416Parser::MatchKindDeclarationContext::MatchKindDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::MatchKindDeclarationContext::MATCH_KIND() {
  return getToken(P416Parser::MATCH_KIND, 0);
}

tree::TerminalNode* P416Parser::MatchKindDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::IdentifierListContext* P416Parser::MatchKindDeclarationContext::identifierList() {
  return getRuleContext<P416Parser::IdentifierListContext>(0);
}

tree::TerminalNode* P416Parser::MatchKindDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}


size_t P416Parser::MatchKindDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleMatchKindDeclaration;
}

void P416Parser::MatchKindDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchKindDeclaration(this);
}

void P416Parser::MatchKindDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchKindDeclaration(this);
}


antlrcpp::Any P416Parser::MatchKindDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMatchKindDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::MatchKindDeclarationContext* P416Parser::matchKindDeclaration() {
  MatchKindDeclarationContext *_localctx = _tracker.createInstance<MatchKindDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, P416Parser::RuleMatchKindDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    match(P416Parser::MATCH_KIND);
    setState(689);
    match(P416Parser::LCURL);
    setState(690);
    identifierList();
    setState(691);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

P416Parser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::NameContext *> P416Parser::IdentifierListContext::name() {
  return getRuleContexts<P416Parser::NameContext>();
}

P416Parser::NameContext* P416Parser::IdentifierListContext::name(size_t i) {
  return getRuleContext<P416Parser::NameContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::IdentifierListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::IdentifierListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::IdentifierListContext::getRuleIndex() const {
  return P416Parser::RuleIdentifierList;
}

void P416Parser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void P416Parser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any P416Parser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::IdentifierListContext* P416Parser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 126, P416Parser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    name();
    setState(698);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(694);
      match(P416Parser::COMMA);
      setState(695);
      name();
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefDeclarationContext ------------------------------------------------------------------

P416Parser::TypedefDeclarationContext::TypedefDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::TypedefDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleTypedefDeclaration;
}

void P416Parser::TypedefDeclarationContext::copyFrom(TypedefDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DerivedTypeDefContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::DerivedTypeDefContext::TYPEDEF() {
  return getToken(P416Parser::TYPEDEF, 0);
}

P416Parser::DerivedTypeDeclarationContext* P416Parser::DerivedTypeDefContext::derivedTypeDeclaration() {
  return getRuleContext<P416Parser::DerivedTypeDeclarationContext>(0);
}

P416Parser::NameContext* P416Parser::DerivedTypeDefContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::DerivedTypeDefContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::AnnotationsContext* P416Parser::DerivedTypeDefContext::annotations() {
  return getRuleContext<P416Parser::AnnotationsContext>(0);
}

P416Parser::DerivedTypeDefContext::DerivedTypeDefContext(TypedefDeclarationContext *ctx) { copyFrom(ctx); }

void P416Parser::DerivedTypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDerivedTypeDef(this);
}
void P416Parser::DerivedTypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDerivedTypeDef(this);
}

antlrcpp::Any P416Parser::DerivedTypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDerivedTypeDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleTypeDefContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::SimpleTypeDefContext::TYPEDEF() {
  return getToken(P416Parser::TYPEDEF, 0);
}

P416Parser::TypeRefContext* P416Parser::SimpleTypeDefContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NameContext* P416Parser::SimpleTypeDefContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::SimpleTypeDefContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::AnnotationsContext* P416Parser::SimpleTypeDefContext::annotations() {
  return getRuleContext<P416Parser::AnnotationsContext>(0);
}

P416Parser::SimpleTypeDefContext::SimpleTypeDefContext(TypedefDeclarationContext *ctx) { copyFrom(ctx); }

void P416Parser::SimpleTypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTypeDef(this);
}
void P416Parser::SimpleTypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTypeDef(this);
}

antlrcpp::Any P416Parser::SimpleTypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSimpleTypeDef(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::TypedefDeclarationContext* P416Parser::typedefDeclaration() {
  TypedefDeclarationContext *_localctx = _tracker.createInstance<TypedefDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, P416Parser::RuleTypedefDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(717);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TypedefDeclarationContext *>(_tracker.createInstance<P416Parser::SimpleTypeDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(702);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == P416Parser::AT) {
        setState(701);
        annotations();
      }
      setState(704);
      match(P416Parser::TYPEDEF);
      setState(705);
      typeRef();
      setState(706);
      name();
      setState(707);
      match(P416Parser::SEMI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TypedefDeclarationContext *>(_tracker.createInstance<P416Parser::DerivedTypeDefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(710);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == P416Parser::AT) {
        setState(709);
        annotations();
      }
      setState(712);
      match(P416Parser::TYPEDEF);
      setState(713);
      derivedTypeDeclaration();
      setState(714);
      name();
      setState(715);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

P416Parser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::LvalueContext* P416Parser::AssignmentStatementContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::AssignmentStatementContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

P416Parser::ExpressionContext* P416Parser::AssignmentStatementContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::AssignmentStatementContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::AssignmentStatementContext::getRuleIndex() const {
  return P416Parser::RuleAssignmentStatement;
}

void P416Parser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void P416Parser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}


antlrcpp::Any P416Parser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::AssignmentStatementContext* P416Parser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, P416Parser::RuleAssignmentStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    lvalue(0);
    setState(720);
    match(P416Parser::ASSIGN);
    setState(721);
    expression(0);
    setState(722);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallStatementContext ------------------------------------------------------------------

P416Parser::MethodCallStatementContext::MethodCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::MethodCallStatementContext::getRuleIndex() const {
  return P416Parser::RuleMethodCallStatement;
}

void P416Parser::MethodCallStatementContext::copyFrom(MethodCallStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExtractMethodCallContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::ExtractMethodCallContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::EXTRACT() {
  return getToken(P416Parser::EXTRACT, 0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeArgumentListContext* P416Parser::ExtractMethodCallContext::typeArgumentList() {
  return getRuleContext<P416Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* P416Parser::ExtractMethodCallContext::GT() {
  return getToken(P416Parser::GT, 0);
}

P416Parser::ArgumentListContext* P416Parser::ExtractMethodCallContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::ExtractMethodCallContext::ExtractMethodCallContext(MethodCallStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::ExtractMethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtractMethodCall(this);
}
void P416Parser::ExtractMethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtractMethodCall(this);
}

antlrcpp::Any P416Parser::ExtractMethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExtractMethodCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ApplyMethodCallContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::ApplyMethodCallContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::ApplyMethodCallContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

tree::TerminalNode* P416Parser::ApplyMethodCallContext::APPLY() {
  return getToken(P416Parser::APPLY, 0);
}

tree::TerminalNode* P416Parser::ApplyMethodCallContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ApplyMethodCallContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::ApplyMethodCallContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ArgumentListContext* P416Parser::ApplyMethodCallContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::ApplyMethodCallContext::ApplyMethodCallContext(MethodCallStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::ApplyMethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterApplyMethodCall(this);
}
void P416Parser::ApplyMethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitApplyMethodCall(this);
}

antlrcpp::Any P416Parser::ApplyMethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitApplyMethodCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallWithTypeArgsContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::CallWithTypeArgsContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::CallWithTypeArgsContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeArgumentListContext* P416Parser::CallWithTypeArgsContext::typeArgumentList() {
  return getRuleContext<P416Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* P416Parser::CallWithTypeArgsContext::GT() {
  return getToken(P416Parser::GT, 0);
}

tree::TerminalNode* P416Parser::CallWithTypeArgsContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::CallWithTypeArgsContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::CallWithTypeArgsContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ArgumentListContext* P416Parser::CallWithTypeArgsContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::CallWithTypeArgsContext::CallWithTypeArgsContext(MethodCallStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::CallWithTypeArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallWithTypeArgs(this);
}
void P416Parser::CallWithTypeArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallWithTypeArgs(this);
}

antlrcpp::Any P416Parser::CallWithTypeArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitCallWithTypeArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallWithoutTypeArgsContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::CallWithoutTypeArgsContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::CallWithoutTypeArgsContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::CallWithoutTypeArgsContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::CallWithoutTypeArgsContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ArgumentListContext* P416Parser::CallWithoutTypeArgsContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::CallWithoutTypeArgsContext::CallWithoutTypeArgsContext(MethodCallStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::CallWithoutTypeArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallWithoutTypeArgs(this);
}
void P416Parser::CallWithoutTypeArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallWithoutTypeArgs(this);
}

antlrcpp::Any P416Parser::CallWithoutTypeArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitCallWithoutTypeArgs(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::MethodCallStatementContext* P416Parser::methodCallStatement() {
  MethodCallStatementContext *_localctx = _tracker.createInstance<MethodCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, P416Parser::RuleMethodCallStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(769);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MethodCallStatementContext *>(_tracker.createInstance<P416Parser::ApplyMethodCallContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(724);
      lvalue(0);
      setState(725);
      match(P416Parser::DOT);
      setState(726);
      match(P416Parser::APPLY);
      setState(727);
      match(P416Parser::LPARAN);
      setState(729);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(728);
        argumentList();
      }
      setState(731);
      match(P416Parser::RPARAN);
      setState(732);
      match(P416Parser::SEMI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MethodCallStatementContext *>(_tracker.createInstance<P416Parser::ExtractMethodCallContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(734);
      lvalue(0);
      setState(735);
      match(P416Parser::DOT);
      setState(736);
      match(P416Parser::EXTRACT);
      setState(741);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == P416Parser::LT) {
        setState(737);
        match(P416Parser::LT);
        setState(738);
        typeArgumentList();
        setState(739);
        match(P416Parser::GT);
      }
      setState(743);
      match(P416Parser::LPARAN);
      setState(745);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(744);
        argumentList();
      }
      setState(747);
      match(P416Parser::RPARAN);
      setState(748);
      match(P416Parser::SEMI);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<MethodCallStatementContext *>(_tracker.createInstance<P416Parser::CallWithoutTypeArgsContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(750);
      lvalue(0);
      setState(751);
      match(P416Parser::LPARAN);
      setState(753);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(752);
        argumentList();
      }
      setState(755);
      match(P416Parser::RPARAN);
      setState(756);
      match(P416Parser::SEMI);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<MethodCallStatementContext *>(_tracker.createInstance<P416Parser::CallWithTypeArgsContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(758);
      lvalue(0);
      setState(759);
      match(P416Parser::LT);
      setState(760);
      typeArgumentList();
      setState(761);
      match(P416Parser::GT);
      setState(762);
      match(P416Parser::LPARAN);
      setState(764);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(763);
        argumentList();
      }
      setState(766);
      match(P416Parser::RPARAN);
      setState(767);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

P416Parser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::EmptyStatementContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::EmptyStatementContext::getRuleIndex() const {
  return P416Parser::RuleEmptyStatement;
}

void P416Parser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void P416Parser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any P416Parser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::EmptyStatementContext* P416Parser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, P416Parser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

P416Parser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::ReturnStatementContext::RETURN() {
  return getToken(P416Parser::RETURN, 0);
}

tree::TerminalNode* P416Parser::ReturnStatementContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::ReturnStatementContext::getRuleIndex() const {
  return P416Parser::RuleReturnStatement;
}

void P416Parser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void P416Parser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any P416Parser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ReturnStatementContext* P416Parser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 136, P416Parser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(773);
    match(P416Parser::RETURN);
    setState(774);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStatementContext ------------------------------------------------------------------

P416Parser::ExitStatementContext::ExitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::ExitStatementContext::EXIT() {
  return getToken(P416Parser::EXIT, 0);
}

tree::TerminalNode* P416Parser::ExitStatementContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::ExitStatementContext::getRuleIndex() const {
  return P416Parser::RuleExitStatement;
}

void P416Parser::ExitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExitStatement(this);
}

void P416Parser::ExitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExitStatement(this);
}


antlrcpp::Any P416Parser::ExitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExitStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ExitStatementContext* P416Parser::exitStatement() {
  ExitStatementContext *_localctx = _tracker.createInstance<ExitStatementContext>(_ctx, getState());
  enterRule(_localctx, 138, P416Parser::RuleExitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(776);
    match(P416Parser::EXIT);
    setState(777);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalStatementContext ------------------------------------------------------------------

P416Parser::ConditionalStatementContext::ConditionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::ConditionalStatementContext::getRuleIndex() const {
  return P416Parser::RuleConditionalStatement;
}

void P416Parser::ConditionalStatementContext::copyFrom(ConditionalStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfElseStatementContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::IfElseStatementContext::IF() {
  return getToken(P416Parser::IF, 0);
}

tree::TerminalNode* P416Parser::IfElseStatementContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

P416Parser::ExpressionContext* P416Parser::IfElseStatementContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::IfElseStatementContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

std::vector<P416Parser::StatementContext *> P416Parser::IfElseStatementContext::statement() {
  return getRuleContexts<P416Parser::StatementContext>();
}

P416Parser::StatementContext* P416Parser::IfElseStatementContext::statement(size_t i) {
  return getRuleContext<P416Parser::StatementContext>(i);
}

tree::TerminalNode* P416Parser::IfElseStatementContext::ELSE() {
  return getToken(P416Parser::ELSE, 0);
}

P416Parser::IfElseStatementContext::IfElseStatementContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::IfElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElseStatement(this);
}
void P416Parser::IfElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElseStatement(this);
}

antlrcpp::Any P416Parser::IfElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitIfElseStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::IfStatementContext::IF() {
  return getToken(P416Parser::IF, 0);
}

tree::TerminalNode* P416Parser::IfStatementContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

P416Parser::ExpressionContext* P416Parser::IfStatementContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::IfStatementContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::StatementContext* P416Parser::IfStatementContext::statement() {
  return getRuleContext<P416Parser::StatementContext>(0);
}

P416Parser::IfStatementContext::IfStatementContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }

void P416Parser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void P416Parser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

antlrcpp::Any P416Parser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::ConditionalStatementContext* P416Parser::conditionalStatement() {
  ConditionalStatementContext *_localctx = _tracker.createInstance<ConditionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, P416Parser::RuleConditionalStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(793);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ConditionalStatementContext *>(_tracker.createInstance<P416Parser::IfStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(779);
      match(P416Parser::IF);
      setState(780);
      match(P416Parser::LPARAN);
      setState(781);
      expression(0);
      setState(782);
      match(P416Parser::RPARAN);
      setState(783);
      statement();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ConditionalStatementContext *>(_tracker.createInstance<P416Parser::IfElseStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(785);
      match(P416Parser::IF);
      setState(786);
      match(P416Parser::LPARAN);
      setState(787);
      expression(0);
      setState(788);
      match(P416Parser::RPARAN);
      setState(789);
      statement();
      setState(790);
      match(P416Parser::ELSE);
      setState(791);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectApplicationContext ------------------------------------------------------------------

P416Parser::DirectApplicationContext::DirectApplicationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TypeNameContext* P416Parser::DirectApplicationContext::typeName() {
  return getRuleContext<P416Parser::TypeNameContext>(0);
}

tree::TerminalNode* P416Parser::DirectApplicationContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

tree::TerminalNode* P416Parser::DirectApplicationContext::APPLY() {
  return getToken(P416Parser::APPLY, 0);
}

tree::TerminalNode* P416Parser::DirectApplicationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::DirectApplicationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::DirectApplicationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::ArgumentListContext* P416Parser::DirectApplicationContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}


size_t P416Parser::DirectApplicationContext::getRuleIndex() const {
  return P416Parser::RuleDirectApplication;
}

void P416Parser::DirectApplicationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectApplication(this);
}

void P416Parser::DirectApplicationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectApplication(this);
}


antlrcpp::Any P416Parser::DirectApplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDirectApplication(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DirectApplicationContext* P416Parser::directApplication() {
  DirectApplicationContext *_localctx = _tracker.createInstance<DirectApplicationContext>(_ctx, getState());
  enterRule(_localctx, 142, P416Parser::RuleDirectApplication);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    typeName();
    setState(796);
    match(P416Parser::DOT);
    setState(797);
    match(P416Parser::APPLY);
    setState(798);
    match(P416Parser::LPARAN);
    setState(800);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
      setState(799);
      argumentList();
    }
    setState(802);
    match(P416Parser::RPARAN);
    setState(803);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

P416Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::AssignmentStatementContext* P416Parser::StatementContext::assignmentStatement() {
  return getRuleContext<P416Parser::AssignmentStatementContext>(0);
}

P416Parser::MethodCallStatementContext* P416Parser::StatementContext::methodCallStatement() {
  return getRuleContext<P416Parser::MethodCallStatementContext>(0);
}

P416Parser::DirectApplicationContext* P416Parser::StatementContext::directApplication() {
  return getRuleContext<P416Parser::DirectApplicationContext>(0);
}

P416Parser::ConditionalStatementContext* P416Parser::StatementContext::conditionalStatement() {
  return getRuleContext<P416Parser::ConditionalStatementContext>(0);
}

P416Parser::EmptyStatementContext* P416Parser::StatementContext::emptyStatement() {
  return getRuleContext<P416Parser::EmptyStatementContext>(0);
}

P416Parser::BlockStatementContext* P416Parser::StatementContext::blockStatement() {
  return getRuleContext<P416Parser::BlockStatementContext>(0);
}

P416Parser::ExitStatementContext* P416Parser::StatementContext::exitStatement() {
  return getRuleContext<P416Parser::ExitStatementContext>(0);
}

P416Parser::ReturnStatementContext* P416Parser::StatementContext::returnStatement() {
  return getRuleContext<P416Parser::ReturnStatementContext>(0);
}

P416Parser::SwitchStatementContext* P416Parser::StatementContext::switchStatement() {
  return getRuleContext<P416Parser::SwitchStatementContext>(0);
}


size_t P416Parser::StatementContext::getRuleIndex() const {
  return P416Parser::RuleStatement;
}

void P416Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void P416Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any P416Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StatementContext* P416Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 144, P416Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(814);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(805);
      assignmentStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(806);
      methodCallStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(807);
      directApplication();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(808);
      conditionalStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(809);
      emptyStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(810);
      blockStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(811);
      exitStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(812);
      returnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(813);
      switchStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

P416Parser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::BlockStatementContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::BlockStatementContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::BlockStatementContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::StatOrDeclListContext* P416Parser::BlockStatementContext::statOrDeclList() {
  return getRuleContext<P416Parser::StatOrDeclListContext>(0);
}


size_t P416Parser::BlockStatementContext::getRuleIndex() const {
  return P416Parser::RuleBlockStatement;
}

void P416Parser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void P416Parser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any P416Parser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::BlockStatementContext* P416Parser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 146, P416Parser::RuleBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
    optAnnotations();
    setState(817);
    match(P416Parser::LCURL);
    setState(819);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
      | (1ULL << (P416Parser::APPLY - 10))
      | (1ULL << (P416Parser::BOOL - 10))
      | (1ULL << (P416Parser::BIT - 10))
      | (1ULL << (P416Parser::CONST - 10))
      | (1ULL << (P416Parser::ERROR - 10))
      | (1ULL << (P416Parser::EXIT - 10))
      | (1ULL << (P416Parser::IF - 10))
      | (1ULL << (P416Parser::INT - 10))
      | (1ULL << (P416Parser::KEY - 10))
      | (1ULL << (P416Parser::RETURN - 10))
      | (1ULL << (P416Parser::STATE - 10))
      | (1ULL << (P416Parser::SWITCH - 10))
      | (1ULL << (P416Parser::TUPLE - 10))
      | (1ULL << (P416Parser::VARBIT - 10))
      | (1ULL << (P416Parser::IDENTIFIER - 10))
      | (1ULL << (P416Parser::SEMI - 10))
      | (1ULL << (P416Parser::AT - 10))
      | (1ULL << (P416Parser::LCURL - 10))
      | (1ULL << (P416Parser::DOT - 10)))) != 0)) {
      setState(818);
      statOrDeclList();
    }
    setState(821);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatOrDeclListContext ------------------------------------------------------------------

P416Parser::StatOrDeclListContext::StatOrDeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::StatementOrDeclarationContext *> P416Parser::StatOrDeclListContext::statementOrDeclaration() {
  return getRuleContexts<P416Parser::StatementOrDeclarationContext>();
}

P416Parser::StatementOrDeclarationContext* P416Parser::StatOrDeclListContext::statementOrDeclaration(size_t i) {
  return getRuleContext<P416Parser::StatementOrDeclarationContext>(i);
}


size_t P416Parser::StatOrDeclListContext::getRuleIndex() const {
  return P416Parser::RuleStatOrDeclList;
}

void P416Parser::StatOrDeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatOrDeclList(this);
}

void P416Parser::StatOrDeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatOrDeclList(this);
}


antlrcpp::Any P416Parser::StatOrDeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStatOrDeclList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StatOrDeclListContext* P416Parser::statOrDeclList() {
  StatOrDeclListContext *_localctx = _tracker.createInstance<StatOrDeclListContext>(_ctx, getState());
  enterRule(_localctx, 148, P416Parser::RuleStatOrDeclList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(824); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(823);
      statementOrDeclaration();
      setState(826); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (P416Parser::ACTIONS - 10))
      | (1ULL << (P416Parser::APPLY - 10))
      | (1ULL << (P416Parser::BOOL - 10))
      | (1ULL << (P416Parser::BIT - 10))
      | (1ULL << (P416Parser::CONST - 10))
      | (1ULL << (P416Parser::ERROR - 10))
      | (1ULL << (P416Parser::EXIT - 10))
      | (1ULL << (P416Parser::IF - 10))
      | (1ULL << (P416Parser::INT - 10))
      | (1ULL << (P416Parser::KEY - 10))
      | (1ULL << (P416Parser::RETURN - 10))
      | (1ULL << (P416Parser::STATE - 10))
      | (1ULL << (P416Parser::SWITCH - 10))
      | (1ULL << (P416Parser::TUPLE - 10))
      | (1ULL << (P416Parser::VARBIT - 10))
      | (1ULL << (P416Parser::IDENTIFIER - 10))
      | (1ULL << (P416Parser::SEMI - 10))
      | (1ULL << (P416Parser::AT - 10))
      | (1ULL << (P416Parser::LCURL - 10))
      | (1ULL << (P416Parser::DOT - 10)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

P416Parser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::SwitchStatementContext::SWITCH() {
  return getToken(P416Parser::SWITCH, 0);
}

tree::TerminalNode* P416Parser::SwitchStatementContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

P416Parser::ExpressionContext* P416Parser::SwitchStatementContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::SwitchStatementContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

tree::TerminalNode* P416Parser::SwitchStatementContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::SwitchStatementContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::SwitchCasesContext* P416Parser::SwitchStatementContext::switchCases() {
  return getRuleContext<P416Parser::SwitchCasesContext>(0);
}


size_t P416Parser::SwitchStatementContext::getRuleIndex() const {
  return P416Parser::RuleSwitchStatement;
}

void P416Parser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void P416Parser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any P416Parser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SwitchStatementContext* P416Parser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 150, P416Parser::RuleSwitchStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(P416Parser::SWITCH);
    setState(829);
    match(P416Parser::LPARAN);
    setState(830);
    expression(0);
    setState(831);
    match(P416Parser::RPARAN);
    setState(832);
    match(P416Parser::LCURL);
    setState(834);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::EXTRACT)
      | (1ULL << P416Parser::DEFAULT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::IDENTIFIER))) != 0)) {
      setState(833);
      switchCases();
    }
    setState(836);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchCasesContext ------------------------------------------------------------------

P416Parser::SwitchCasesContext::SwitchCasesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::SwitchCaseContext *> P416Parser::SwitchCasesContext::switchCase() {
  return getRuleContexts<P416Parser::SwitchCaseContext>();
}

P416Parser::SwitchCaseContext* P416Parser::SwitchCasesContext::switchCase(size_t i) {
  return getRuleContext<P416Parser::SwitchCaseContext>(i);
}


size_t P416Parser::SwitchCasesContext::getRuleIndex() const {
  return P416Parser::RuleSwitchCases;
}

void P416Parser::SwitchCasesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchCases(this);
}

void P416Parser::SwitchCasesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchCases(this);
}


antlrcpp::Any P416Parser::SwitchCasesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSwitchCases(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SwitchCasesContext* P416Parser::switchCases() {
  SwitchCasesContext *_localctx = _tracker.createInstance<SwitchCasesContext>(_ctx, getState());
  enterRule(_localctx, 152, P416Parser::RuleSwitchCases);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(839); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(838);
      switchCase();
      setState(841); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::EXTRACT)
      | (1ULL << P416Parser::DEFAULT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchCaseContext ------------------------------------------------------------------

P416Parser::SwitchCaseContext::SwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::SwitchLabelContext* P416Parser::SwitchCaseContext::switchLabel() {
  return getRuleContext<P416Parser::SwitchLabelContext>(0);
}

tree::TerminalNode* P416Parser::SwitchCaseContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

P416Parser::BlockStatementContext* P416Parser::SwitchCaseContext::blockStatement() {
  return getRuleContext<P416Parser::BlockStatementContext>(0);
}


size_t P416Parser::SwitchCaseContext::getRuleIndex() const {
  return P416Parser::RuleSwitchCase;
}

void P416Parser::SwitchCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchCase(this);
}

void P416Parser::SwitchCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchCase(this);
}


antlrcpp::Any P416Parser::SwitchCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSwitchCase(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SwitchCaseContext* P416Parser::switchCase() {
  SwitchCaseContext *_localctx = _tracker.createInstance<SwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 154, P416Parser::RuleSwitchCase);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(843);
    switchLabel();
    setState(844);
    match(P416Parser::COLON);
    setState(846);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::AT

    || _la == P416Parser::LCURL) {
      setState(845);
      blockStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

P416Parser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::NameContext* P416Parser::SwitchLabelContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::SwitchLabelContext::DEFAULT() {
  return getToken(P416Parser::DEFAULT, 0);
}


size_t P416Parser::SwitchLabelContext::getRuleIndex() const {
  return P416Parser::RuleSwitchLabel;
}

void P416Parser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void P416Parser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any P416Parser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::SwitchLabelContext* P416Parser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 156, P416Parser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(850);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::ACTIONS:
      case P416Parser::APPLY:
      case P416Parser::EXTRACT:
      case P416Parser::ERROR:
      case P416Parser::KEY:
      case P416Parser::STATE:
      case P416Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(848);
        name();
        break;
      }

      case P416Parser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(849);
        match(P416Parser::DEFAULT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementOrDeclarationContext ------------------------------------------------------------------

P416Parser::StatementOrDeclarationContext::StatementOrDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::VariableDeclarationContext* P416Parser::StatementOrDeclarationContext::variableDeclaration() {
  return getRuleContext<P416Parser::VariableDeclarationContext>(0);
}

P416Parser::ConstantDeclarationContext* P416Parser::StatementOrDeclarationContext::constantDeclaration() {
  return getRuleContext<P416Parser::ConstantDeclarationContext>(0);
}

P416Parser::StatementContext* P416Parser::StatementOrDeclarationContext::statement() {
  return getRuleContext<P416Parser::StatementContext>(0);
}

P416Parser::InstantiationContext* P416Parser::StatementOrDeclarationContext::instantiation() {
  return getRuleContext<P416Parser::InstantiationContext>(0);
}


size_t P416Parser::StatementOrDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleStatementOrDeclaration;
}

void P416Parser::StatementOrDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementOrDeclaration(this);
}

void P416Parser::StatementOrDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementOrDeclaration(this);
}


antlrcpp::Any P416Parser::StatementOrDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStatementOrDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::StatementOrDeclarationContext* P416Parser::statementOrDeclaration() {
  StatementOrDeclarationContext *_localctx = _tracker.createInstance<StatementOrDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 158, P416Parser::RuleStatementOrDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(856);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(852);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(853);
      constantDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(854);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(855);
      instantiation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableDeclarationContext ------------------------------------------------------------------

P416Parser::TableDeclarationContext::TableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::TableDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::TableDeclarationContext::TABLE() {
  return getToken(P416Parser::TABLE, 0);
}

P416Parser::NameContext* P416Parser::TableDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::TableDeclarationContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::TablePropertyListContext* P416Parser::TableDeclarationContext::tablePropertyList() {
  return getRuleContext<P416Parser::TablePropertyListContext>(0);
}

tree::TerminalNode* P416Parser::TableDeclarationContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}


size_t P416Parser::TableDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleTableDeclaration;
}

void P416Parser::TableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableDeclaration(this);
}

void P416Parser::TableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableDeclaration(this);
}


antlrcpp::Any P416Parser::TableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TableDeclarationContext* P416Parser::tableDeclaration() {
  TableDeclarationContext *_localctx = _tracker.createInstance<TableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 160, P416Parser::RuleTableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(858);
    optAnnotations();
    setState(859);
    match(P416Parser::TABLE);
    setState(860);
    name();
    setState(861);
    match(P416Parser::LCURL);
    setState(862);
    tablePropertyList();
    setState(863);
    match(P416Parser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TablePropertyListContext ------------------------------------------------------------------

P416Parser::TablePropertyListContext::TablePropertyListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::TablePropertyContext *> P416Parser::TablePropertyListContext::tableProperty() {
  return getRuleContexts<P416Parser::TablePropertyContext>();
}

P416Parser::TablePropertyContext* P416Parser::TablePropertyListContext::tableProperty(size_t i) {
  return getRuleContext<P416Parser::TablePropertyContext>(i);
}


size_t P416Parser::TablePropertyListContext::getRuleIndex() const {
  return P416Parser::RuleTablePropertyList;
}

void P416Parser::TablePropertyListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTablePropertyList(this);
}

void P416Parser::TablePropertyListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTablePropertyList(this);
}


antlrcpp::Any P416Parser::TablePropertyListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTablePropertyList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::TablePropertyListContext* P416Parser::tablePropertyList() {
  TablePropertyListContext *_localctx = _tracker.createInstance<TablePropertyListContext>(_ctx, getState());
  enterRule(_localctx, 162, P416Parser::RuleTablePropertyList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(865);
      tableProperty();
      setState(868); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::CONST)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::IDENTIFIER)
      | (1ULL << P416Parser::AT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TablePropertyContext ------------------------------------------------------------------

P416Parser::TablePropertyContext::TablePropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::TablePropertyContext::getRuleIndex() const {
  return P416Parser::RuleTableProperty;
}

void P416Parser::TablePropertyContext::copyFrom(TablePropertyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstEntriesContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::ConstEntriesContext::CONST() {
  return getToken(P416Parser::CONST, 0);
}

tree::TerminalNode* P416Parser::ConstEntriesContext::ENTRIES() {
  return getToken(P416Parser::ENTRIES, 0);
}

tree::TerminalNode* P416Parser::ConstEntriesContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

tree::TerminalNode* P416Parser::ConstEntriesContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::EntriesListContext* P416Parser::ConstEntriesContext::entriesList() {
  return getRuleContext<P416Parser::EntriesListContext>(0);
}

tree::TerminalNode* P416Parser::ConstEntriesContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::ConstEntriesContext::ConstEntriesContext(TablePropertyContext *ctx) { copyFrom(ctx); }

void P416Parser::ConstEntriesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstEntries(this);
}
void P416Parser::ConstEntriesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstEntries(this);
}

antlrcpp::Any P416Parser::ConstEntriesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitConstEntries(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LocalConstVariableContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::LocalConstVariableContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::LocalConstVariableContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

tree::TerminalNode* P416Parser::LocalConstVariableContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

P416Parser::InitializerContext* P416Parser::LocalConstVariableContext::initializer() {
  return getRuleContext<P416Parser::InitializerContext>(0);
}

tree::TerminalNode* P416Parser::LocalConstVariableContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::LocalConstVariableContext::LocalConstVariableContext(TablePropertyContext *ctx) { copyFrom(ctx); }

void P416Parser::LocalConstVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalConstVariable(this);
}
void P416Parser::LocalConstVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalConstVariable(this);
}

antlrcpp::Any P416Parser::LocalConstVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitLocalConstVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LocalVariableContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::LocalVariableContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::LocalVariableContext::CONST() {
  return getToken(P416Parser::CONST, 0);
}

tree::TerminalNode* P416Parser::LocalVariableContext::IDENTIFIER() {
  return getToken(P416Parser::IDENTIFIER, 0);
}

tree::TerminalNode* P416Parser::LocalVariableContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

P416Parser::InitializerContext* P416Parser::LocalVariableContext::initializer() {
  return getRuleContext<P416Parser::InitializerContext>(0);
}

tree::TerminalNode* P416Parser::LocalVariableContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::LocalVariableContext::LocalVariableContext(TablePropertyContext *ctx) { copyFrom(ctx); }

void P416Parser::LocalVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariable(this);
}
void P416Parser::LocalVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariable(this);
}

antlrcpp::Any P416Parser::LocalVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitLocalVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ActionsContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::ActionsContext::ACTIONS() {
  return getToken(P416Parser::ACTIONS, 0);
}

tree::TerminalNode* P416Parser::ActionsContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

tree::TerminalNode* P416Parser::ActionsContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

P416Parser::ActionListContext* P416Parser::ActionsContext::actionList() {
  return getRuleContext<P416Parser::ActionListContext>(0);
}

tree::TerminalNode* P416Parser::ActionsContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::ActionsContext::ActionsContext(TablePropertyContext *ctx) { copyFrom(ctx); }

void P416Parser::ActionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActions(this);
}
void P416Parser::ActionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActions(this);
}

antlrcpp::Any P416Parser::ActionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitActions(this);
  else
    return visitor->visitChildren(this);
}
//----------------- KeyContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::KeyContext::KEY() {
  return getToken(P416Parser::KEY, 0);
}

tree::TerminalNode* P416Parser::KeyContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

tree::TerminalNode* P416Parser::KeyContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::KeyContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::KeyElementListContext* P416Parser::KeyContext::keyElementList() {
  return getRuleContext<P416Parser::KeyElementListContext>(0);
}

P416Parser::KeyContext::KeyContext(TablePropertyContext *ctx) { copyFrom(ctx); }

void P416Parser::KeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey(this);
}
void P416Parser::KeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey(this);
}

antlrcpp::Any P416Parser::KeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitKey(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::TablePropertyContext* P416Parser::tableProperty() {
  TablePropertyContext *_localctx = _tracker.createInstance<TablePropertyContext>(_ctx, getState());
  enterRule(_localctx, 164, P416Parser::RuleTableProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(903);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TablePropertyContext *>(_tracker.createInstance<P416Parser::KeyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(870);
      match(P416Parser::KEY);
      setState(871);
      match(P416Parser::ASSIGN);
      setState(872);
      match(P416Parser::LCURL);
      setState(874);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(873);
        keyElementList();
      }
      setState(876);
      match(P416Parser::RCURL);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TablePropertyContext *>(_tracker.createInstance<P416Parser::ActionsContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(877);
      match(P416Parser::ACTIONS);
      setState(878);
      match(P416Parser::ASSIGN);
      setState(879);
      match(P416Parser::LCURL);
      setState(880);
      actionList();
      setState(881);
      match(P416Parser::RCURL);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<TablePropertyContext *>(_tracker.createInstance<P416Parser::ConstEntriesContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(883);
      match(P416Parser::CONST);
      setState(884);
      match(P416Parser::ENTRIES);
      setState(885);
      match(P416Parser::ASSIGN);
      setState(886);
      match(P416Parser::LCURL);
      setState(887);
      entriesList();
      setState(888);
      match(P416Parser::RCURL);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<TablePropertyContext *>(_tracker.createInstance<P416Parser::LocalVariableContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(890);
      optAnnotations();
      setState(891);
      match(P416Parser::CONST);
      setState(892);
      match(P416Parser::IDENTIFIER);
      setState(893);
      match(P416Parser::ASSIGN);
      setState(894);
      initializer();
      setState(895);
      match(P416Parser::SEMI);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<TablePropertyContext *>(_tracker.createInstance<P416Parser::LocalConstVariableContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(897);
      optAnnotations();
      setState(898);
      match(P416Parser::IDENTIFIER);
      setState(899);
      match(P416Parser::ASSIGN);
      setState(900);
      initializer();
      setState(901);
      match(P416Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyElementListContext ------------------------------------------------------------------

P416Parser::KeyElementListContext::KeyElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::KeyElementContext *> P416Parser::KeyElementListContext::keyElement() {
  return getRuleContexts<P416Parser::KeyElementContext>();
}

P416Parser::KeyElementContext* P416Parser::KeyElementListContext::keyElement(size_t i) {
  return getRuleContext<P416Parser::KeyElementContext>(i);
}


size_t P416Parser::KeyElementListContext::getRuleIndex() const {
  return P416Parser::RuleKeyElementList;
}

void P416Parser::KeyElementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyElementList(this);
}

void P416Parser::KeyElementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyElementList(this);
}


antlrcpp::Any P416Parser::KeyElementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitKeyElementList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::KeyElementListContext* P416Parser::keyElementList() {
  KeyElementListContext *_localctx = _tracker.createInstance<KeyElementListContext>(_ctx, getState());
  enterRule(_localctx, 166, P416Parser::RuleKeyElementList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(906); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(905);
      keyElement();
      setState(908); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyElementContext ------------------------------------------------------------------

P416Parser::KeyElementContext::KeyElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ExpressionContext* P416Parser::KeyElementContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::KeyElementContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

P416Parser::NameContext* P416Parser::KeyElementContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

P416Parser::OptAnnotationsContext* P416Parser::KeyElementContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::KeyElementContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::KeyElementContext::getRuleIndex() const {
  return P416Parser::RuleKeyElement;
}

void P416Parser::KeyElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyElement(this);
}

void P416Parser::KeyElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyElement(this);
}


antlrcpp::Any P416Parser::KeyElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitKeyElement(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::KeyElementContext* P416Parser::keyElement() {
  KeyElementContext *_localctx = _tracker.createInstance<KeyElementContext>(_ctx, getState());
  enterRule(_localctx, 168, P416Parser::RuleKeyElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(910);
    expression(0);
    setState(911);
    match(P416Parser::COLON);
    setState(912);
    name();
    setState(913);
    optAnnotations();
    setState(914);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionListContext ------------------------------------------------------------------

P416Parser::ActionListContext::ActionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ActionRefContext *> P416Parser::ActionListContext::actionRef() {
  return getRuleContexts<P416Parser::ActionRefContext>();
}

P416Parser::ActionRefContext* P416Parser::ActionListContext::actionRef(size_t i) {
  return getRuleContext<P416Parser::ActionRefContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::ActionListContext::SEMI() {
  return getTokens(P416Parser::SEMI);
}

tree::TerminalNode* P416Parser::ActionListContext::SEMI(size_t i) {
  return getToken(P416Parser::SEMI, i);
}


size_t P416Parser::ActionListContext::getRuleIndex() const {
  return P416Parser::RuleActionList;
}

void P416Parser::ActionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionList(this);
}

void P416Parser::ActionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionList(this);
}


antlrcpp::Any P416Parser::ActionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitActionList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ActionListContext* P416Parser::actionList() {
  ActionListContext *_localctx = _tracker.createInstance<ActionListContext>(_ctx, getState());
  enterRule(_localctx, 170, P416Parser::RuleActionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(916);
    actionRef();
    setState(917);
    match(P416Parser::SEMI);
    setState(923);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::EXTRACT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::IDENTIFIER)
      | (1ULL << P416Parser::AT))) != 0)) {
      setState(918);
      actionRef();
      setState(919);
      match(P416Parser::SEMI);
      setState(925);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntriesListContext ------------------------------------------------------------------

P416Parser::EntriesListContext::EntriesListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::EntryContext *> P416Parser::EntriesListContext::entry() {
  return getRuleContexts<P416Parser::EntryContext>();
}

P416Parser::EntryContext* P416Parser::EntriesListContext::entry(size_t i) {
  return getRuleContext<P416Parser::EntryContext>(i);
}


size_t P416Parser::EntriesListContext::getRuleIndex() const {
  return P416Parser::RuleEntriesList;
}

void P416Parser::EntriesListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntriesList(this);
}

void P416Parser::EntriesListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntriesList(this);
}


antlrcpp::Any P416Parser::EntriesListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitEntriesList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::EntriesListContext* P416Parser::entriesList() {
  EntriesListContext *_localctx = _tracker.createInstance<EntriesListContext>(_ctx, getState());
  enterRule(_localctx, 172, P416Parser::RuleEntriesList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(927); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(926);
      entry();
      setState(929); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
      | (1ULL << P416Parser::Decimal_number)
      | (1ULL << P416Parser::Octal_number)
      | (1ULL << P416Parser::Binary_number)
      | (1ULL << P416Parser::Real_number)
      | (1ULL << P416Parser::ACTIONS)
      | (1ULL << P416Parser::APPLY)
      | (1ULL << P416Parser::BOOL)
      | (1ULL << P416Parser::BIT)
      | (1ULL << P416Parser::DEFAULT)
      | (1ULL << P416Parser::ERROR)
      | (1ULL << P416Parser::FALSE)
      | (1ULL << P416Parser::INT)
      | (1ULL << P416Parser::KEY)
      | (1ULL << P416Parser::STATE)
      | (1ULL << P416Parser::TRUE)
      | (1ULL << P416Parser::TUPLE)
      | (1ULL << P416Parser::VARBIT)
      | (1ULL << P416Parser::DONTCARE)
      | (1ULL << P416Parser::IDENTIFIER)
      | (1ULL << P416Parser::AT))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
      | (1ULL << (P416Parser::LCURL - 65))
      | (1ULL << (P416Parser::DOT - 65))
      | (1ULL << (P416Parser::NOT - 65))
      | (1ULL << (P416Parser::TILDA - 65))
      | (1ULL << (P416Parser::MINUS - 65))
      | (1ULL << (P416Parser::PLUS - 65))
      | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntryContext ------------------------------------------------------------------

P416Parser::EntryContext::EntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::EntryContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

P416Parser::KeySetExpressionContext* P416Parser::EntryContext::keySetExpression() {
  return getRuleContext<P416Parser::KeySetExpressionContext>(0);
}

tree::TerminalNode* P416Parser::EntryContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

P416Parser::ActionRefContext* P416Parser::EntryContext::actionRef() {
  return getRuleContext<P416Parser::ActionRefContext>(0);
}

tree::TerminalNode* P416Parser::EntryContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::EntryContext::getRuleIndex() const {
  return P416Parser::RuleEntry;
}

void P416Parser::EntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntry(this);
}

void P416Parser::EntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntry(this);
}


antlrcpp::Any P416Parser::EntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitEntry(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::EntryContext* P416Parser::entry() {
  EntryContext *_localctx = _tracker.createInstance<EntryContext>(_ctx, getState());
  enterRule(_localctx, 174, P416Parser::RuleEntry);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(931);
    optAnnotations();
    setState(932);
    keySetExpression();
    setState(933);
    match(P416Parser::COLON);
    setState(934);
    actionRef();
    setState(935);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionRefContext ------------------------------------------------------------------

P416Parser::ActionRefContext::ActionRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::ActionRefContext::getRuleIndex() const {
  return P416Parser::RuleActionRef;
}

void P416Parser::ActionRefContext::copyFrom(ActionRefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ActionWithoutArgsContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::ActionWithoutArgsContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

P416Parser::NameContext* P416Parser::ActionWithoutArgsContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

P416Parser::ActionWithoutArgsContext::ActionWithoutArgsContext(ActionRefContext *ctx) { copyFrom(ctx); }

void P416Parser::ActionWithoutArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionWithoutArgs(this);
}
void P416Parser::ActionWithoutArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionWithoutArgs(this);
}

antlrcpp::Any P416Parser::ActionWithoutArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitActionWithoutArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ActionWithArgsContext ------------------------------------------------------------------

P416Parser::OptAnnotationsContext* P416Parser::ActionWithArgsContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

P416Parser::NameContext* P416Parser::ActionWithArgsContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ActionWithArgsContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ActionWithArgsContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ArgumentListContext* P416Parser::ActionWithArgsContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::ActionWithArgsContext::ActionWithArgsContext(ActionRefContext *ctx) { copyFrom(ctx); }

void P416Parser::ActionWithArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionWithArgs(this);
}
void P416Parser::ActionWithArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionWithArgs(this);
}

antlrcpp::Any P416Parser::ActionWithArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitActionWithArgs(this);
  else
    return visitor->visitChildren(this);
}
P416Parser::ActionRefContext* P416Parser::actionRef() {
  ActionRefContext *_localctx = _tracker.createInstance<ActionRefContext>(_ctx, getState());
  enterRule(_localctx, 176, P416Parser::RuleActionRef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(948);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ActionRefContext *>(_tracker.createInstance<P416Parser::ActionWithoutArgsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(937);
      optAnnotations();
      setState(938);
      name();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ActionRefContext *>(_tracker.createInstance<P416Parser::ActionWithArgsContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(940);
      optAnnotations();
      setState(941);
      name();
      setState(942);
      match(P416Parser::LPARAN);
      setState(944);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(943);
        argumentList();
      }
      setState(946);
      match(P416Parser::RPARAN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionDeclarationContext ------------------------------------------------------------------

P416Parser::ActionDeclarationContext::ActionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ActionDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ActionDeclarationContext::ACTION() {
  return getToken(P416Parser::ACTION, 0);
}

P416Parser::NameContext* P416Parser::ActionDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ActionDeclarationContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ActionDeclarationContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::BlockStatementContext* P416Parser::ActionDeclarationContext::blockStatement() {
  return getRuleContext<P416Parser::BlockStatementContext>(0);
}

P416Parser::ParameterListContext* P416Parser::ActionDeclarationContext::parameterList() {
  return getRuleContext<P416Parser::ParameterListContext>(0);
}


size_t P416Parser::ActionDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleActionDeclaration;
}

void P416Parser::ActionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionDeclaration(this);
}

void P416Parser::ActionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionDeclaration(this);
}


antlrcpp::Any P416Parser::ActionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitActionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ActionDeclarationContext* P416Parser::actionDeclaration() {
  ActionDeclarationContext *_localctx = _tracker.createInstance<ActionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 178, P416Parser::RuleActionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(950);
    optAnnotations();
    setState(951);
    match(P416Parser::ACTION);
    setState(952);
    name();
    setState(953);
    match(P416Parser::LPARAN);
    setState(955);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (P416Parser::BOOL - 14))
      | (1ULL << (P416Parser::BIT - 14))
      | (1ULL << (P416Parser::ERROR - 14))
      | (1ULL << (P416Parser::IN - 14))
      | (1ULL << (P416Parser::INOUT - 14))
      | (1ULL << (P416Parser::INT - 14))
      | (1ULL << (P416Parser::OUT - 14))
      | (1ULL << (P416Parser::TUPLE - 14))
      | (1ULL << (P416Parser::VARBIT - 14))
      | (1ULL << (P416Parser::IDENTIFIER - 14))
      | (1ULL << (P416Parser::AT - 14))
      | (1ULL << (P416Parser::DOT - 14)))) != 0)) {
      setState(954);
      parameterList();
    }
    setState(957);
    match(P416Parser::RPARAN);
    setState(958);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

P416Parser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::TypeRefContext* P416Parser::VariableDeclarationContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NameContext* P416Parser::VariableDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::VariableDeclarationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}

P416Parser::AnnotationsContext* P416Parser::VariableDeclarationContext::annotations() {
  return getRuleContext<P416Parser::AnnotationsContext>(0);
}

P416Parser::OptInitializerContext* P416Parser::VariableDeclarationContext::optInitializer() {
  return getRuleContext<P416Parser::OptInitializerContext>(0);
}


size_t P416Parser::VariableDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleVariableDeclaration;
}

void P416Parser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void P416Parser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any P416Parser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::VariableDeclarationContext* P416Parser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 180, P416Parser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::AT) {
      setState(960);
      annotations();
    }
    setState(963);
    typeRef();
    setState(964);
    name();
    setState(966);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == P416Parser::ASSIGN) {
      setState(965);
      optInitializer();
    }
    setState(968);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

P416Parser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::OptAnnotationsContext* P416Parser::ConstantDeclarationContext::optAnnotations() {
  return getRuleContext<P416Parser::OptAnnotationsContext>(0);
}

tree::TerminalNode* P416Parser::ConstantDeclarationContext::CONST() {
  return getToken(P416Parser::CONST, 0);
}

P416Parser::TypeRefContext* P416Parser::ConstantDeclarationContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

P416Parser::NameContext* P416Parser::ConstantDeclarationContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}

tree::TerminalNode* P416Parser::ConstantDeclarationContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

P416Parser::InitializerContext* P416Parser::ConstantDeclarationContext::initializer() {
  return getRuleContext<P416Parser::InitializerContext>(0);
}

tree::TerminalNode* P416Parser::ConstantDeclarationContext::SEMI() {
  return getToken(P416Parser::SEMI, 0);
}


size_t P416Parser::ConstantDeclarationContext::getRuleIndex() const {
  return P416Parser::RuleConstantDeclaration;
}

void P416Parser::ConstantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclaration(this);
}

void P416Parser::ConstantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclaration(this);
}


antlrcpp::Any P416Parser::ConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ConstantDeclarationContext* P416Parser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 182, P416Parser::RuleConstantDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    optAnnotations();
    setState(971);
    match(P416Parser::CONST);
    setState(972);
    typeRef();
    setState(973);
    name();
    setState(974);
    match(P416Parser::ASSIGN);
    setState(975);
    initializer();
    setState(976);
    match(P416Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptInitializerContext ------------------------------------------------------------------

P416Parser::OptInitializerContext::OptInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::OptInitializerContext::ASSIGN() {
  return getToken(P416Parser::ASSIGN, 0);
}

P416Parser::InitializerContext* P416Parser::OptInitializerContext::initializer() {
  return getRuleContext<P416Parser::InitializerContext>(0);
}


size_t P416Parser::OptInitializerContext::getRuleIndex() const {
  return P416Parser::RuleOptInitializer;
}

void P416Parser::OptInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptInitializer(this);
}

void P416Parser::OptInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptInitializer(this);
}


antlrcpp::Any P416Parser::OptInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOptInitializer(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::OptInitializerContext* P416Parser::optInitializer() {
  OptInitializerContext *_localctx = _tracker.createInstance<OptInitializerContext>(_ctx, getState());
  enterRule(_localctx, 184, P416Parser::RuleOptInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(978);
    match(P416Parser::ASSIGN);
    setState(979);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

P416Parser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ExpressionContext* P416Parser::InitializerContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::InitializerContext::getRuleIndex() const {
  return P416Parser::RuleInitializer;
}

void P416Parser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void P416Parser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any P416Parser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::InitializerContext* P416Parser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 186, P416Parser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(981);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

P416Parser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ArgumentContext *> P416Parser::ArgumentListContext::argument() {
  return getRuleContexts<P416Parser::ArgumentContext>();
}

P416Parser::ArgumentContext* P416Parser::ArgumentListContext::argument(size_t i) {
  return getRuleContext<P416Parser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::ArgumentListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::ArgumentListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::ArgumentListContext::getRuleIndex() const {
  return P416Parser::RuleArgumentList;
}

void P416Parser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void P416Parser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any P416Parser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ArgumentListContext* P416Parser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 188, P416Parser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(983);
    argument();
    setState(988);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(984);
      match(P416Parser::COMMA);
      setState(985);
      argument();
      setState(990);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

P416Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::ExpressionContext* P416Parser::ArgumentContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::ArgumentContext::getRuleIndex() const {
  return P416Parser::RuleArgument;
}

void P416Parser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void P416Parser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any P416Parser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ArgumentContext* P416Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 190, P416Parser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(991);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

P416Parser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<P416Parser::ExpressionContext *> P416Parser::ExpressionListContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::ExpressionListContext::COMMA() {
  return getTokens(P416Parser::COMMA);
}

tree::TerminalNode* P416Parser::ExpressionListContext::COMMA(size_t i) {
  return getToken(P416Parser::COMMA, i);
}


size_t P416Parser::ExpressionListContext::getRuleIndex() const {
  return P416Parser::RuleExpressionList;
}

void P416Parser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void P416Parser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any P416Parser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ExpressionListContext* P416Parser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 192, P416Parser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(993);
    expression(0);
    setState(998);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == P416Parser::COMMA) {
      setState(994);
      match(P416Parser::COMMA);
      setState(995);
      expression(0);
      setState(1000);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberContext ------------------------------------------------------------------

P416Parser::MemberContext::MemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::NameContext* P416Parser::MemberContext::name() {
  return getRuleContext<P416Parser::NameContext>(0);
}


size_t P416Parser::MemberContext::getRuleIndex() const {
  return P416Parser::RuleMember;
}

void P416Parser::MemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember(this);
}

void P416Parser::MemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember(this);
}


antlrcpp::Any P416Parser::MemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMember(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::MemberContext* P416Parser::member() {
  MemberContext *_localctx = _tracker.createInstance<MemberContext>(_ctx, getState());
  enterRule(_localctx, 194, P416Parser::RuleMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1001);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixedNonTypeNameContext ------------------------------------------------------------------

P416Parser::PrefixedNonTypeNameContext::PrefixedNonTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::NonTypeNameContext* P416Parser::PrefixedNonTypeNameContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}

P416Parser::DotPrefixContext* P416Parser::PrefixedNonTypeNameContext::dotPrefix() {
  return getRuleContext<P416Parser::DotPrefixContext>(0);
}


size_t P416Parser::PrefixedNonTypeNameContext::getRuleIndex() const {
  return P416Parser::RulePrefixedNonTypeName;
}

void P416Parser::PrefixedNonTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedNonTypeName(this);
}

void P416Parser::PrefixedNonTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedNonTypeName(this);
}


antlrcpp::Any P416Parser::PrefixedNonTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPrefixedNonTypeName(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::PrefixedNonTypeNameContext* P416Parser::prefixedNonTypeName() {
  PrefixedNonTypeNameContext *_localctx = _tracker.createInstance<PrefixedNonTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 196, P416Parser::RulePrefixedNonTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1007);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::ACTIONS:
      case P416Parser::APPLY:
      case P416Parser::KEY:
      case P416Parser::STATE:
      case P416Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1003);
        nonTypeName();
        break;
      }

      case P416Parser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(1004);
        dotPrefix();
        setState(1005);
        nonTypeName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

P416Parser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::LvalueContext::getRuleIndex() const {
  return P416Parser::RuleLvalue;
}

void P416Parser::LvalueContext::copyFrom(LvalueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrefixedNameLvalueContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::PrefixedNameLvalueContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::PrefixedNameLvalueContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

P416Parser::MemberContext* P416Parser::PrefixedNameLvalueContext::member() {
  return getRuleContext<P416Parser::MemberContext>(0);
}

P416Parser::PrefixedNameLvalueContext::PrefixedNameLvalueContext(LvalueContext *ctx) { copyFrom(ctx); }

void P416Parser::PrefixedNameLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedNameLvalue(this);
}
void P416Parser::PrefixedNameLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedNameLvalue(this);
}

antlrcpp::Any P416Parser::PrefixedNameLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPrefixedNameLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayIndexLvalueContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::ArrayIndexLvalueContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::ArrayIndexLvalueContext::LBRKT() {
  return getToken(P416Parser::LBRKT, 0);
}

P416Parser::ExpressionContext* P416Parser::ArrayIndexLvalueContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::ArrayIndexLvalueContext::RBRKT() {
  return getToken(P416Parser::RBRKT, 0);
}

P416Parser::ArrayIndexLvalueContext::ArrayIndexLvalueContext(LvalueContext *ctx) { copyFrom(ctx); }

void P416Parser::ArrayIndexLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayIndexLvalue(this);
}
void P416Parser::ArrayIndexLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayIndexLvalue(this);
}

antlrcpp::Any P416Parser::ArrayIndexLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitArrayIndexLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeIndexLvalueContext ------------------------------------------------------------------

P416Parser::LvalueContext* P416Parser::RangeIndexLvalueContext::lvalue() {
  return getRuleContext<P416Parser::LvalueContext>(0);
}

tree::TerminalNode* P416Parser::RangeIndexLvalueContext::LBRKT() {
  return getToken(P416Parser::LBRKT, 0);
}

std::vector<P416Parser::ExpressionContext *> P416Parser::RangeIndexLvalueContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::RangeIndexLvalueContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::RangeIndexLvalueContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

tree::TerminalNode* P416Parser::RangeIndexLvalueContext::RBRKT() {
  return getToken(P416Parser::RBRKT, 0);
}

P416Parser::RangeIndexLvalueContext::RangeIndexLvalueContext(LvalueContext *ctx) { copyFrom(ctx); }

void P416Parser::RangeIndexLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeIndexLvalue(this);
}
void P416Parser::RangeIndexLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeIndexLvalue(this);
}

antlrcpp::Any P416Parser::RangeIndexLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitRangeIndexLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixedNonTypeNameLvalueContext ------------------------------------------------------------------

P416Parser::PrefixedNonTypeNameContext* P416Parser::PrefixedNonTypeNameLvalueContext::prefixedNonTypeName() {
  return getRuleContext<P416Parser::PrefixedNonTypeNameContext>(0);
}

P416Parser::PrefixedNonTypeNameLvalueContext::PrefixedNonTypeNameLvalueContext(LvalueContext *ctx) { copyFrom(ctx); }

void P416Parser::PrefixedNonTypeNameLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedNonTypeNameLvalue(this);
}
void P416Parser::PrefixedNonTypeNameLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedNonTypeNameLvalue(this);
}

antlrcpp::Any P416Parser::PrefixedNonTypeNameLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPrefixedNonTypeNameLvalue(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::LvalueContext* P416Parser::lvalue() {
   return lvalue(0);
}

P416Parser::LvalueContext* P416Parser::lvalue(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  P416Parser::LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, parentState);
  P416Parser::LvalueContext *previousContext = _localctx;
  size_t startState = 198;
  enterRecursionRule(_localctx, 198, P416Parser::RuleLvalue, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<PrefixedNonTypeNameLvalueContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(1010);
    prefixedNonTypeName();
    _ctx->stop = _input->LT(-1);
    setState(1029);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1027);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PrefixedNameLvalueContext>(_tracker.createInstance<LvalueContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleLvalue);
          setState(1012);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1013);
          match(P416Parser::DOT);
          setState(1014);
          member();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrayIndexLvalueContext>(_tracker.createInstance<LvalueContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleLvalue);
          setState(1015);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1016);
          match(P416Parser::LBRKT);
          setState(1017);
          expression(0);
          setState(1018);
          match(P416Parser::RBRKT);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RangeIndexLvalueContext>(_tracker.createInstance<LvalueContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleLvalue);
          setState(1020);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1021);
          match(P416Parser::LBRKT);
          setState(1022);
          expression(0);
          setState(1023);
          match(P416Parser::COLON);
          setState(1024);
          expression(0);
          setState(1025);
          match(P416Parser::RBRKT);
          break;
        }

        } 
      }
      setState(1031);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

P416Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t P416Parser::ExpressionContext::getRuleIndex() const {
  return P416Parser::RuleExpression;
}

void P416Parser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinusContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::MinusContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::MinusContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::MinusContext::MINUS() {
  return getToken(P416Parser::MINUS, 0);
}

P416Parser::MinusContext::MinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::MinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinus(this);
}
void P416Parser::MinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinus(this);
}

antlrcpp::Any P416Parser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeIndexContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::RangeIndexContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::RangeIndexContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::RangeIndexContext::LBRKT() {
  return getToken(P416Parser::LBRKT, 0);
}

tree::TerminalNode* P416Parser::RangeIndexContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

tree::TerminalNode* P416Parser::RangeIndexContext::RBRKT() {
  return getToken(P416Parser::RBRKT, 0);
}

P416Parser::RangeIndexContext::RangeIndexContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::RangeIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeIndex(this);
}
void P416Parser::RangeIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeIndex(this);
}

antlrcpp::Any P416Parser::RangeIndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitRangeIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::ModContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::ModContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::ModContext::PRCNT() {
  return getToken(P416Parser::PRCNT, 0);
}

P416Parser::ModContext::ModContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void P416Parser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}

antlrcpp::Any P416Parser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::StringContext::STRING_LITERAL() {
  return getToken(P416Parser::STRING_LITERAL, 0);
}

P416Parser::StringContext::StringContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void P416Parser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

antlrcpp::Any P416Parser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::BitOrContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::BitOrContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::BitOrContext::OR() {
  return getToken(P416Parser::OR, 0);
}

P416Parser::BitOrContext::BitOrContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::BitOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOr(this);
}
void P416Parser::BitOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOr(this);
}

antlrcpp::Any P416Parser::BitOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixedNonTypeContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::PrefixedNonTypeContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

P416Parser::NonTypeNameContext* P416Parser::PrefixedNonTypeContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}

P416Parser::PrefixedNonTypeContext::PrefixedNonTypeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::PrefixedNonTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedNonType(this);
}
void P416Parser::PrefixedNonTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedNonType(this);
}

antlrcpp::Any P416Parser::PrefixedNonTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPrefixedNonType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

P416Parser::NumberContext* P416Parser::IntegerContext::number() {
  return getRuleContext<P416Parser::NumberContext>(0);
}

P416Parser::IntegerContext::IntegerContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}
void P416Parser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

antlrcpp::Any P416Parser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::CastContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

P416Parser::TypeRefContext* P416Parser::CastContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

tree::TerminalNode* P416Parser::CastContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ExpressionContext* P416Parser::CastContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

P416Parser::CastContext::CastContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::CastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast(this);
}
void P416Parser::CastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast(this);
}

antlrcpp::Any P416Parser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

P416Parser::UnaryExpression_notContext* P416Parser::NotContext::unaryExpression_not() {
  return getRuleContext<P416Parser::UnaryExpression_notContext>(0);
}

P416Parser::NotContext::NotContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void P416Parser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}

antlrcpp::Any P416Parser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftLeftContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::ShiftLeftContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::ShiftLeftContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::ShiftLeftContext::SHL() {
  return getToken(P416Parser::SHL, 0);
}

P416Parser::ShiftLeftContext::ShiftLeftContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ShiftLeftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftLeft(this);
}
void P416Parser::ShiftLeftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftLeft(this);
}

antlrcpp::Any P416Parser::ShiftLeftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitShiftLeft(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusPlusContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::PlusPlusContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::PlusPlusContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::PlusPlusContext::PP() {
  return getToken(P416Parser::PP, 0);
}

P416Parser::PlusPlusContext::PlusPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::PlusPlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusPlus(this);
}
void P416Parser::PlusPlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusPlus(this);
}

antlrcpp::Any P416Parser::PlusPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPlusPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::AndContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::AndContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::AndContext::LAND() {
  return getToken(P416Parser::LAND, 0);
}

P416Parser::AndContext::AndContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void P416Parser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

antlrcpp::Any P416Parser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OfContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::OfContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

P416Parser::ExpressionContext* P416Parser::OfContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::OfContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::OfContext::OfContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::OfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOf(this);
}
void P416Parser::OfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOf(this);
}

antlrcpp::Any P416Parser::OfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessThanContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::LessThanContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::LessThanContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::LessThanContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::LessThanContext::LessThanContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::LessThanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLessThan(this);
}
void P416Parser::LessThanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLessThan(this);
}

antlrcpp::Any P416Parser::LessThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitLessThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TempletizedFunctionCallContext ------------------------------------------------------------------

P416Parser::ExpressionContext* P416Parser::TempletizedFunctionCallContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::TempletizedFunctionCallContext::LT() {
  return getToken(P416Parser::LT, 0);
}

P416Parser::TypeArgumentListContext* P416Parser::TempletizedFunctionCallContext::typeArgumentList() {
  return getRuleContext<P416Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* P416Parser::TempletizedFunctionCallContext::GT() {
  return getToken(P416Parser::GT, 0);
}

tree::TerminalNode* P416Parser::TempletizedFunctionCallContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::TempletizedFunctionCallContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ArgumentListContext* P416Parser::TempletizedFunctionCallContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::TempletizedFunctionCallContext::TempletizedFunctionCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::TempletizedFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTempletizedFunctionCall(this);
}
void P416Parser::TempletizedFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTempletizedFunctionCall(this);
}

antlrcpp::Any P416Parser::TempletizedFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTempletizedFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GreaterThanContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::GreaterThanContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::GreaterThanContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::GreaterThanContext::GT() {
  return getToken(P416Parser::GT, 0);
}

P416Parser::GreaterThanContext::GreaterThanContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::GreaterThanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGreaterThan(this);
}
void P416Parser::GreaterThanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGreaterThan(this);
}

antlrcpp::Any P416Parser::GreaterThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitGreaterThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberAccessContext ------------------------------------------------------------------

P416Parser::TypeNameContext* P416Parser::MemberAccessContext::typeName() {
  return getRuleContext<P416Parser::TypeNameContext>(0);
}

tree::TerminalNode* P416Parser::MemberAccessContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

P416Parser::MemberContext* P416Parser::MemberAccessContext::member() {
  return getRuleContext<P416Parser::MemberContext>(0);
}

P416Parser::MemberAccessContext::MemberAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}
void P416Parser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}

antlrcpp::Any P416Parser::MemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitMemberAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMemberAccessContext ------------------------------------------------------------------

P416Parser::ExpressionContext* P416Parser::ExprMemberAccessContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::ExprMemberAccessContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

P416Parser::MemberContext* P416Parser::ExprMemberAccessContext::member() {
  return getRuleContext<P416Parser::MemberContext>(0);
}

P416Parser::ExprMemberAccessContext::ExprMemberAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ExprMemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprMemberAccess(this);
}
void P416Parser::ExprMemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprMemberAccess(this);
}

antlrcpp::Any P416Parser::ExprMemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitExprMemberAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SetContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::SetContext::LCURL() {
  return getToken(P416Parser::LCURL, 0);
}

tree::TerminalNode* P416Parser::SetContext::RCURL() {
  return getToken(P416Parser::RCURL, 0);
}

P416Parser::ExpressionListContext* P416Parser::SetContext::expressionList() {
  return getRuleContext<P416Parser::ExpressionListContext>(0);
}

P416Parser::SetContext::SetContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::SetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet(this);
}
void P416Parser::SetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet(this);
}

antlrcpp::Any P416Parser::SetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSet(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShifRightContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::ShifRightContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::ShifRightContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> P416Parser::ShifRightContext::GT() {
  return getTokens(P416Parser::GT);
}

tree::TerminalNode* P416Parser::ShifRightContext::GT(size_t i) {
  return getToken(P416Parser::GT, i);
}

P416Parser::ShifRightContext::ShifRightContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ShifRightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShifRight(this);
}
void P416Parser::ShifRightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShifRight(this);
}

antlrcpp::Any P416Parser::ShifRightContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitShifRight(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::OrContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::OrContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::OrContext::LOR() {
  return getToken(P416Parser::LOR, 0);
}

P416Parser::OrContext::OrContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void P416Parser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

antlrcpp::Any P416Parser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StarContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::StarContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::StarContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::StarContext::STAR() {
  return getToken(P416Parser::STAR, 0);
}

P416Parser::StarContext::StarContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::StarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStar(this);
}
void P416Parser::StarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStar(this);
}

antlrcpp::Any P416Parser::StarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalseContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::FalseContext::FALSE() {
  return getToken(P416Parser::FALSE, 0);
}

P416Parser::FalseContext::FalseContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::FalseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalse(this);
}
void P416Parser::FalseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalse(this);
}

antlrcpp::Any P416Parser::FalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstructorContext ------------------------------------------------------------------

P416Parser::TypeRefContext* P416Parser::ConstructorContext::typeRef() {
  return getRuleContext<P416Parser::TypeRefContext>(0);
}

tree::TerminalNode* P416Parser::ConstructorContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::ConstructorContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ArgumentListContext* P416Parser::ConstructorContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::ConstructorContext::ConstructorContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor(this);
}
void P416Parser::ConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor(this);
}

antlrcpp::Any P416Parser::ConstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitConstructor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotEqualContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::NotEqualContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::NotEqualContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::NotEqualContext::NE() {
  return getToken(P416Parser::NE, 0);
}

P416Parser::NotEqualContext::NotEqualContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::NotEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotEqual(this);
}
void P416Parser::NotEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotEqual(this);
}

antlrcpp::Any P416Parser::NotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNotEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonTypeContext ------------------------------------------------------------------

P416Parser::NonTypeNameContext* P416Parser::NonTypeContext::nonTypeName() {
  return getRuleContext<P416Parser::NonTypeNameContext>(0);
}

P416Parser::NonTypeContext::NonTypeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::NonTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonType(this);
}
void P416Parser::NonTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonType(this);
}

antlrcpp::Any P416Parser::NonTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNonType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::PlusContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::PlusContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::PlusContext::PLUS() {
  return getToken(P416Parser::PLUS, 0);
}

P416Parser::PlusContext::PlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::PlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlus(this);
}
void P416Parser::PlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlus(this);
}

antlrcpp::Any P416Parser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GreaterThanOrEqualContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::GreaterThanOrEqualContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::GreaterThanOrEqualContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::GreaterThanOrEqualContext::GE() {
  return getToken(P416Parser::GE, 0);
}

P416Parser::GreaterThanOrEqualContext::GreaterThanOrEqualContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::GreaterThanOrEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGreaterThanOrEqual(this);
}
void P416Parser::GreaterThanOrEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGreaterThanOrEqual(this);
}

antlrcpp::Any P416Parser::GreaterThanOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitGreaterThanOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::EqualContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::EqualContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::EqualContext::EQ() {
  return getToken(P416Parser::EQ, 0);
}

P416Parser::EqualContext::EqualContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::EqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqual(this);
}
void P416Parser::EqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqual(this);
}

antlrcpp::Any P416Parser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::BitAndContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::BitAndContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::BitAndContext::AND() {
  return getToken(P416Parser::AND, 0);
}

P416Parser::BitAndContext::BitAndContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::BitAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAnd(this);
}
void P416Parser::BitAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAnd(this);
}

antlrcpp::Any P416Parser::BitAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPlusContext ------------------------------------------------------------------

P416Parser::UnaryExpression_plusContext* P416Parser::UnaryPlusContext::unaryExpression_plus() {
  return getRuleContext<P416Parser::UnaryExpression_plusContext>(0);
}

P416Parser::UnaryPlusContext::UnaryPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::UnaryPlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPlus(this);
}
void P416Parser::UnaryPlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPlus(this);
}

antlrcpp::Any P416Parser::UnaryPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SlahContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::SlahContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::SlahContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::SlahContext::SLASH() {
  return getToken(P416Parser::SLASH, 0);
}

P416Parser::SlahContext::SlahContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::SlahContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSlah(this);
}
void P416Parser::SlahContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSlah(this);
}

antlrcpp::Any P416Parser::SlahContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitSlah(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegateContext ------------------------------------------------------------------

P416Parser::UnaryExpression_tildaContext* P416Parser::NegateContext::unaryExpression_tilda() {
  return getRuleContext<P416Parser::UnaryExpression_tildaContext>(0);
}

P416Parser::NegateContext::NegateContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::NegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegate(this);
}
void P416Parser::NegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegate(this);
}

antlrcpp::Any P416Parser::NegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNegate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXorContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::BitXorContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::BitXorContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::BitXorContext::XOR() {
  return getToken(P416Parser::XOR, 0);
}

P416Parser::BitXorContext::BitXorContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::BitXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXor(this);
}
void P416Parser::BitXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXor(this);
}

antlrcpp::Any P416Parser::BitXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBitXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessThanOrEqualContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::LessThanOrEqualContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::LessThanOrEqualContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::LessThanOrEqualContext::LE() {
  return getToken(P416Parser::LE, 0);
}

P416Parser::LessThanOrEqualContext::LessThanOrEqualContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::LessThanOrEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLessThanOrEqual(this);
}
void P416Parser::LessThanOrEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLessThanOrEqual(this);
}

antlrcpp::Any P416Parser::LessThanOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitLessThanOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

P416Parser::ExpressionContext* P416Parser::FunctionCallContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}

tree::TerminalNode* P416Parser::FunctionCallContext::LPARAN() {
  return getToken(P416Parser::LPARAN, 0);
}

tree::TerminalNode* P416Parser::FunctionCallContext::RPARAN() {
  return getToken(P416Parser::RPARAN, 0);
}

P416Parser::ArgumentListContext* P416Parser::FunctionCallContext::argumentList() {
  return getRuleContext<P416Parser::ArgumentListContext>(0);
}

P416Parser::FunctionCallContext::FunctionCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void P416Parser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

antlrcpp::Any P416Parser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TrueContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::TrueContext::TRUE() {
  return getToken(P416Parser::TRUE, 0);
}

P416Parser::TrueContext::TrueContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::TrueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrue(this);
}
void P416Parser::TrueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrue(this);
}

antlrcpp::Any P416Parser::TrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusContext ------------------------------------------------------------------

P416Parser::UnaryExpression_minusContext* P416Parser::UnaryMinusContext::unaryExpression_minus() {
  return getRuleContext<P416Parser::UnaryExpression_minusContext>(0);
}

P416Parser::UnaryMinusContext::UnaryMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::UnaryMinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinus(this);
}
void P416Parser::UnaryMinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinus(this);
}

antlrcpp::Any P416Parser::UnaryMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ErrorMemberAccessContext ------------------------------------------------------------------

tree::TerminalNode* P416Parser::ErrorMemberAccessContext::ERROR() {
  return getToken(P416Parser::ERROR, 0);
}

tree::TerminalNode* P416Parser::ErrorMemberAccessContext::DOT() {
  return getToken(P416Parser::DOT, 0);
}

P416Parser::MemberContext* P416Parser::ErrorMemberAccessContext::member() {
  return getRuleContext<P416Parser::MemberContext>(0);
}

P416Parser::ErrorMemberAccessContext::ErrorMemberAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ErrorMemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErrorMemberAccess(this);
}
void P416Parser::ErrorMemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErrorMemberAccess(this);
}

antlrcpp::Any P416Parser::ErrorMemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitErrorMemberAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayIndexContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::ArrayIndexContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::ArrayIndexContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::ArrayIndexContext::LBRKT() {
  return getToken(P416Parser::LBRKT, 0);
}

tree::TerminalNode* P416Parser::ArrayIndexContext::RBRKT() {
  return getToken(P416Parser::RBRKT, 0);
}

P416Parser::ArrayIndexContext::ArrayIndexContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::ArrayIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayIndex(this);
}
void P416Parser::ArrayIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayIndex(this);
}

antlrcpp::Any P416Parser::ArrayIndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitArrayIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryContext ------------------------------------------------------------------

std::vector<P416Parser::ExpressionContext *> P416Parser::TernaryContext::expression() {
  return getRuleContexts<P416Parser::ExpressionContext>();
}

P416Parser::ExpressionContext* P416Parser::TernaryContext::expression(size_t i) {
  return getRuleContext<P416Parser::ExpressionContext>(i);
}

tree::TerminalNode* P416Parser::TernaryContext::QUESTION() {
  return getToken(P416Parser::QUESTION, 0);
}

tree::TerminalNode* P416Parser::TernaryContext::COLON() {
  return getToken(P416Parser::COLON, 0);
}

P416Parser::TernaryContext::TernaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void P416Parser::TernaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernary(this);
}
void P416Parser::TernaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernary(this);
}

antlrcpp::Any P416Parser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::ExpressionContext* P416Parser::expression() {
   return expression(0);
}

P416Parser::ExpressionContext* P416Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  P416Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  P416Parser::ExpressionContext *previousContext = _localctx;
  size_t startState = 200;
  enterRecursionRule(_localctx, 200, P416Parser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1072);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IntegerContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(1033);
      number();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<TrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1034);
      match(P416Parser::TRUE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1035);
      match(P416Parser::FALSE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1036);
      match(P416Parser::STRING_LITERAL);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NonTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1037);
      nonTypeName();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PrefixedNonTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1038);
      match(P416Parser::DOT);
      setState(1039);
      nonTypeName();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ConstructorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1040);
      typeRef();
      setState(1041);
      match(P416Parser::LPARAN);
      setState(1043);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(1042);
        argumentList();
      }
      setState(1045);
      match(P416Parser::RPARAN);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CastContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1047);
      match(P416Parser::LPARAN);
      setState(1048);
      typeRef();
      setState(1049);
      match(P416Parser::RPARAN);
      setState(1050);
      expression(32);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<SetContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1052);
      match(P416Parser::LCURL);
      setState(1054);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
        | (1ULL << P416Parser::Decimal_number)
        | (1ULL << P416Parser::Octal_number)
        | (1ULL << P416Parser::Binary_number)
        | (1ULL << P416Parser::Real_number)
        | (1ULL << P416Parser::ACTIONS)
        | (1ULL << P416Parser::APPLY)
        | (1ULL << P416Parser::BOOL)
        | (1ULL << P416Parser::BIT)
        | (1ULL << P416Parser::ERROR)
        | (1ULL << P416Parser::FALSE)
        | (1ULL << P416Parser::INT)
        | (1ULL << P416Parser::KEY)
        | (1ULL << P416Parser::STATE)
        | (1ULL << P416Parser::TRUE)
        | (1ULL << P416Parser::TUPLE)
        | (1ULL << P416Parser::VARBIT)
        | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
        | (1ULL << (P416Parser::LCURL - 65))
        | (1ULL << (P416Parser::DOT - 65))
        | (1ULL << (P416Parser::NOT - 65))
        | (1ULL << (P416Parser::TILDA - 65))
        | (1ULL << (P416Parser::MINUS - 65))
        | (1ULL << (P416Parser::PLUS - 65))
        | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
        setState(1053);
        expressionList();
      }
      setState(1056);
      match(P416Parser::RCURL);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<OfContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1057);
      match(P416Parser::LPARAN);
      setState(1058);
      expression(0);
      setState(1059);
      match(P416Parser::RPARAN);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1061);
      unaryExpression_not();
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<NegateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1062);
      unaryExpression_tilda();
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<UnaryMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1063);
      unaryExpression_minus();
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<UnaryPlusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1064);
      unaryExpression_plus();
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<MemberAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1065);
      typeName();
      setState(1066);
      match(P416Parser::DOT);
      setState(1067);
      member();
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<ErrorMemberAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1069);
      match(P416Parser::ERROR);
      setState(1070);
      match(P416Parser::DOT);
      setState(1071);
      member();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1171);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1169);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<StarContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1074);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(1075);
          match(P416Parser::STAR);
          setState(1076);
          expression(21);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SlahContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1077);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(1078);
          match(P416Parser::SLASH);
          setState(1079);
          expression(20);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1080);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(1081);
          match(P416Parser::PRCNT);
          setState(1082);
          expression(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1083);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(1084);
          match(P416Parser::PLUS);
          setState(1085);
          expression(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1086);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(1087);
          match(P416Parser::MINUS);
          setState(1088);
          expression(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ShiftLeftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1089);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(1090);
          match(P416Parser::SHL);
          setState(1091);
          expression(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ShifRightContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1092);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1093);
          match(P416Parser::GT);
          setState(1094);
          match(P416Parser::GT);
          setState(1095);
          expression(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1096);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1097);
          match(P416Parser::AND);
          setState(1098);
          expression(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1099);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1100);
          match(P416Parser::XOR);
          setState(1101);
          expression(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1102);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1103);
          match(P416Parser::OR);
          setState(1104);
          expression(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<PlusPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1105);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1106);
          match(P416Parser::PP);
          setState(1107);
          expression(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LessThanOrEqualContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1108);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1109);
          match(P416Parser::LE);
          setState(1110);
          expression(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<GreaterThanOrEqualContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1111);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1112);
          match(P416Parser::GE);
          setState(1113);
          expression(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<LessThanContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1114);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1115);
          match(P416Parser::LT);
          setState(1116);
          expression(8);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<GreaterThanContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1117);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1118);
          match(P416Parser::GT);
          setState(1119);
          expression(7);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<NotEqualContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1120);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1121);
          match(P416Parser::NE);
          setState(1122);
          expression(6);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<EqualContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1123);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1124);
          match(P416Parser::EQ);
          setState(1125);
          expression(5);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1126);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1127);
          match(P416Parser::LAND);
          setState(1128);
          expression(4);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1129);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1130);
          match(P416Parser::LOR);
          setState(1131);
          expression(3);
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<TernaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1132);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1133);
          match(P416Parser::QUESTION);
          setState(1134);
          expression(0);
          setState(1135);
          match(P416Parser::COLON);
          setState(1136);
          expression(2);
          break;
        }

        case 21: {
          auto newContext = _tracker.createInstance<FunctionCallContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1138);

          if (!(precpred(_ctx, 35))) throw FailedPredicateException(this, "precpred(_ctx, 35)");
          setState(1139);
          match(P416Parser::LPARAN);
          setState(1141);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
            | (1ULL << P416Parser::Decimal_number)
            | (1ULL << P416Parser::Octal_number)
            | (1ULL << P416Parser::Binary_number)
            | (1ULL << P416Parser::Real_number)
            | (1ULL << P416Parser::ACTIONS)
            | (1ULL << P416Parser::APPLY)
            | (1ULL << P416Parser::BOOL)
            | (1ULL << P416Parser::BIT)
            | (1ULL << P416Parser::ERROR)
            | (1ULL << P416Parser::FALSE)
            | (1ULL << P416Parser::INT)
            | (1ULL << P416Parser::KEY)
            | (1ULL << P416Parser::STATE)
            | (1ULL << P416Parser::TRUE)
            | (1ULL << P416Parser::TUPLE)
            | (1ULL << P416Parser::VARBIT)
            | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
            | (1ULL << (P416Parser::LCURL - 65))
            | (1ULL << (P416Parser::DOT - 65))
            | (1ULL << (P416Parser::NOT - 65))
            | (1ULL << (P416Parser::TILDA - 65))
            | (1ULL << (P416Parser::MINUS - 65))
            | (1ULL << (P416Parser::PLUS - 65))
            | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
            setState(1140);
            argumentList();
          }
          setState(1143);
          match(P416Parser::RPARAN);
          break;
        }

        case 22: {
          auto newContext = _tracker.createInstance<TempletizedFunctionCallContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1144);

          if (!(precpred(_ctx, 34))) throw FailedPredicateException(this, "precpred(_ctx, 34)");
          setState(1145);
          match(P416Parser::LT);
          setState(1146);
          typeArgumentList();
          setState(1147);
          match(P416Parser::GT);
          setState(1148);
          match(P416Parser::LPARAN);
          setState(1150);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << P416Parser::Hex_number)
            | (1ULL << P416Parser::Decimal_number)
            | (1ULL << P416Parser::Octal_number)
            | (1ULL << P416Parser::Binary_number)
            | (1ULL << P416Parser::Real_number)
            | (1ULL << P416Parser::ACTIONS)
            | (1ULL << P416Parser::APPLY)
            | (1ULL << P416Parser::BOOL)
            | (1ULL << P416Parser::BIT)
            | (1ULL << P416Parser::ERROR)
            | (1ULL << P416Parser::FALSE)
            | (1ULL << P416Parser::INT)
            | (1ULL << P416Parser::KEY)
            | (1ULL << P416Parser::STATE)
            | (1ULL << P416Parser::TRUE)
            | (1ULL << P416Parser::TUPLE)
            | (1ULL << P416Parser::VARBIT)
            | (1ULL << P416Parser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (P416Parser::LPARAN - 65))
            | (1ULL << (P416Parser::LCURL - 65))
            | (1ULL << (P416Parser::DOT - 65))
            | (1ULL << (P416Parser::NOT - 65))
            | (1ULL << (P416Parser::TILDA - 65))
            | (1ULL << (P416Parser::MINUS - 65))
            | (1ULL << (P416Parser::PLUS - 65))
            | (1ULL << (P416Parser::STRING_LITERAL - 65)))) != 0)) {
            setState(1149);
            argumentList();
          }
          setState(1152);
          match(P416Parser::RPARAN);
          break;
        }

        case 23: {
          auto newContext = _tracker.createInstance<ArrayIndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1154);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(1155);
          match(P416Parser::LBRKT);
          setState(1156);
          expression(0);
          setState(1157);
          match(P416Parser::RBRKT);
          break;
        }

        case 24: {
          auto newContext = _tracker.createInstance<RangeIndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1159);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(1160);
          match(P416Parser::LBRKT);
          setState(1161);
          expression(0);
          setState(1162);
          match(P416Parser::COLON);
          setState(1163);
          expression(0);
          setState(1164);
          match(P416Parser::RBRKT);
          break;
        }

        case 25: {
          auto newContext = _tracker.createInstance<ExprMemberAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1166);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(1167);
          match(P416Parser::DOT);
          setState(1168);
          member();
          break;
        }

        } 
      }
      setState(1173);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpression_notContext ------------------------------------------------------------------

P416Parser::UnaryExpression_notContext::UnaryExpression_notContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::UnaryExpression_notContext::NOT() {
  return getToken(P416Parser::NOT, 0);
}

P416Parser::ExpressionContext* P416Parser::UnaryExpression_notContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::UnaryExpression_notContext::getRuleIndex() const {
  return P416Parser::RuleUnaryExpression_not;
}

void P416Parser::UnaryExpression_notContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_not(this);
}

void P416Parser::UnaryExpression_notContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_not(this);
}


antlrcpp::Any P416Parser::UnaryExpression_notContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryExpression_not(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::UnaryExpression_notContext* P416Parser::unaryExpression_not() {
  UnaryExpression_notContext *_localctx = _tracker.createInstance<UnaryExpression_notContext>(_ctx, getState());
  enterRule(_localctx, 202, P416Parser::RuleUnaryExpression_not);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1174);
    match(P416Parser::NOT);
    setState(1175);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpression_tildaContext ------------------------------------------------------------------

P416Parser::UnaryExpression_tildaContext::UnaryExpression_tildaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::UnaryExpression_tildaContext::TILDA() {
  return getToken(P416Parser::TILDA, 0);
}

P416Parser::ExpressionContext* P416Parser::UnaryExpression_tildaContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::UnaryExpression_tildaContext::getRuleIndex() const {
  return P416Parser::RuleUnaryExpression_tilda;
}

void P416Parser::UnaryExpression_tildaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_tilda(this);
}

void P416Parser::UnaryExpression_tildaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_tilda(this);
}


antlrcpp::Any P416Parser::UnaryExpression_tildaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryExpression_tilda(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::UnaryExpression_tildaContext* P416Parser::unaryExpression_tilda() {
  UnaryExpression_tildaContext *_localctx = _tracker.createInstance<UnaryExpression_tildaContext>(_ctx, getState());
  enterRule(_localctx, 204, P416Parser::RuleUnaryExpression_tilda);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1177);
    match(P416Parser::TILDA);
    setState(1178);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpression_plusContext ------------------------------------------------------------------

P416Parser::UnaryExpression_plusContext::UnaryExpression_plusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::UnaryExpression_plusContext::PLUS() {
  return getToken(P416Parser::PLUS, 0);
}

P416Parser::ExpressionContext* P416Parser::UnaryExpression_plusContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::UnaryExpression_plusContext::getRuleIndex() const {
  return P416Parser::RuleUnaryExpression_plus;
}

void P416Parser::UnaryExpression_plusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_plus(this);
}

void P416Parser::UnaryExpression_plusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_plus(this);
}


antlrcpp::Any P416Parser::UnaryExpression_plusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryExpression_plus(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::UnaryExpression_plusContext* P416Parser::unaryExpression_plus() {
  UnaryExpression_plusContext *_localctx = _tracker.createInstance<UnaryExpression_plusContext>(_ctx, getState());
  enterRule(_localctx, 206, P416Parser::RuleUnaryExpression_plus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1180);
    match(P416Parser::PLUS);
    setState(1181);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpression_minusContext ------------------------------------------------------------------

P416Parser::UnaryExpression_minusContext::UnaryExpression_minusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::UnaryExpression_minusContext::MINUS() {
  return getToken(P416Parser::MINUS, 0);
}

P416Parser::ExpressionContext* P416Parser::UnaryExpression_minusContext::expression() {
  return getRuleContext<P416Parser::ExpressionContext>(0);
}


size_t P416Parser::UnaryExpression_minusContext::getRuleIndex() const {
  return P416Parser::RuleUnaryExpression_minus;
}

void P416Parser::UnaryExpression_minusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_minus(this);
}

void P416Parser::UnaryExpression_minusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_minus(this);
}


antlrcpp::Any P416Parser::UnaryExpression_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitUnaryExpression_minus(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::UnaryExpression_minusContext* P416Parser::unaryExpression_minus() {
  UnaryExpression_minusContext *_localctx = _tracker.createInstance<UnaryExpression_minusContext>(_ctx, getState());
  enterRule(_localctx, 208, P416Parser::RuleUnaryExpression_minus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1183);
    match(P416Parser::MINUS);
    setState(1184);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

P416Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

P416Parser::DecimalNumberContext* P416Parser::NumberContext::decimalNumber() {
  return getRuleContext<P416Parser::DecimalNumberContext>(0);
}

P416Parser::OctalNumberContext* P416Parser::NumberContext::octalNumber() {
  return getRuleContext<P416Parser::OctalNumberContext>(0);
}

P416Parser::BinaryNumberContext* P416Parser::NumberContext::binaryNumber() {
  return getRuleContext<P416Parser::BinaryNumberContext>(0);
}

P416Parser::HexNumberContext* P416Parser::NumberContext::hexNumber() {
  return getRuleContext<P416Parser::HexNumberContext>(0);
}

P416Parser::RealNumberContext* P416Parser::NumberContext::realNumber() {
  return getRuleContext<P416Parser::RealNumberContext>(0);
}


size_t P416Parser::NumberContext::getRuleIndex() const {
  return P416Parser::RuleNumber;
}

void P416Parser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void P416Parser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any P416Parser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::NumberContext* P416Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 210, P416Parser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case P416Parser::Decimal_number: {
        enterOuterAlt(_localctx, 1);
        setState(1186);
        decimalNumber();
        break;
      }

      case P416Parser::Octal_number: {
        enterOuterAlt(_localctx, 2);
        setState(1187);
        octalNumber();
        break;
      }

      case P416Parser::Binary_number: {
        enterOuterAlt(_localctx, 3);
        setState(1188);
        binaryNumber();
        break;
      }

      case P416Parser::Hex_number: {
        enterOuterAlt(_localctx, 4);
        setState(1189);
        hexNumber();
        break;
      }

      case P416Parser::Real_number: {
        enterOuterAlt(_localctx, 5);
        setState(1190);
        realNumber();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalNumberContext ------------------------------------------------------------------

P416Parser::DecimalNumberContext::DecimalNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::DecimalNumberContext::Decimal_number() {
  return getToken(P416Parser::Decimal_number, 0);
}


size_t P416Parser::DecimalNumberContext::getRuleIndex() const {
  return P416Parser::RuleDecimalNumber;
}

void P416Parser::DecimalNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalNumber(this);
}

void P416Parser::DecimalNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalNumber(this);
}


antlrcpp::Any P416Parser::DecimalNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitDecimalNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::DecimalNumberContext* P416Parser::decimalNumber() {
  DecimalNumberContext *_localctx = _tracker.createInstance<DecimalNumberContext>(_ctx, getState());
  enterRule(_localctx, 212, P416Parser::RuleDecimalNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1193);
    match(P416Parser::Decimal_number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OctalNumberContext ------------------------------------------------------------------

P416Parser::OctalNumberContext::OctalNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::OctalNumberContext::Octal_number() {
  return getToken(P416Parser::Octal_number, 0);
}


size_t P416Parser::OctalNumberContext::getRuleIndex() const {
  return P416Parser::RuleOctalNumber;
}

void P416Parser::OctalNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOctalNumber(this);
}

void P416Parser::OctalNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOctalNumber(this);
}


antlrcpp::Any P416Parser::OctalNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitOctalNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::OctalNumberContext* P416Parser::octalNumber() {
  OctalNumberContext *_localctx = _tracker.createInstance<OctalNumberContext>(_ctx, getState());
  enterRule(_localctx, 214, P416Parser::RuleOctalNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1195);
    match(P416Parser::Octal_number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryNumberContext ------------------------------------------------------------------

P416Parser::BinaryNumberContext::BinaryNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::BinaryNumberContext::Binary_number() {
  return getToken(P416Parser::Binary_number, 0);
}


size_t P416Parser::BinaryNumberContext::getRuleIndex() const {
  return P416Parser::RuleBinaryNumber;
}

void P416Parser::BinaryNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryNumber(this);
}

void P416Parser::BinaryNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryNumber(this);
}


antlrcpp::Any P416Parser::BinaryNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitBinaryNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::BinaryNumberContext* P416Parser::binaryNumber() {
  BinaryNumberContext *_localctx = _tracker.createInstance<BinaryNumberContext>(_ctx, getState());
  enterRule(_localctx, 216, P416Parser::RuleBinaryNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1197);
    match(P416Parser::Binary_number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexNumberContext ------------------------------------------------------------------

P416Parser::HexNumberContext::HexNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::HexNumberContext::Hex_number() {
  return getToken(P416Parser::Hex_number, 0);
}


size_t P416Parser::HexNumberContext::getRuleIndex() const {
  return P416Parser::RuleHexNumber;
}

void P416Parser::HexNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexNumber(this);
}

void P416Parser::HexNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexNumber(this);
}


antlrcpp::Any P416Parser::HexNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitHexNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::HexNumberContext* P416Parser::hexNumber() {
  HexNumberContext *_localctx = _tracker.createInstance<HexNumberContext>(_ctx, getState());
  enterRule(_localctx, 218, P416Parser::RuleHexNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(P416Parser::Hex_number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealNumberContext ------------------------------------------------------------------

P416Parser::RealNumberContext::RealNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* P416Parser::RealNumberContext::Real_number() {
  return getToken(P416Parser::Real_number, 0);
}


size_t P416Parser::RealNumberContext::getRuleIndex() const {
  return P416Parser::RuleRealNumber;
}

void P416Parser::RealNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealNumber(this);
}

void P416Parser::RealNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<P416Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealNumber(this);
}


antlrcpp::Any P416Parser::RealNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<P416Visitor*>(visitor))
    return parserVisitor->visitRealNumber(this);
  else
    return visitor->visitChildren(this);
}

P416Parser::RealNumberContext* P416Parser::realNumber() {
  RealNumberContext *_localctx = _tracker.createInstance<RealNumberContext>(_ctx, getState());
  enterRule(_localctx, 220, P416Parser::RuleRealNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1201);
    match(P416Parser::Real_number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool P416Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 99: return lvalueSempred(dynamic_cast<LvalueContext *>(context), predicateIndex);
    case 100: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool P416Parser::lvalueSempred(LvalueContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool P416Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 20);
    case 4: return precpred(_ctx, 19);
    case 5: return precpred(_ctx, 18);
    case 6: return precpred(_ctx, 17);
    case 7: return precpred(_ctx, 16);
    case 8: return precpred(_ctx, 15);
    case 9: return precpred(_ctx, 14);
    case 10: return precpred(_ctx, 13);
    case 11: return precpred(_ctx, 12);
    case 12: return precpred(_ctx, 11);
    case 13: return precpred(_ctx, 10);
    case 14: return precpred(_ctx, 9);
    case 15: return precpred(_ctx, 8);
    case 16: return precpred(_ctx, 7);
    case 17: return precpred(_ctx, 6);
    case 18: return precpred(_ctx, 5);
    case 19: return precpred(_ctx, 4);
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);
    case 23: return precpred(_ctx, 35);
    case 24: return precpred(_ctx, 34);
    case 25: return precpred(_ctx, 31);
    case 26: return precpred(_ctx, 30);
    case 27: return precpred(_ctx, 21);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> P416Parser::_decisionToDFA;
atn::PredictionContextCache P416Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN P416Parser::_atn;
std::vector<uint16_t> P416Parser::_serializedATN;

std::vector<std::string> P416Parser::_ruleNames = {
  "p4program", "declaration", "nonTypeName", "name", "optAnnotations", "annotations", 
  "annotation", "parameterList", "parameter", "direction", "packageTypeDeclaration", 
  "instantiation", "optConstructorParameters", "dotPrefix", "parserDeclaration", 
  "parserLocalElements", "parserLocalElement", "parserTypeDeclaration", 
  "parserStates", "parserState", "parserStatements", "parserStatement", 
  "parserBlockStatement", "transitionStatement", "stateExpression", "selectExpression", 
  "selectCaseList", "selectCase", "keySetExpression", "tupleKeySetExpression", 
  "simpleKeySetExpression", "controlDeclaration", "controlTypeDeclaration", 
  "controlLocalDeclarations", "controlLocalDeclaration", "controlBody", 
  "externDeclaration", "methodPrototypes", "functionPrototype", "methodPrototype", 
  "typeRef", "prefixedType", "typeName", "tupleType", "headerStackType", 
  "specializedType", "baseType", "typeOrVoid", "optTypeParameters", "typeParameterList", 
  "typeArg", "dontcare", "typeArgumentList", "typeDeclaration", "derivedTypeDeclaration", 
  "headerTypeDeclaration", "headerUnionDeclaration", "structTypeDeclaration", 
  "structFieldList", "structField", "enumDeclaration", "errorDeclaration", 
  "matchKindDeclaration", "identifierList", "typedefDeclaration", "assignmentStatement", 
  "methodCallStatement", "emptyStatement", "returnStatement", "exitStatement", 
  "conditionalStatement", "directApplication", "statement", "blockStatement", 
  "statOrDeclList", "switchStatement", "switchCases", "switchCase", "switchLabel", 
  "statementOrDeclaration", "tableDeclaration", "tablePropertyList", "tableProperty", 
  "keyElementList", "keyElement", "actionList", "entriesList", "entry", 
  "actionRef", "actionDeclaration", "variableDeclaration", "constantDeclaration", 
  "optInitializer", "initializer", "argumentList", "argument", "expressionList", 
  "member", "prefixedNonTypeName", "lvalue", "expression", "unaryExpression_not", 
  "unaryExpression_tilda", "unaryExpression_plus", "unaryExpression_minus", 
  "number", "decimalNumber", "octalNumber", "binaryNumber", "hexNumber", 
  "realNumber"
};

std::vector<std::string> P416Parser::_literalNames = {
  "", "", "", "", "", "", "", "", "'abstract'", "'action'", "'actions'", 
  "'entries'", "'apply'", "'extract'", "'bool'", "'bit'", "'const'", "'control'", 
  "'default'", "'else'", "'enum'", "'error'", "'exit'", "'extern'", "'false'", 
  "'header'", "'header_union'", "'if'", "'in'", "'inout'", "'int'", "'key'", 
  "'match_kind'", "'out'", "'parser'", "'package'", "'return'", "'select'", 
  "'state'", "'struct'", "'switch'", "'table'", "'this'", "'transition'", 
  "'true'", "'tuple'", "'typedef'", "'varbit'", "'void'", "'_'", "", "'&&&'", 
  "'..'", "'<<'", "'&&'", "'||'", "'=='", "'!='", "'>='", "'<='", "'++'", 
  "';'", "':'", "'@'", "','", "'('", "')'", "'{'", "'}'", "'['", "']'", 
  "'='", "'.'", "'<'", "'>'", "'!'", "'~'", "'-'", "'+'", "'*'", "'/'", 
  "'%'", "'&'", "'|'", "'^'", "'?'"
};

std::vector<std::string> P416Parser::_symbolicNames = {
  "", "Hex_number", "Decimal_number", "Octal_number", "Binary_number", "Real_number", 
  "COMMENT", "WS", "ABSTRACT", "ACTION", "ACTIONS", "ENTRIES", "APPLY", 
  "EXTRACT", "BOOL", "BIT", "CONST", "CONTROL", "DEFAULT", "ELSE", "ENUM", 
  "ERROR", "EXIT", "EXTERN", "FALSE", "HEADER", "HEADER_UNION", "IF", "IN", 
  "INOUT", "INT", "KEY", "MATCH_KIND", "OUT", "PARSER", "PACKAGE", "RETURN", 
  "SELECT", "STATE", "STRUCT", "SWITCH", "TABLE", "THIS", "TRANSITION", 
  "TRUE", "TUPLE", "TYPEDEF", "VARBIT", "VOID", "DONTCARE", "IDENTIFIER", 
  "MASK", "RANGE", "SHL", "LAND", "LOR", "EQ", "NE", "GE", "LE", "PP", "SEMI", 
  "COLON", "AT", "COMMA", "LPARAN", "RPARAN", "LCURL", "RCURL", "LBRKT", 
  "RBRKT", "ASSIGN", "DOT", "LT", "GT", "NOT", "TILDA", "MINUS", "PLUS", 
  "STAR", "SLASH", "PRCNT", "AND", "OR", "XOR", "QUESTION", "STRING_LITERAL"
};

dfa::Vocabulary P416Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> P416Parser::_tokenNames;

P416Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x58, 0x4b6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xe4, 0xa, 0x2, 0x7, 
    0x2, 0xe6, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xe9, 0xb, 0x2, 0x5, 0x2, 0xeb, 
    0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xf6, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xff, 
    0xa, 0x5, 0x3, 0x6, 0x5, 0x6, 0x102, 0xa, 0x6, 0x3, 0x7, 0x6, 0x7, 0x105, 
    0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x106, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10f, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x113, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x118, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x11b, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x11f, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x127, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x12d, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x131, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 0x136, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x13b, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x143, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x14b, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x14f, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x6, 0x11, 0x155, 0xa, 0x11, 
    0xd, 0x11, 0xe, 0x11, 0x156, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x15c, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x162, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x166, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x6, 0x14, 0x16b, 0xa, 0x14, 0xd, 0x14, 
    0xe, 0x14, 0x16c, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x174, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x177, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x6, 0x16, 0x17c, 0xa, 0x16, 0xd, 0x16, 
    0xe, 0x16, 0x17d, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x186, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x194, 0xa, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x199, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x19e, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x6, 0x1c, 0x1a3, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x1a4, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x1ae, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x1b4, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x1b7, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x1c6, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1ca, 
    0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1ce, 0xa, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x1d8, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x1dc, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x6, 0x23, 0x1e1, 
    0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x1e2, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1ea, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1f2, 0xa, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1f6, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1ff, 
    0xa, 0x26, 0x3, 0x27, 0x6, 0x27, 0x202, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 
    0x203, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x209, 0xa, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x20d, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 
    0x29, 0x217, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x21b, 0xa, 
    0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x222, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x229, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x24e, 
    0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x253, 0xa, 0x31, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x7, 0x33, 0x25c, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x25f, 0xb, 
    0x33, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x263, 0xa, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x26a, 0xa, 0x36, 
    0xc, 0x36, 0xe, 0x36, 0x26d, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x5, 0x37, 0x27a, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x280, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x287, 0xa, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 
    0x3a, 0x290, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x299, 0xa, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x6, 0x3c, 0x29e, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 
    0x29f, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 
    0x41, 0x2bb, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x2be, 0xb, 0x41, 0x3, 
    0x42, 0x5, 0x42, 0x2c1, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2c9, 0xa, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2d0, 0xa, 0x42, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2dc, 0xa, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2e8, 0xa, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2ec, 0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2f4, 0xa, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2ff, 0xa, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x304, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x5, 0x48, 0x31c, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x323, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x331, 0xa, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x336, 0xa, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4c, 0x6, 0x4c, 0x33b, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 
    0x33c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x5, 0x4d, 0x345, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x6, 0x4e, 
    0x34a, 0xa, 0x4e, 0xd, 0x4e, 0xe, 0x4e, 0x34b, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x5, 0x4f, 0x351, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 
    0x355, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 
    0x35b, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x6, 0x53, 0x365, 0xa, 0x53, 0xd, 0x53, 
    0xe, 0x53, 0x366, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 
    0x36d, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x38a, 0xa, 0x54, 0x3, 0x55, 
    0x6, 0x55, 0x38d, 0xa, 0x55, 0xd, 0x55, 0xe, 0x55, 0x38e, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x7, 0x57, 0x39c, 0xa, 0x57, 
    0xc, 0x57, 0xe, 0x57, 0x39f, 0xb, 0x57, 0x3, 0x58, 0x6, 0x58, 0x3a2, 
    0xa, 0x58, 0xd, 0x58, 0xe, 0x58, 0x3a3, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
    0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x3b3, 0xa, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x3b7, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x3be, 0xa, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x5, 0x5c, 0x3c4, 0xa, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x3c9, 0xa, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x7, 0x60, 0x3dd, 0xa, 0x60, 0xc, 0x60, 
    0xe, 0x60, 0x3e0, 0xb, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x7, 0x62, 0x3e7, 0xa, 0x62, 0xc, 0x62, 0xe, 0x62, 0x3ea, 
    0xb, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 
    0x64, 0x5, 0x64, 0x3f2, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x7, 0x65, 0x406, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 
    0x409, 0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 
    0x66, 0x416, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x421, 
    0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x433, 0xa, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x478, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x481, 
    0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x7, 0x66, 0x494, 
    0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x497, 0xb, 0x66, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 
    0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x4aa, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
    0x70, 0x3, 0x70, 0x3, 0x70, 0x2, 0x4, 0xc8, 0xca, 0x71, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
    0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
    0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
    0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 
    0x2, 0x3, 0x7, 0x2, 0xc, 0xc, 0xe, 0xe, 0x21, 0x21, 0x28, 0x28, 0x34, 
    0x34, 0x2, 0x50b, 0x2, 0xea, 0x3, 0x2, 0x2, 0x2, 0x4, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x8, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x101, 0x3, 0x2, 0x2, 0x2, 0xc, 0x104, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x10, 0x114, 0x3, 0x2, 0x2, 0x2, 0x12, 0x11c, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x126, 0x3, 0x2, 0x2, 0x2, 0x16, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x135, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x146, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x154, 0x3, 0x2, 0x2, 0x2, 0x22, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x187, 0x3, 0x2, 0x2, 0x2, 0x30, 0x18c, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x193, 0x3, 0x2, 0x2, 0x2, 0x34, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1e9, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1fe, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x201, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x221, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x228, 0x3, 0x2, 0x2, 0x2, 0x56, 0x22a, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x231, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x252, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x254, 0x3, 0x2, 0x2, 0x2, 0x64, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x262, 0x3, 0x2, 0x2, 0x2, 0x68, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x266, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x279, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x74, 0x293, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x29d, 0x3, 0x2, 0x2, 0x2, 0x78, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2a6, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2b2, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2cf, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x86, 0x303, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x305, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x307, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x31d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x330, 0x3, 0x2, 0x2, 0x2, 0x94, 0x332, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x33e, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x349, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x34d, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x354, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x35a, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x35c, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x364, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0x389, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x38c, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0x390, 0x3, 0x2, 0x2, 0x2, 0xac, 0x396, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3a1, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3b6, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x3c3, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0xba, 0x3d4, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x3d9, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0x3eb, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x3f3, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0x432, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x498, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0x49b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x49e, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x4a9, 0x3, 0x2, 0x2, 
    0x2, 0xd6, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x4ad, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0x4af, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0x4b3, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 
    0x5, 0x4, 0x3, 0x2, 0xe2, 0xe4, 0x7, 0x3f, 0x2, 0x2, 0xe3, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0xf6, 0x5, 0xb8, 0x5d, 0x2, 0xed, 0xf6, 0x5, 
    0x4a, 0x26, 0x2, 0xee, 0xf6, 0x5, 0xb4, 0x5b, 0x2, 0xef, 0xf6, 0x5, 
    0x1e, 0x10, 0x2, 0xf0, 0xf6, 0x5, 0x6c, 0x37, 0x2, 0xf1, 0xf6, 0x5, 
    0x40, 0x21, 0x2, 0xf2, 0xf6, 0x5, 0x18, 0xd, 0x2, 0xf3, 0xf6, 0x5, 0x7c, 
    0x3f, 0x2, 0xf4, 0xf6, 0x5, 0x7e, 0x40, 0x2, 0xf5, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xf8, 0x9, 0x2, 0x2, 0x2, 0xf8, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xff, 0x5, 0x6, 0x4, 0x2, 0xfa, 0xff, 0x7, 0x34, 0x2, 
    0x2, 0xfb, 0xff, 0x7, 0x17, 0x2, 0x2, 0xfc, 0xff, 0x7, 0xf, 0x2, 0x2, 
    0xfd, 0xff, 0x7, 0xe, 0x2, 0x2, 0xfe, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 0xc, 0x7, 0x2, 0x101, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x105, 0x5, 0xe, 0x8, 0x2, 0x104, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x109, 0x7, 0x41, 0x2, 0x2, 0x109, 0x113, 0x5, 0x8, 0x5, 
    0x2, 0x10a, 0x10b, 0x7, 0x41, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x8, 0x5, 
    0x2, 0x10c, 0x10e, 0x7, 0x43, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0xc2, 0x62, 
    0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x44, 0x2, 
    0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x113, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x114, 0x119, 0x5, 0x12, 0xa, 0x2, 0x115, 0x116, 0x7, 0x42, 0x2, 0x2, 
    0x116, 0x118, 0x5, 0x12, 0xa, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0xa, 0x6, 0x2, 0x11d, 
    0x11f, 0x5, 0x14, 0xb, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x121, 0x5, 0x52, 0x2a, 0x2, 0x121, 0x122, 0x5, 0x8, 0x5, 0x2, 0x122, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x123, 0x127, 0x7, 0x1e, 0x2, 0x2, 0x124, 
    0x127, 0x7, 0x23, 0x2, 0x2, 0x125, 0x127, 0x7, 0x1f, 0x2, 0x2, 0x126, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x15, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 
    0x5, 0xa, 0x6, 0x2, 0x129, 0x12a, 0x7, 0x25, 0x2, 0x2, 0x12a, 0x12c, 
    0x5, 0x8, 0x5, 0x2, 0x12b, 0x12d, 0x5, 0x62, 0x32, 0x2, 0x12c, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x7, 0x43, 0x2, 0x2, 0x12f, 0x131, 
    0x5, 0x10, 0x9, 0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x7, 0x44, 0x2, 0x2, 0x133, 0x17, 0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 
    0x5, 0xc, 0x7, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 
    0x5, 0x52, 0x2a, 0x2, 0x138, 0x13a, 0x7, 0x43, 0x2, 0x2, 0x139, 0x13b, 
    0x5, 0xbe, 0x60, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
    0x7, 0x44, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x8, 0x5, 0x2, 0x13e, 0x13f, 
    0x7, 0x3f, 0x2, 0x2, 0x13f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x140, 0x142, 
    0x7, 0x43, 0x2, 0x2, 0x141, 0x143, 0x5, 0x10, 0x9, 0x2, 0x142, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
    0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x44, 0x2, 0x2, 0x145, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x4a, 0x2, 0x2, 0x147, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x14a, 0x5, 0x24, 0x13, 0x2, 0x149, 0x14b, 
    0x5, 0x1a, 0xe, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 
    0x7, 0x45, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x20, 0x11, 0x2, 0x14e, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x5, 0x26, 0x14, 0x2, 0x151, 0x152, 
    0x7, 0x46, 0x2, 0x2, 0x152, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x153, 0x155, 
    0x5, 0x22, 0x12, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x21, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15c, 0x5, 
    0xb8, 0x5d, 0x2, 0x159, 0x15c, 0x5, 0xb6, 0x5c, 0x2, 0x15a, 0x15c, 0x5, 
    0x18, 0xd, 0x2, 0x15b, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15e, 0x5, 0xa, 0x6, 0x2, 0x15e, 0x15f, 0x7, 0x24, 
    0x2, 0x2, 0x15f, 0x161, 0x5, 0x8, 0x5, 0x2, 0x160, 0x162, 0x5, 0x62, 
    0x32, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x7, 0x43, 
    0x2, 0x2, 0x164, 0x166, 0x5, 0x10, 0x9, 0x2, 0x165, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x168, 0x7, 0x44, 0x2, 0x2, 0x168, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16b, 0x5, 0x28, 0x15, 0x2, 0x16a, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x5, 0xa, 0x6, 0x2, 0x16f, 0x170, 0x7, 0x28, 0x2, 
    0x2, 0x170, 0x171, 0x5, 0x8, 0x5, 0x2, 0x171, 0x173, 0x7, 0x45, 0x2, 
    0x2, 0x172, 0x174, 0x5, 0x2a, 0x16, 0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x177, 0x5, 0x30, 0x19, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x7, 0x46, 0x2, 0x2, 0x179, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x17c, 0x5, 0x2c, 0x17, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x186, 0x5, 0x84, 0x43, 0x2, 0x180, 0x186, 0x5, 0x86, 0x44, 0x2, 
    0x181, 0x186, 0x5, 0x90, 0x49, 0x2, 0x182, 0x186, 0x5, 0x2e, 0x18, 0x2, 
    0x183, 0x186, 0x5, 0xb8, 0x5d, 0x2, 0x184, 0x186, 0x5, 0xb6, 0x5c, 0x2, 
    0x185, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x185, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x181, 0x3, 0x2, 0x2, 0x2, 0x185, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x5, 0xa, 0x6, 0x2, 0x188, 
    0x189, 0x7, 0x45, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x2a, 0x16, 0x2, 0x18a, 
    0x18b, 0x7, 0x46, 0x2, 0x2, 0x18b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18d, 0x7, 0x2d, 0x2, 0x2, 0x18d, 0x18e, 0x5, 0x32, 0x1a, 0x2, 0x18e, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x5, 0x8, 0x5, 0x2, 0x190, 0x191, 
    0x7, 0x3f, 0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 0x2, 0x192, 0x194, 
    0x5, 0x34, 0x1b, 0x2, 0x193, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x193, 0x192, 
    0x3, 0x2, 0x2, 0x2, 0x194, 0x33, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 
    0x27, 0x2, 0x2, 0x196, 0x198, 0x7, 0x43, 0x2, 0x2, 0x197, 0x199, 0x5, 
    0xc2, 0x62, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 
    0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x7, 
    0x44, 0x2, 0x2, 0x19b, 0x19d, 0x7, 0x45, 0x2, 0x2, 0x19c, 0x19e, 0x5, 
    0x36, 0x1c, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 
    0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 
    0x46, 0x2, 0x2, 0x1a0, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x5, 
    0x38, 0x1d, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1a5, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x3a, 
    0x1e, 0x2, 0x1a7, 0x1a8, 0x7, 0x40, 0x2, 0x2, 0x1a8, 0x1a9, 0x5, 0x8, 
    0x5, 0x2, 0x1a9, 0x1aa, 0x7, 0x3f, 0x2, 0x2, 0x1aa, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ae, 0x5, 0x3c, 0x1f, 0x2, 0x1ac, 0x1ae, 0x5, 0x3e, 
    0x20, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 
    0x2, 0x2, 0x1ae, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x43, 
    0x2, 0x2, 0x1b0, 0x1b5, 0x5, 0x3e, 0x20, 0x2, 0x1b1, 0x1b2, 0x7, 0x42, 
    0x2, 0x2, 0x1b2, 0x1b4, 0x5, 0x3e, 0x20, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x44, 
    0x2, 0x2, 0x1b9, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1c6, 0x5, 0xca, 
    0x66, 0x2, 0x1bb, 0x1c6, 0x7, 0x14, 0x2, 0x2, 0x1bc, 0x1c6, 0x7, 0x33, 
    0x2, 0x2, 0x1bd, 0x1be, 0x5, 0xca, 0x66, 0x2, 0x1be, 0x1bf, 0x7, 0x35, 
    0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0xca, 0x66, 0x2, 0x1c0, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x1c2, 0x5, 0xca, 0x66, 0x2, 0x1c2, 0x1c3, 0x7, 0x36, 
    0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0xca, 0x66, 0x2, 0x1c4, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1bb, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c9, 0x5, 0x42, 0x22, 0x2, 0x1c8, 0x1ca, 0x5, 0x1a, 0xe, 
    0x2, 0x1c9, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cd, 0x7, 0x45, 0x2, 
    0x2, 0x1cc, 0x1ce, 0x5, 0x44, 0x23, 0x2, 0x1cd, 0x1cc, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1d0, 0x7, 0xe, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x48, 0x25, 
    0x2, 0x1d1, 0x1d2, 0x7, 0x46, 0x2, 0x2, 0x1d2, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x1d4, 0x5, 0xa, 0x6, 0x2, 0x1d4, 0x1d5, 0x7, 0x13, 0x2, 
    0x2, 0x1d5, 0x1d7, 0x5, 0x8, 0x5, 0x2, 0x1d6, 0x1d8, 0x5, 0x62, 0x32, 
    0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1db, 0x7, 0x43, 0x2, 
    0x2, 0x1da, 0x1dc, 0x5, 0x10, 0x9, 0x2, 0x1db, 0x1da, 0x3, 0x2, 0x2, 
    0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1dd, 0x1de, 0x7, 0x44, 0x2, 0x2, 0x1de, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x1df, 0x1e1, 0x5, 0x46, 0x24, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 
    0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1ea, 0x5, 0xb8, 0x5d, 0x2, 0x1e5, 0x1ea, 0x5, 0xb4, 0x5b, 0x2, 
    0x1e6, 0x1ea, 0x5, 0xa2, 0x52, 0x2, 0x1e7, 0x1ea, 0x5, 0x18, 0xd, 0x2, 
    0x1e8, 0x1ea, 0x5, 0xb6, 0x5c, 0x2, 0x1e9, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e6, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1ea, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x5, 0x94, 0x4b, 0x2, 
    0x1ec, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x5, 0xa, 0x6, 0x2, 0x1ee, 
    0x1ef, 0x7, 0x19, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x6, 0x4, 0x2, 0x1f0, 
    0x1f2, 0x5, 0x62, 0x32, 0x2, 0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 
    0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f5, 0x7, 0x45, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x4c, 0x27, 0x2, 0x1f5, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 
    0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x46, 0x2, 0x2, 0x1f8, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x5, 0xa, 0x6, 0x2, 0x1fa, 
    0x1fb, 0x7, 0x19, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0x4e, 0x28, 0x2, 0x1fc, 
    0x1fd, 0x7, 0x3f, 0x2, 0x2, 0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x5, 0x50, 0x29, 0x2, 0x201, 
    0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 0x2, 0x203, 
    0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x5, 0x60, 0x31, 0x2, 0x206, 
    0x208, 0x5, 0x8, 0x5, 0x2, 0x207, 0x209, 0x5, 0x62, 0x32, 0x2, 0x208, 
    0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 
    0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x7, 0x43, 0x2, 0x2, 0x20b, 
    0x20d, 0x5, 0x10, 0x9, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20c, 
    0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 
    0x20f, 0x7, 0x44, 0x2, 0x2, 0x20f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x210, 
    0x211, 0x5, 0x4e, 0x28, 0x2, 0x211, 0x212, 0x7, 0x3f, 0x2, 0x2, 0x212, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x7, 0x34, 0x2, 0x2, 0x214, 
    0x216, 0x7, 0x43, 0x2, 0x2, 0x215, 0x217, 0x5, 0x10, 0x9, 0x2, 0x216, 
    0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x7, 0x44, 0x2, 0x2, 0x219, 
    0x21b, 0x7, 0x3f, 0x2, 0x2, 0x21a, 0x210, 0x3, 0x2, 0x2, 0x2, 0x21a, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x222, 
    0x5, 0x5e, 0x30, 0x2, 0x21d, 0x222, 0x5, 0x56, 0x2c, 0x2, 0x21e, 0x222, 
    0x5, 0x5c, 0x2f, 0x2, 0x21f, 0x222, 0x5, 0x5a, 0x2e, 0x2, 0x220, 0x222, 
    0x5, 0x58, 0x2d, 0x2, 0x221, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21d, 
    0x3, 0x2, 0x2, 0x2, 0x221, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 
    0x3, 0x2, 0x2, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x223, 0x229, 0x7, 0x34, 0x2, 0x2, 0x224, 0x225, 0x5, 
    0x1c, 0xf, 0x2, 0x225, 0x226, 0x7, 0x34, 0x2, 0x2, 0x226, 0x229, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x229, 0x7, 0x17, 0x2, 0x2, 0x228, 0x223, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x224, 0x3, 0x2, 0x2, 0x2, 0x228, 0x227, 0x3, 
    0x2, 0x2, 0x2, 0x229, 0x55, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x54, 
    0x2b, 0x2, 0x22b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x2f, 
    0x2, 0x2, 0x22d, 0x22e, 0x7, 0x4b, 0x2, 0x2, 0x22e, 0x22f, 0x5, 0x6a, 
    0x36, 0x2, 0x22f, 0x230, 0x7, 0x4c, 0x2, 0x2, 0x230, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x232, 0x5, 0x56, 0x2c, 0x2, 0x232, 0x233, 0x7, 0x47, 
    0x2, 0x2, 0x233, 0x234, 0x5, 0xca, 0x66, 0x2, 0x234, 0x235, 0x7, 0x48, 
    0x2, 0x2, 0x235, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x5, 0x54, 
    0x2b, 0x2, 0x237, 0x238, 0x7, 0x4b, 0x2, 0x2, 0x238, 0x239, 0x5, 0x6a, 
    0x36, 0x2, 0x239, 0x23a, 0x7, 0x4c, 0x2, 0x2, 0x23a, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x23b, 0x24e, 0x7, 0x10, 0x2, 0x2, 0x23c, 0x24e, 0x7, 0x17, 
    0x2, 0x2, 0x23d, 0x24e, 0x7, 0x11, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x11, 
    0x2, 0x2, 0x23f, 0x240, 0x7, 0x4b, 0x2, 0x2, 0x240, 0x241, 0x5, 0xd4, 
    0x6b, 0x2, 0x241, 0x242, 0x7, 0x4c, 0x2, 0x2, 0x242, 0x24e, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x244, 0x7, 0x20, 0x2, 0x2, 0x244, 0x245, 0x7, 0x4b, 
    0x2, 0x2, 0x245, 0x246, 0x5, 0xd4, 0x6b, 0x2, 0x246, 0x247, 0x7, 0x4c, 
    0x2, 0x2, 0x247, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x31, 
    0x2, 0x2, 0x249, 0x24a, 0x7, 0x4b, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0xd4, 
    0x6b, 0x2, 0x24b, 0x24c, 0x7, 0x4c, 0x2, 0x2, 0x24c, 0x24e, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x23c, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x243, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x248, 0x3, 0x2, 
    0x2, 0x2, 0x24e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x253, 0x7, 0x32, 
    0x2, 0x2, 0x250, 0x253, 0x5, 0x52, 0x2a, 0x2, 0x251, 0x253, 0x5, 0x6, 
    0x4, 0x2, 0x252, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x252, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x255, 0x7, 0x4b, 0x2, 0x2, 0x255, 0x256, 0x5, 0x64, 0x33, 
    0x2, 0x256, 0x257, 0x7, 0x4c, 0x2, 0x2, 0x257, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x258, 0x25d, 0x5, 0x6, 0x4, 0x2, 0x259, 0x25a, 0x7, 0x42, 0x2, 
    0x2, 0x25a, 0x25c, 0x5, 0x6, 0x4, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x25f, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x260, 0x263, 0x5, 0x68, 0x35, 0x2, 
    0x261, 0x263, 0x5, 0x52, 0x2a, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 
    0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x67, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x265, 0x7, 0x33, 0x2, 0x2, 0x265, 0x69, 0x3, 0x2, 0x2, 0x2, 0x266, 
    0x26b, 0x5, 0x66, 0x34, 0x2, 0x267, 0x268, 0x7, 0x42, 0x2, 0x2, 0x268, 
    0x26a, 0x5, 0x66, 0x34, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x26d, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26b, 
    0x3, 0x2, 0x2, 0x2, 0x26e, 0x27a, 0x5, 0x6e, 0x38, 0x2, 0x26f, 0x27a, 
    0x5, 0x82, 0x42, 0x2, 0x270, 0x271, 0x5, 0x24, 0x13, 0x2, 0x271, 0x272, 
    0x7, 0x3f, 0x2, 0x2, 0x272, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 
    0x5, 0x42, 0x22, 0x2, 0x274, 0x275, 0x7, 0x3f, 0x2, 0x2, 0x275, 0x27a, 
    0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x5, 0x16, 0xc, 0x2, 0x277, 0x278, 
    0x7, 0x3f, 0x2, 0x2, 0x278, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x279, 0x26e, 
    0x3, 0x2, 0x2, 0x2, 0x279, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x279, 0x270, 
    0x3, 0x2, 0x2, 0x2, 0x279, 0x273, 0x3, 0x2, 0x2, 0x2, 0x279, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x280, 0x5, 
    0x70, 0x39, 0x2, 0x27c, 0x280, 0x5, 0x72, 0x3a, 0x2, 0x27d, 0x280, 0x5, 
    0x74, 0x3b, 0x2, 0x27e, 0x280, 0x5, 0x7a, 0x3e, 0x2, 0x27f, 0x27b, 0x3, 
    0x2, 0x2, 0x2, 0x27f, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x27d, 0x3, 
    0x2, 0x2, 0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x282, 0x5, 0xa, 0x6, 0x2, 0x282, 0x283, 0x7, 0x1b, 
    0x2, 0x2, 0x283, 0x284, 0x5, 0x8, 0x5, 0x2, 0x284, 0x286, 0x7, 0x45, 
    0x2, 0x2, 0x285, 0x287, 0x5, 0x76, 0x3c, 0x2, 0x286, 0x285, 0x3, 0x2, 
    0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x289, 0x7, 0x46, 0x2, 0x2, 0x289, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x28b, 0x5, 0xa, 0x6, 0x2, 0x28b, 0x28c, 0x7, 0x1c, 
    0x2, 0x2, 0x28c, 0x28d, 0x5, 0x8, 0x5, 0x2, 0x28d, 0x28f, 0x7, 0x45, 
    0x2, 0x2, 0x28e, 0x290, 0x5, 0x76, 0x3c, 0x2, 0x28f, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 
    0x2, 0x2, 0x291, 0x292, 0x7, 0x46, 0x2, 0x2, 0x292, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x293, 0x294, 0x5, 0xa, 0x6, 0x2, 0x294, 0x295, 0x7, 0x29, 
    0x2, 0x2, 0x295, 0x296, 0x5, 0x8, 0x5, 0x2, 0x296, 0x298, 0x7, 0x45, 
    0x2, 0x2, 0x297, 0x299, 0x5, 0x76, 0x3c, 0x2, 0x298, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x298, 0x299, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x29b, 0x7, 0x46, 0x2, 0x2, 0x29b, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x29c, 0x29e, 0x5, 0x78, 0x3d, 0x2, 0x29d, 0x29c, 0x3, 0x2, 
    0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x29d, 0x3, 0x2, 
    0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x2a1, 0x2a2, 0x5, 0xa, 0x6, 0x2, 0x2a2, 0x2a3, 0x5, 0x52, 0x2a, 
    0x2, 0x2a3, 0x2a4, 0x5, 0x8, 0x5, 0x2, 0x2a4, 0x2a5, 0x7, 0x3f, 0x2, 
    0x2, 0x2a5, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x5, 0xa, 0x6, 0x2, 
    0x2a7, 0x2a8, 0x7, 0x16, 0x2, 0x2, 0x2a8, 0x2a9, 0x5, 0x8, 0x5, 0x2, 
    0x2a9, 0x2aa, 0x7, 0x45, 0x2, 0x2, 0x2aa, 0x2ab, 0x5, 0x80, 0x41, 0x2, 
    0x2ab, 0x2ac, 0x7, 0x46, 0x2, 0x2, 0x2ac, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x2ad, 0x2ae, 0x7, 0x17, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x45, 0x2, 0x2, 
    0x2af, 0x2b0, 0x5, 0x80, 0x41, 0x2, 0x2b0, 0x2b1, 0x7, 0x46, 0x2, 0x2, 
    0x2b1, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x22, 0x2, 0x2, 
    0x2b3, 0x2b4, 0x7, 0x45, 0x2, 0x2, 0x2b4, 0x2b5, 0x5, 0x80, 0x41, 0x2, 
    0x2b5, 0x2b6, 0x7, 0x46, 0x2, 0x2, 0x2b6, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x2b7, 0x2bc, 0x5, 0x8, 0x5, 0x2, 0x2b8, 0x2b9, 0x7, 0x42, 0x2, 0x2, 
    0x2b9, 0x2bb, 0x5, 0x8, 0x5, 0x2, 0x2ba, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x2bb, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x2bc, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2be, 
    0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c1, 0x5, 0xc, 0x7, 0x2, 0x2c0, 
    0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 
    0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x30, 0x2, 0x2, 0x2c3, 
    0x2c4, 0x5, 0x52, 0x2a, 0x2, 0x2c4, 0x2c5, 0x5, 0x8, 0x5, 0x2, 0x2c5, 
    0x2c6, 0x7, 0x3f, 0x2, 0x2, 0x2c6, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
    0x2c9, 0x5, 0xc, 0x7, 0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 
    0x2cb, 0x7, 0x30, 0x2, 0x2, 0x2cb, 0x2cc, 0x5, 0x6e, 0x38, 0x2, 0x2cc, 
    0x2cd, 0x5, 0x8, 0x5, 0x2, 0x2cd, 0x2ce, 0x7, 0x3f, 0x2, 0x2, 0x2ce, 
    0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 
    0x5, 0xc8, 0x65, 0x2, 0x2d2, 0x2d3, 0x7, 0x49, 0x2, 0x2, 0x2d3, 0x2d4, 
    0x5, 0xca, 0x66, 0x2, 0x2d4, 0x2d5, 0x7, 0x3f, 0x2, 0x2, 0x2d5, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0xc8, 0x65, 0x2, 0x2d7, 0x2d8, 
    0x7, 0x4a, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0xe, 0x2, 0x2, 0x2d9, 0x2db, 
    0x7, 0x43, 0x2, 0x2, 0x2da, 0x2dc, 0x5, 0xbe, 0x60, 0x2, 0x2db, 0x2da, 
    0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 
    0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x7, 0x44, 0x2, 0x2, 0x2de, 0x2df, 
    0x7, 0x3f, 0x2, 0x2, 0x2df, 0x304, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 
    0x5, 0xc8, 0x65, 0x2, 0x2e1, 0x2e2, 0x7, 0x4a, 0x2, 0x2, 0x2e2, 0x2e7, 
    0x7, 0xf, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 0x4b, 0x2, 0x2, 0x2e4, 0x2e5, 
    0x5, 0x6a, 0x36, 0x2, 0x2e5, 0x2e6, 0x7, 0x4c, 0x2, 0x2, 0x2e6, 0x2e8, 
    0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 
    0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 
    0x7, 0x43, 0x2, 0x2, 0x2ea, 0x2ec, 0x5, 0xbe, 0x60, 0x2, 0x2eb, 0x2ea, 
    0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 
    0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x44, 0x2, 0x2, 0x2ee, 0x2ef, 
    0x7, 0x3f, 0x2, 0x2, 0x2ef, 0x304, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 
    0x5, 0xc8, 0x65, 0x2, 0x2f1, 0x2f3, 0x7, 0x43, 0x2, 0x2, 0x2f2, 0x2f4, 
    0x5, 0xbe, 0x60, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 
    0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 
    0x7, 0x44, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x3f, 0x2, 0x2, 0x2f7, 0x304, 
    0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x5, 0xc8, 0x65, 0x2, 0x2f9, 0x2fa, 
    0x7, 0x4b, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 0x6a, 0x36, 0x2, 0x2fb, 0x2fc, 
    0x7, 0x4c, 0x2, 0x2, 0x2fc, 0x2fe, 0x7, 0x43, 0x2, 0x2, 0x2fd, 0x2ff, 
    0x5, 0xbe, 0x60, 0x2, 0x2fe, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
    0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 
    0x7, 0x44, 0x2, 0x2, 0x301, 0x302, 0x7, 0x3f, 0x2, 0x2, 0x302, 0x304, 
    0x3, 0x2, 0x2, 0x2, 0x303, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x303, 0x2e0, 
    0x3, 0x2, 0x2, 0x2, 0x303, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x303, 0x2f8, 
    0x3, 0x2, 0x2, 0x2, 0x304, 0x87, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x7, 
    0x3f, 0x2, 0x2, 0x306, 0x89, 0x3, 0x2, 0x2, 0x2, 0x307, 0x308, 0x7, 
    0x26, 0x2, 0x2, 0x308, 0x309, 0x7, 0x3f, 0x2, 0x2, 0x309, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x30a, 0x30b, 0x7, 0x18, 0x2, 0x2, 0x30b, 0x30c, 0x7, 
    0x3f, 0x2, 0x2, 0x30c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 
    0x1d, 0x2, 0x2, 0x30e, 0x30f, 0x7, 0x43, 0x2, 0x2, 0x30f, 0x310, 0x5, 
    0xca, 0x66, 0x2, 0x310, 0x311, 0x7, 0x44, 0x2, 0x2, 0x311, 0x312, 0x5, 
    0x92, 0x4a, 0x2, 0x312, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x7, 
    0x1d, 0x2, 0x2, 0x314, 0x315, 0x7, 0x43, 0x2, 0x2, 0x315, 0x316, 0x5, 
    0xca, 0x66, 0x2, 0x316, 0x317, 0x7, 0x44, 0x2, 0x2, 0x317, 0x318, 0x5, 
    0x92, 0x4a, 0x2, 0x318, 0x319, 0x7, 0x15, 0x2, 0x2, 0x319, 0x31a, 0x5, 
    0x92, 0x4a, 0x2, 0x31a, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x30d, 0x3, 
    0x2, 0x2, 0x2, 0x31b, 0x313, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x31d, 0x31e, 0x5, 0x56, 0x2c, 0x2, 0x31e, 0x31f, 0x7, 0x4a, 
    0x2, 0x2, 0x31f, 0x320, 0x7, 0xe, 0x2, 0x2, 0x320, 0x322, 0x7, 0x43, 
    0x2, 0x2, 0x321, 0x323, 0x5, 0xbe, 0x60, 0x2, 0x322, 0x321, 0x3, 0x2, 
    0x2, 0x2, 0x322, 0x323, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 
    0x2, 0x2, 0x324, 0x325, 0x7, 0x44, 0x2, 0x2, 0x325, 0x326, 0x7, 0x3f, 
    0x2, 0x2, 0x326, 0x91, 0x3, 0x2, 0x2, 0x2, 0x327, 0x331, 0x5, 0x84, 
    0x43, 0x2, 0x328, 0x331, 0x5, 0x86, 0x44, 0x2, 0x329, 0x331, 0x5, 0x90, 
    0x49, 0x2, 0x32a, 0x331, 0x5, 0x8e, 0x48, 0x2, 0x32b, 0x331, 0x5, 0x88, 
    0x45, 0x2, 0x32c, 0x331, 0x5, 0x94, 0x4b, 0x2, 0x32d, 0x331, 0x5, 0x8c, 
    0x47, 0x2, 0x32e, 0x331, 0x5, 0x8a, 0x46, 0x2, 0x32f, 0x331, 0x5, 0x98, 
    0x4d, 0x2, 0x330, 0x327, 0x3, 0x2, 0x2, 0x2, 0x330, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x329, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32c, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x331, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x332, 0x333, 0x5, 0xa, 0x6, 0x2, 0x333, 0x335, 0x7, 0x45, 0x2, 
    0x2, 0x334, 0x336, 0x5, 0x96, 0x4c, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 
    0x2, 0x335, 0x336, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x338, 0x7, 0x46, 0x2, 0x2, 0x338, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x339, 0x33b, 0x5, 0xa0, 0x51, 0x2, 0x33a, 0x339, 0x3, 0x2, 0x2, 
    0x2, 0x33b, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 
    0x2, 0x33c, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x33e, 0x33f, 0x7, 0x2a, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x43, 0x2, 0x2, 
    0x340, 0x341, 0x5, 0xca, 0x66, 0x2, 0x341, 0x342, 0x7, 0x44, 0x2, 0x2, 
    0x342, 0x344, 0x7, 0x45, 0x2, 0x2, 0x343, 0x345, 0x5, 0x9a, 0x4e, 0x2, 
    0x344, 0x343, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x3, 0x2, 0x2, 0x2, 
    0x345, 0x346, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 0x7, 0x46, 0x2, 0x2, 
    0x347, 0x99, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34a, 0x5, 0x9c, 0x4f, 0x2, 
    0x349, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 
    0x34b, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 0x2, 
    0x34c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x5, 0x9e, 0x50, 0x2, 
    0x34e, 0x350, 0x7, 0x40, 0x2, 0x2, 0x34f, 0x351, 0x5, 0x94, 0x4b, 0x2, 
    0x350, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 
    0x351, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x352, 0x355, 0x5, 0x8, 0x5, 0x2, 0x353, 
    0x355, 0x7, 0x14, 0x2, 0x2, 0x354, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 
    0x353, 0x3, 0x2, 0x2, 0x2, 0x355, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x356, 0x35b, 
    0x5, 0xb6, 0x5c, 0x2, 0x357, 0x35b, 0x5, 0xb8, 0x5d, 0x2, 0x358, 0x35b, 
    0x5, 0x92, 0x4a, 0x2, 0x359, 0x35b, 0x5, 0x18, 0xd, 0x2, 0x35a, 0x356, 
    0x3, 0x2, 0x2, 0x2, 0x35a, 0x357, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 
    0x3, 0x2, 0x2, 0x2, 0x35a, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35b, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0xa, 0x6, 0x2, 0x35d, 0x35e, 0x7, 
    0x2b, 0x2, 0x2, 0x35e, 0x35f, 0x5, 0x8, 0x5, 0x2, 0x35f, 0x360, 0x7, 
    0x45, 0x2, 0x2, 0x360, 0x361, 0x5, 0xa4, 0x53, 0x2, 0x361, 0x362, 0x7, 
    0x46, 0x2, 0x2, 0x362, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x363, 0x365, 0x5, 
    0xa6, 0x54, 0x2, 0x364, 0x363, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 
    0x2, 0x2, 0x2, 0x366, 0x364, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x7, 0x21, 
    0x2, 0x2, 0x369, 0x36a, 0x7, 0x49, 0x2, 0x2, 0x36a, 0x36c, 0x7, 0x45, 
    0x2, 0x2, 0x36b, 0x36d, 0x5, 0xa8, 0x55, 0x2, 0x36c, 0x36b, 0x3, 0x2, 
    0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x3, 0x2, 
    0x2, 0x2, 0x36e, 0x38a, 0x7, 0x46, 0x2, 0x2, 0x36f, 0x370, 0x7, 0xc, 
    0x2, 0x2, 0x370, 0x371, 0x7, 0x49, 0x2, 0x2, 0x371, 0x372, 0x7, 0x45, 
    0x2, 0x2, 0x372, 0x373, 0x5, 0xac, 0x57, 0x2, 0x373, 0x374, 0x7, 0x46, 
    0x2, 0x2, 0x374, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x7, 0x12, 
    0x2, 0x2, 0x376, 0x377, 0x7, 0xd, 0x2, 0x2, 0x377, 0x378, 0x7, 0x49, 
    0x2, 0x2, 0x378, 0x379, 0x7, 0x45, 0x2, 0x2, 0x379, 0x37a, 0x5, 0xae, 
    0x58, 0x2, 0x37a, 0x37b, 0x7, 0x46, 0x2, 0x2, 0x37b, 0x38a, 0x3, 0x2, 
    0x2, 0x2, 0x37c, 0x37d, 0x5, 0xa, 0x6, 0x2, 0x37d, 0x37e, 0x7, 0x12, 
    0x2, 0x2, 0x37e, 0x37f, 0x7, 0x34, 0x2, 0x2, 0x37f, 0x380, 0x7, 0x49, 
    0x2, 0x2, 0x380, 0x381, 0x5, 0xbc, 0x5f, 0x2, 0x381, 0x382, 0x7, 0x3f, 
    0x2, 0x2, 0x382, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x5, 0xa, 
    0x6, 0x2, 0x384, 0x385, 0x7, 0x34, 0x2, 0x2, 0x385, 0x386, 0x7, 0x49, 
    0x2, 0x2, 0x386, 0x387, 0x5, 0xbc, 0x5f, 0x2, 0x387, 0x388, 0x7, 0x3f, 
    0x2, 0x2, 0x388, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x389, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0x389, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x389, 0x375, 0x3, 0x2, 
    0x2, 0x2, 0x389, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x389, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x38a, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38d, 0x5, 0xaa, 
    0x56, 0x2, 0x38c, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x3, 0x2, 
    0x2, 0x2, 0x38e, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 
    0x2, 0x2, 0x38f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x5, 0xca, 
    0x66, 0x2, 0x391, 0x392, 0x7, 0x40, 0x2, 0x2, 0x392, 0x393, 0x5, 0x8, 
    0x5, 0x2, 0x393, 0x394, 0x5, 0xa, 0x6, 0x2, 0x394, 0x395, 0x7, 0x3f, 
    0x2, 0x2, 0x395, 0xab, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x5, 0xb2, 
    0x5a, 0x2, 0x397, 0x39d, 0x7, 0x3f, 0x2, 0x2, 0x398, 0x399, 0x5, 0xb2, 
    0x5a, 0x2, 0x399, 0x39a, 0x7, 0x3f, 0x2, 0x2, 0x39a, 0x39c, 0x3, 0x2, 
    0x2, 0x2, 0x39b, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39f, 0x3, 0x2, 
    0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 
    0x2, 0x2, 0x39e, 0xad, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a2, 0x5, 0xb0, 0x59, 0x2, 0x3a1, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x3a2, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a1, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x3a5, 0x3a6, 0x5, 0xa, 0x6, 0x2, 0x3a6, 0x3a7, 0x5, 0x3a, 0x1e, 0x2, 
    0x3a7, 0x3a8, 0x7, 0x40, 0x2, 0x2, 0x3a8, 0x3a9, 0x5, 0xb2, 0x5a, 0x2, 
    0x3a9, 0x3aa, 0x7, 0x3f, 0x2, 0x2, 0x3aa, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x3ab, 0x3ac, 0x5, 0xa, 0x6, 0x2, 0x3ac, 0x3ad, 0x5, 0x8, 0x5, 0x2, 
    0x3ad, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x5, 0xa, 0x6, 0x2, 
    0x3af, 0x3b0, 0x5, 0x8, 0x5, 0x2, 0x3b0, 0x3b2, 0x7, 0x43, 0x2, 0x2, 
    0x3b1, 0x3b3, 0x5, 0xbe, 0x60, 0x2, 0x3b2, 0x3b1, 0x3, 0x2, 0x2, 0x2, 
    0x3b2, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 
    0x3b4, 0x3b5, 0x7, 0x44, 0x2, 0x2, 0x3b5, 0x3b7, 0x3, 0x2, 0x2, 0x2, 
    0x3b6, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3ae, 0x3, 0x2, 0x2, 0x2, 
    0x3b7, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x5, 0xa, 0x6, 0x2, 0x3b9, 
    0x3ba, 0x7, 0xb, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 0x8, 0x5, 0x2, 0x3bb, 
    0x3bd, 0x7, 0x43, 0x2, 0x2, 0x3bc, 0x3be, 0x5, 0x10, 0x9, 0x2, 0x3bd, 
    0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 
    0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x7, 0x44, 0x2, 0x2, 0x3c0, 
    0x3c1, 0x5, 0x94, 0x4b, 0x2, 0x3c1, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x3c2, 
    0x3c4, 0x5, 0xc, 0x7, 0x2, 0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c3, 
    0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
    0x3c6, 0x5, 0x52, 0x2a, 0x2, 0x3c6, 0x3c8, 0x5, 0x8, 0x5, 0x2, 0x3c7, 
    0x3c9, 0x5, 0xba, 0x5e, 0x2, 0x3c8, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
    0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
    0x3cb, 0x7, 0x3f, 0x2, 0x2, 0x3cb, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
    0x3cd, 0x5, 0xa, 0x6, 0x2, 0x3cd, 0x3ce, 0x7, 0x12, 0x2, 0x2, 0x3ce, 
    0x3cf, 0x5, 0x52, 0x2a, 0x2, 0x3cf, 0x3d0, 0x5, 0x8, 0x5, 0x2, 0x3d0, 
    0x3d1, 0x7, 0x49, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0xbc, 0x5f, 0x2, 0x3d2, 
    0x3d3, 0x7, 0x3f, 0x2, 0x2, 0x3d3, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3d5, 0x7, 0x49, 0x2, 0x2, 0x3d5, 0x3d6, 0x5, 0xbc, 0x5f, 0x2, 0x3d6, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0xca, 0x66, 0x2, 0x3d8, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3de, 0x5, 0xc0, 0x61, 0x2, 0x3da, 
    0x3db, 0x7, 0x42, 0x2, 0x2, 0x3db, 0x3dd, 0x5, 0xc0, 0x61, 0x2, 0x3dc, 
    0x3da, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3de, 
    0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 
    0x5, 0xca, 0x66, 0x2, 0x3e2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e8, 
    0x5, 0xca, 0x66, 0x2, 0x3e4, 0x3e5, 0x7, 0x42, 0x2, 0x2, 0x3e5, 0x3e7, 
    0x5, 0xca, 0x66, 0x2, 0x3e6, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3ea, 
    0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 
    0x3, 0x2, 0x2, 0x2, 0x3e9, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e8, 0x3, 
    0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x5, 0x8, 0x5, 0x2, 0x3ec, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0x3ed, 0x3f2, 0x5, 0x6, 0x4, 0x2, 0x3ee, 0x3ef, 0x5, 0x1c, 
    0xf, 0x2, 0x3ef, 0x3f0, 0x5, 0x6, 0x4, 0x2, 0x3f0, 0x3f2, 0x3, 0x2, 
    0x2, 0x2, 0x3f1, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3ee, 0x3, 0x2, 
    0x2, 0x2, 0x3f2, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x8, 0x65, 
    0x1, 0x2, 0x3f4, 0x3f5, 0x5, 0xc6, 0x64, 0x2, 0x3f5, 0x407, 0x3, 0x2, 
    0x2, 0x2, 0x3f6, 0x3f7, 0xc, 0x5, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0x4a, 
    0x2, 0x2, 0x3f8, 0x406, 0x5, 0xc4, 0x63, 0x2, 0x3f9, 0x3fa, 0xc, 0x4, 
    0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x47, 0x2, 0x2, 0x3fb, 0x3fc, 0x5, 0xca, 
    0x66, 0x2, 0x3fc, 0x3fd, 0x7, 0x48, 0x2, 0x2, 0x3fd, 0x406, 0x3, 0x2, 
    0x2, 0x2, 0x3fe, 0x3ff, 0xc, 0x3, 0x2, 0x2, 0x3ff, 0x400, 0x7, 0x47, 
    0x2, 0x2, 0x400, 0x401, 0x5, 0xca, 0x66, 0x2, 0x401, 0x402, 0x7, 0x40, 
    0x2, 0x2, 0x402, 0x403, 0x5, 0xca, 0x66, 0x2, 0x403, 0x404, 0x7, 0x48, 
    0x2, 0x2, 0x404, 0x406, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3f6, 0x3, 0x2, 
    0x2, 0x2, 0x405, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3fe, 0x3, 0x2, 
    0x2, 0x2, 0x406, 0x409, 0x3, 0x2, 0x2, 0x2, 0x407, 0x405, 0x3, 0x2, 
    0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0x409, 0x407, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0x8, 0x66, 0x1, 
    0x2, 0x40b, 0x433, 0x5, 0xd4, 0x6b, 0x2, 0x40c, 0x433, 0x7, 0x2e, 0x2, 
    0x2, 0x40d, 0x433, 0x7, 0x1a, 0x2, 0x2, 0x40e, 0x433, 0x7, 0x58, 0x2, 
    0x2, 0x40f, 0x433, 0x5, 0x6, 0x4, 0x2, 0x410, 0x411, 0x7, 0x4a, 0x2, 
    0x2, 0x411, 0x433, 0x5, 0x6, 0x4, 0x2, 0x412, 0x413, 0x5, 0x52, 0x2a, 
    0x2, 0x413, 0x415, 0x7, 0x43, 0x2, 0x2, 0x414, 0x416, 0x5, 0xbe, 0x60, 
    0x2, 0x415, 0x414, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 
    0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x44, 0x2, 
    0x2, 0x418, 0x433, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x7, 0x43, 0x2, 
    0x2, 0x41a, 0x41b, 0x5, 0x52, 0x2a, 0x2, 0x41b, 0x41c, 0x7, 0x44, 0x2, 
    0x2, 0x41c, 0x41d, 0x5, 0xca, 0x66, 0x22, 0x41d, 0x433, 0x3, 0x2, 0x2, 
    0x2, 0x41e, 0x420, 0x7, 0x45, 0x2, 0x2, 0x41f, 0x421, 0x5, 0xc2, 0x62, 
    0x2, 0x420, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 
    0x2, 0x421, 0x422, 0x3, 0x2, 0x2, 0x2, 0x422, 0x433, 0x7, 0x46, 0x2, 
    0x2, 0x423, 0x424, 0x7, 0x43, 0x2, 0x2, 0x424, 0x425, 0x5, 0xca, 0x66, 
    0x2, 0x425, 0x426, 0x7, 0x44, 0x2, 0x2, 0x426, 0x433, 0x3, 0x2, 0x2, 
    0x2, 0x427, 0x433, 0x5, 0xcc, 0x67, 0x2, 0x428, 0x433, 0x5, 0xce, 0x68, 
    0x2, 0x429, 0x433, 0x5, 0xd2, 0x6a, 0x2, 0x42a, 0x433, 0x5, 0xd0, 0x69, 
    0x2, 0x42b, 0x42c, 0x5, 0x56, 0x2c, 0x2, 0x42c, 0x42d, 0x7, 0x4a, 0x2, 
    0x2, 0x42d, 0x42e, 0x5, 0xc4, 0x63, 0x2, 0x42e, 0x433, 0x3, 0x2, 0x2, 
    0x2, 0x42f, 0x430, 0x7, 0x17, 0x2, 0x2, 0x430, 0x431, 0x7, 0x4a, 0x2, 
    0x2, 0x431, 0x433, 0x5, 0xc4, 0x63, 0x2, 0x432, 0x40a, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x432, 0x40d, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x432, 0x40f, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x410, 0x3, 0x2, 0x2, 0x2, 0x432, 0x412, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x419, 0x3, 0x2, 0x2, 0x2, 0x432, 0x41e, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x423, 0x3, 0x2, 0x2, 0x2, 0x432, 0x427, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x428, 0x3, 0x2, 0x2, 0x2, 0x432, 0x429, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x432, 0x42b, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x433, 0x495, 0x3, 0x2, 0x2, 
    0x2, 0x434, 0x435, 0xc, 0x16, 0x2, 0x2, 0x435, 0x436, 0x7, 0x51, 0x2, 
    0x2, 0x436, 0x494, 0x5, 0xca, 0x66, 0x17, 0x437, 0x438, 0xc, 0x15, 0x2, 
    0x2, 0x438, 0x439, 0x7, 0x52, 0x2, 0x2, 0x439, 0x494, 0x5, 0xca, 0x66, 
    0x16, 0x43a, 0x43b, 0xc, 0x14, 0x2, 0x2, 0x43b, 0x43c, 0x7, 0x53, 0x2, 
    0x2, 0x43c, 0x494, 0x5, 0xca, 0x66, 0x15, 0x43d, 0x43e, 0xc, 0x13, 0x2, 
    0x2, 0x43e, 0x43f, 0x7, 0x50, 0x2, 0x2, 0x43f, 0x494, 0x5, 0xca, 0x66, 
    0x14, 0x440, 0x441, 0xc, 0x12, 0x2, 0x2, 0x441, 0x442, 0x7, 0x4f, 0x2, 
    0x2, 0x442, 0x494, 0x5, 0xca, 0x66, 0x13, 0x443, 0x444, 0xc, 0x11, 0x2, 
    0x2, 0x444, 0x445, 0x7, 0x37, 0x2, 0x2, 0x445, 0x494, 0x5, 0xca, 0x66, 
    0x12, 0x446, 0x447, 0xc, 0x10, 0x2, 0x2, 0x447, 0x448, 0x7, 0x4c, 0x2, 
    0x2, 0x448, 0x449, 0x7, 0x4c, 0x2, 0x2, 0x449, 0x494, 0x5, 0xca, 0x66, 
    0x11, 0x44a, 0x44b, 0xc, 0xf, 0x2, 0x2, 0x44b, 0x44c, 0x7, 0x54, 0x2, 
    0x2, 0x44c, 0x494, 0x5, 0xca, 0x66, 0x10, 0x44d, 0x44e, 0xc, 0xe, 0x2, 
    0x2, 0x44e, 0x44f, 0x7, 0x56, 0x2, 0x2, 0x44f, 0x494, 0x5, 0xca, 0x66, 
    0xf, 0x450, 0x451, 0xc, 0xd, 0x2, 0x2, 0x451, 0x452, 0x7, 0x55, 0x2, 
    0x2, 0x452, 0x494, 0x5, 0xca, 0x66, 0xe, 0x453, 0x454, 0xc, 0xc, 0x2, 
    0x2, 0x454, 0x455, 0x7, 0x3e, 0x2, 0x2, 0x455, 0x494, 0x5, 0xca, 0x66, 
    0xd, 0x456, 0x457, 0xc, 0xb, 0x2, 0x2, 0x457, 0x458, 0x7, 0x3d, 0x2, 
    0x2, 0x458, 0x494, 0x5, 0xca, 0x66, 0xc, 0x459, 0x45a, 0xc, 0xa, 0x2, 
    0x2, 0x45a, 0x45b, 0x7, 0x3c, 0x2, 0x2, 0x45b, 0x494, 0x5, 0xca, 0x66, 
    0xb, 0x45c, 0x45d, 0xc, 0x9, 0x2, 0x2, 0x45d, 0x45e, 0x7, 0x4b, 0x2, 
    0x2, 0x45e, 0x494, 0x5, 0xca, 0x66, 0xa, 0x45f, 0x460, 0xc, 0x8, 0x2, 
    0x2, 0x460, 0x461, 0x7, 0x4c, 0x2, 0x2, 0x461, 0x494, 0x5, 0xca, 0x66, 
    0x9, 0x462, 0x463, 0xc, 0x7, 0x2, 0x2, 0x463, 0x464, 0x7, 0x3b, 0x2, 
    0x2, 0x464, 0x494, 0x5, 0xca, 0x66, 0x8, 0x465, 0x466, 0xc, 0x6, 0x2, 
    0x2, 0x466, 0x467, 0x7, 0x3a, 0x2, 0x2, 0x467, 0x494, 0x5, 0xca, 0x66, 
    0x7, 0x468, 0x469, 0xc, 0x5, 0x2, 0x2, 0x469, 0x46a, 0x7, 0x38, 0x2, 
    0x2, 0x46a, 0x494, 0x5, 0xca, 0x66, 0x6, 0x46b, 0x46c, 0xc, 0x4, 0x2, 
    0x2, 0x46c, 0x46d, 0x7, 0x39, 0x2, 0x2, 0x46d, 0x494, 0x5, 0xca, 0x66, 
    0x5, 0x46e, 0x46f, 0xc, 0x3, 0x2, 0x2, 0x46f, 0x470, 0x7, 0x57, 0x2, 
    0x2, 0x470, 0x471, 0x5, 0xca, 0x66, 0x2, 0x471, 0x472, 0x7, 0x40, 0x2, 
    0x2, 0x472, 0x473, 0x5, 0xca, 0x66, 0x4, 0x473, 0x494, 0x3, 0x2, 0x2, 
    0x2, 0x474, 0x475, 0xc, 0x25, 0x2, 0x2, 0x475, 0x477, 0x7, 0x43, 0x2, 
    0x2, 0x476, 0x478, 0x5, 0xbe, 0x60, 0x2, 0x477, 0x476, 0x3, 0x2, 0x2, 
    0x2, 0x477, 0x478, 0x3, 0x2, 0x2, 0x2, 0x478, 0x479, 0x3, 0x2, 0x2, 
    0x2, 0x479, 0x494, 0x7, 0x44, 0x2, 0x2, 0x47a, 0x47b, 0xc, 0x24, 0x2, 
    0x2, 0x47b, 0x47c, 0x7, 0x4b, 0x2, 0x2, 0x47c, 0x47d, 0x5, 0x6a, 0x36, 
    0x2, 0x47d, 0x47e, 0x7, 0x4c, 0x2, 0x2, 0x47e, 0x480, 0x7, 0x43, 0x2, 
    0x2, 0x47f, 0x481, 0x5, 0xbe, 0x60, 0x2, 0x480, 0x47f, 0x3, 0x2, 0x2, 
    0x2, 0x480, 0x481, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x3, 0x2, 0x2, 
    0x2, 0x482, 0x483, 0x7, 0x44, 0x2, 0x2, 0x483, 0x494, 0x3, 0x2, 0x2, 
    0x2, 0x484, 0x485, 0xc, 0x21, 0x2, 0x2, 0x485, 0x486, 0x7, 0x47, 0x2, 
    0x2, 0x486, 0x487, 0x5, 0xca, 0x66, 0x2, 0x487, 0x488, 0x7, 0x48, 0x2, 
    0x2, 0x488, 0x494, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0xc, 0x20, 0x2, 
    0x2, 0x48a, 0x48b, 0x7, 0x47, 0x2, 0x2, 0x48b, 0x48c, 0x5, 0xca, 0x66, 
    0x2, 0x48c, 0x48d, 0x7, 0x40, 0x2, 0x2, 0x48d, 0x48e, 0x5, 0xca, 0x66, 
    0x2, 0x48e, 0x48f, 0x7, 0x48, 0x2, 0x2, 0x48f, 0x494, 0x3, 0x2, 0x2, 
    0x2, 0x490, 0x491, 0xc, 0x17, 0x2, 0x2, 0x491, 0x492, 0x7, 0x4a, 0x2, 
    0x2, 0x492, 0x494, 0x5, 0xc4, 0x63, 0x2, 0x493, 0x434, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x437, 0x3, 0x2, 0x2, 0x2, 0x493, 0x43a, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x493, 0x440, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x443, 0x3, 0x2, 0x2, 0x2, 0x493, 0x446, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x493, 0x44d, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x450, 0x3, 0x2, 0x2, 0x2, 0x493, 0x453, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x456, 0x3, 0x2, 0x2, 0x2, 0x493, 0x459, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x493, 0x45f, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x462, 0x3, 0x2, 0x2, 0x2, 0x493, 0x465, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x468, 0x3, 0x2, 0x2, 0x2, 0x493, 0x46b, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x493, 0x474, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x493, 0x484, 0x3, 0x2, 0x2, 
    0x2, 0x493, 0x489, 0x3, 0x2, 0x2, 0x2, 0x493, 0x490, 0x3, 0x2, 0x2, 
    0x2, 0x494, 0x497, 0x3, 0x2, 0x2, 0x2, 0x495, 0x493, 0x3, 0x2, 0x2, 
    0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0x497, 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x7, 0x4d, 0x2, 0x2, 
    0x499, 0x49a, 0x5, 0xca, 0x66, 0x2, 0x49a, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0x49b, 0x49c, 0x7, 0x4e, 0x2, 0x2, 0x49c, 0x49d, 0x5, 0xca, 0x66, 0x2, 
    0x49d, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x7, 0x50, 0x2, 0x2, 
    0x49f, 0x4a0, 0x5, 0xca, 0x66, 0x2, 0x4a0, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0x4a1, 0x4a2, 0x7, 0x4f, 0x2, 0x2, 0x4a2, 0x4a3, 0x5, 0xca, 0x66, 0x2, 
    0x4a3, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4aa, 0x5, 0xd6, 0x6c, 0x2, 
    0x4a5, 0x4aa, 0x5, 0xd8, 0x6d, 0x2, 0x4a6, 0x4aa, 0x5, 0xda, 0x6e, 0x2, 
    0x4a7, 0x4aa, 0x5, 0xdc, 0x6f, 0x2, 0x4a8, 0x4aa, 0x5, 0xde, 0x70, 0x2, 
    0x4a9, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a5, 0x3, 0x2, 0x2, 0x2, 
    0x4a9, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a7, 0x3, 0x2, 0x2, 0x2, 
    0x4a9, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x4ab, 
    0x4ac, 0x7, 0x4, 0x2, 0x2, 0x4ac, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 
    0x7, 0x5, 0x2, 0x2, 0x4ae, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 0x7, 
    0x6, 0x2, 0x2, 0x4b0, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x3, 
    0x2, 0x2, 0x4b2, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0x7, 0x2, 
    0x2, 0x4b4, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x6c, 0xe3, 0xe7, 0xea, 0xf5, 
    0xfe, 0x101, 0x106, 0x10e, 0x112, 0x119, 0x11e, 0x126, 0x12c, 0x130, 
    0x135, 0x13a, 0x142, 0x14a, 0x14e, 0x156, 0x15b, 0x161, 0x165, 0x16c, 
    0x173, 0x176, 0x17d, 0x185, 0x193, 0x198, 0x19d, 0x1a4, 0x1ad, 0x1b5, 
    0x1c5, 0x1c9, 0x1cd, 0x1d7, 0x1db, 0x1e2, 0x1e9, 0x1f1, 0x1f5, 0x1fe, 
    0x203, 0x208, 0x20c, 0x216, 0x21a, 0x221, 0x228, 0x24d, 0x252, 0x25d, 
    0x262, 0x26b, 0x279, 0x27f, 0x286, 0x28f, 0x298, 0x29f, 0x2bc, 0x2c0, 
    0x2c8, 0x2cf, 0x2db, 0x2e7, 0x2eb, 0x2f3, 0x2fe, 0x303, 0x31b, 0x322, 
    0x330, 0x335, 0x33c, 0x344, 0x34b, 0x350, 0x354, 0x35a, 0x366, 0x36c, 
    0x389, 0x38e, 0x39d, 0x3a3, 0x3b2, 0x3b6, 0x3bd, 0x3c3, 0x3c8, 0x3de, 
    0x3e8, 0x3f1, 0x405, 0x407, 0x415, 0x420, 0x432, 0x477, 0x480, 0x493, 
    0x495, 0x4a9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

P416Parser::Initializer P416Parser::_init;
