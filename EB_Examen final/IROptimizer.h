#ifndef IROPTIMIZER_H
#define IROPTIMIZER_H

#include "llvm/IR/PassManager.h"

class IROptimizer {
public:
    llvm::legacy::PassManager passManager;

    void optimize(llvm::Module* module);
};

#endif // IROPTIMIZER_H
