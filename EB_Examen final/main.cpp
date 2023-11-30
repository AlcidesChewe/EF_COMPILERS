#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "MiShellLexer.h"
#include "MiShellParser.h"

int main(int argc, const char* args[]) {
    if (argc < 2) {
        std::cerr << "Usage: MiShellCompiler <script.mish>" << std::endl;
        return -1;
    }

    std::ifstream stream;
    stream.open(args[1]);
    if (!stream) {
        std::cerr << "Could not open file: " << args[1] << std::endl;
        return -1;
    }

    antlr4::ANTLRInputStream input(stream);

    MiShellLexer lexer(&input);

    antlr4::CommonTokenStream tokens(&lexer);

    MiShellParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.program();

    std::cout << tree->toStringTree(&parser) << std::endl;

 
    stream.close();

    return 0;
}
