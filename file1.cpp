#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/Debug.h"
#include "llvm/Analysis/AssumptionCache.h"
#include "llvm/Analysis/BasicAliasAnalysis.h"
#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/CFG.h"
#include "llvm/Analysis/CodeMetrics.h"
#include "llvm/Analysis/DemandedBits.h"
#include "llvm/Analysis/GlobalsModRef.h"
#include "llvm/Analysis/LoopAccessAnalysis.h"
#include "llvm/Analysis/LoopAnalysisManager.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/Analysis/OptimizationRemarkEmitter.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScalarEvolutionExpander.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include "llvm/Analysis/TargetLibraryInfo.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/Analysis/VectorUtils.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/TableGen/Record.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

using namespace llvm;

int var_cout = 0;

namespace {
struct demo : public FunctionPass{
	static char ID;

	demo() : FunctionPass(ID) {}
	void getAnalysisUsage(AnalysisUsage &AU) const 			//uses the analysis information of LoopInfoWrapperPass
	{
  		AU.addRequired<LoopInfoWrapperPass>();
	}

	int getIndex(Type * ty){
		int i=1;
		//dbgs() << "Infunction : " << (*ty) << "\n";
		IntegerType * temp = (IntegerType*)ty;
		std::string type_str;
		llvm::raw_string_ostream rso(type_str);
		ty->print(rso);
		//std::cout <<"String Type : "<< rso.str() <<std::endl;
		string t = rso.str();
		t = t.substr(1,t.length()-2);
		//cout << "Value of type " << t << endl;
		int r_value = stoi(t);
		//cout << "rvalue " << r_value << endl; 
		//unsigned n = ty->getIntegerBitWidth();
		//dbgs() << "value of temp : " << temp->getBitWidth() << "\n";
		return r_value;

	}

	bool runOnFunction(Function &F) override 
	{
		LoopInfo &LI = getAnalysis<LoopInfoWrapperPass>().getLoopInfo();
		dbgs() << "Hello From " << F.getName() << "\n";
		Module * M = F.getParent();
		fstream st;
		st.open("/Users/hishukl2/Desktop/outfile.p4",ios::out);
	/*	for (auto *L : LI)
		{
			for (auto *bb : L->getBlocks())
			{
				for (Instruction &I : *bb)
				{
					errs()<< I << "\n";
				}
			}	
		} */
		for (inst_iterator I = inst_begin(F), E = inst_end(F); I!=E ; ++I)
		{
			//errs() << *I <<"\n" <<I->getOpcodeName()<<'\n'<< (*I->getType()) << "\n" ;
			if (strcmp(I->getOpcodeName(),"alloca")==0){
				dbgs() << "yes"<< I->getName() <<"\n";
				//dbgs() << I->getPointerOperand() << "\n";
				//Value* v = I->get();
  				//StringRef name = v->getName();
				st << "bit<";
				//DataLayout* TD = new DataLayout(M);

				//int temp2 = TD->getTypeAllocSize(I->getType());
				//dbgs()<< "AllocSize : " << temp2  << "\n";
 				int val = getIndex(I->getType());
 				st << val << "> ";
 	
 				string str;
				Instruction *ii = &*I;
				llvm::raw_string_ostream rso(str);
				ii->print(rso);
				cout << "str "<< str <<endl;
				string a= ""; 
				int i=3;
				while(str[i] != ' ')
				{   
				       a += str[i];
				       i++;
				}   
				st << a << ";" << endl;
					//cout << "Val " << val << endl;

			}
			if (I->getOpcodeName()[0]=='i')
				cout << "no"<<endl;	
		}
		
		return false;
	}
};
}
char demo::ID = 'a';
static RegisterPass<demo> X("ReversePass","Reverse LLVM IR to P4 Pass");
