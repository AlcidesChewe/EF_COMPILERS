#include "RuntimeExecutor.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/MCJIT.h"
#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Support/TargetSelect.h"

void RuntimeExecutor::execute(llvm::Module* module) {

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();

    std::string errStr;
    llvm::ExecutionEngine *executionEngine = llvm::EngineBuilder(std::unique_ptr<llvm::Module>(module)).setErrorStr(&errStr).create();

    if (!executionEngine) {
        llvm::errs() << "Failed to create ExecutionEngine: " << errStr << "\n";
        return;
    }

    llvm::Function *mainFunction = module->getFunction("main");

    if (!mainFunction) {
        llvm::errs() << "Function 'main' not found in module.\n";
        return;
    }

    // Ejecutar la función 'main'.
    llvm::GenericValue result = executionEngine->runFunction(mainFunction, {});
    llvm::outs() << "Execution completed. Result: " << result.IntVal << "\n";

    // La limpieza y liberación de recursos se manejan automáticamente por LLVM.
}
