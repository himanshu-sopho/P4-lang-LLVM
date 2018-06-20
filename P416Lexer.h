


// Generated from P416.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  P416Lexer : public antlr4::Lexer {
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

  P416Lexer(antlr4::CharStream *input);
  ~P416Lexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

