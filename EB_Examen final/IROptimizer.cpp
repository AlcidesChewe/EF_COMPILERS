#include "IROptimizer.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Utils.h"

void IROptimizer::optimize(llvm::Module* module) {
    llvm::legacy::PassManager passManager;

    passManager.add(llvm::createPromoteMemoryToRegisterPass()); // Promocionar memoria a registro
    passManager.add(llvm::createInstructionCombiningPass());     // Combinar instrucciones
    passManager.add(llvm::createReassociatePass());              // Reasociar expresiones
    passManager.add(llvm::createGVNPass());                      // Eliminación de valores redundantes globales
    passManager.add(llvm::createCFGSimplificationPass());        // Simplificación de CFG

    passManager.run(*module);
}
