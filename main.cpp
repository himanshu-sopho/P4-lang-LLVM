#include <iostream>
#include <string.h>
#include <cstring>
#include <fstream>
#include <ostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <iterator>
#include <memory>
#include <string>
#include <vector>
//#include <filelib.h>

#include "antlr4-runtime.h"
#include "../../test2/src/AssignmentVisitor.h"
#include "P416Visitor.h"
#include "P416Lexer.h"
#include "P416Parser.h"
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

using namespace std;
using namespace llvmp4;
using namespace llvm;

//Module* makeLLVMModule();

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("/Users/sakhobra/Desktop/sample.p4");

    std::cout << "Hello World!!" << std::endl;


    antlr4::ANTLRInputStream input(stream);
    P416Lexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    P416Parser parser(&tokens);

    P416Parser::P4programContext* tree = parser.p4program();
 	//std::cout << tree->getText()<<"\n\n" <<std::endl;
 	//std::cout<< "\nParse Tree : \n" << tree->toStringTree(&parser) <<"\n\n\n";

    emitLLVMP4 v;
 	string whole_code = v.visit(tree);

 	//cout<<whole_code<<endl;

 	cout << "sb chl rha hain" <<endl;

	//static LLVMContext TheContext;
	//llvm::Module* module = new llvm::Module("top", TheContext);
	//llvm::IRBuilder<> builder(TheContext);

	//module->dump();

    return 0;
}
