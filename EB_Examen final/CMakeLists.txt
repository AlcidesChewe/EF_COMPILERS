cmake_minimum_required(VERSION 3.10)
project(MiShellCompiler)

set(CMAKE_CXX_STANDARD 17)

find_package(LLVM REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(MiShellCompiler main.cpp IRGenerator.cpp IROptimizer.cpp RuntimeExecutor.cpp)

llvm_map_components_to_libnames(llvm_libs support core irreader)

target_link_libraries(MiShellCompiler ${llvm_libs})
