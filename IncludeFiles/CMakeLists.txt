include_directories("/usr/local/include/antlr4-runtime")
#include_directories("/usr/local/include/llvm")
#add_library(include_file P416BaseListener.h P416BaseListener.cpp P416BaseVisitor.h P416BaseVisitor.cpp P416Lexer.h P416Lexer.cpp P416Listener.h P416Listener.cpp P416Parser.h P416Parser.cpp P416Visitor.h P416Visitor.cpp)
add_library(include_file   P416Lexer.h  P416Lexer.cpp  P416Parser.h  P416Parser.cpp )