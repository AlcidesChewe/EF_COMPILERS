#ifndef IRGENERATOR_H
#define IRGENERATOR_H

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"

class IRGenerator {
public:
    llvm::LLVMContext TheContext;
    llvm::IRBuilder<> Builder;
    std::unique_ptr<llvm::Module> TheModule;

    IRGenerator() : Builder(TheContext) {
        TheModule = std::make_unique<llvm::Module>("MiShellModule", TheContext);
    }

    void generate(antlr4::tree::ParseTree* tree);
};

#endif // IRGENERATOR_H
