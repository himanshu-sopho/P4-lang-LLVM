# Dependencies for CMake :
1. All antlr and LLVM libraries should be in /usr/local/lib
2. Also the include files should be present in /usr/local/include/
# Using CMake :
1. Go to the source repository.
2. mkdir build;cd build
3. cmake ../
4. This creates an executable in build folder named "codegen".


# P4-lang-LLVM(without CMake)

1. Put all the header files and test.cpp in a project directory .
2. Build the project .
3. Run it.
4. From there you will get an IR for the statements where all typedef declarations are replaced by the actual type of the typedefed datatype.
5. Copy this IR to a .ll file .
6. Now for running the pass over this file follow the following steps :-
7. Go to the directory where you have built llvm from source.
8. If you don't have llvm built from the source , please build it . Follow the following steps :

            cd /directory/where/you/want/to/build/llvm
            git clone https://llvm.org/git/llvm.git
            cd llvm && mkdir build && cd build
            cmake ../
            make
            make install
            Either do make install after make or export the path of llvm binaries.
            
            
9. Now go to the directory /llvm/lib/Transforms/ .
10. Make a folder named ReversePass (feel free to use other names of your choice.)
11. Add the name of the folder in the current directory's ("/llvm/lib/Transforms" ) CMakeLists.txt file . Add the following line to add the name of this folder into it. 
             add_subdirectory(ReversePass)
             
12. Now add the pass file i.e. file1.cpp into the ReversePass folder. 
13. Add the CMakeList.txt file provided in the ReversePass folder.

# Build Your Pass . 
Follow the following steps :
    
            $ cd $LLVM_BUILD
            $ cmake $LLVM_SRC -DCMAKE_BUILD_TYPE=Debug
            $ ninja -j8 opt ReversePass
            $ cd lib
            $ ls
          Analysis/ AsmParser/ Bitcode/ BugpointPasses.so* clang/ cmake/ CMakeFiles/ cmake_install.cmake CodeGen/ DebugInfo/ ReversePass.so* ExecutionEngine/ Fuzzer/ IR/ IRReader/ ... 
  
  If you don't have ninja installed use make.
  Mac users may find ReversePass.dylib as the dynamic library instead of .so .
  
 # Run your pass 
 Again go to the llvm/build directory and use the following command to run the pass.
 
             $ opt -load $LLVM_BUILD/lib/ReversePass.so -ReversePass filename.ll
    
          
