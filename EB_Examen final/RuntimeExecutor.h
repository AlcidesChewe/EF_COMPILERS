#ifndef RUNTIMEEXECUTOR_H
#define RUNTIMEEXECUTOR_H

#include "llvm/ExecutionEngine/ExecutionEngine.h"

class RuntimeExecutor {
public:
    void execute(llvm::Module* module);
};

#endif // RUNTIMEEXECUTOR_H
