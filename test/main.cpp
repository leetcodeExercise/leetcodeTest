#include <iostream>

#include "math.hpp"

int main(int argc, const char* argv[]) {
    for (int i = 1; i < argc; i++) {
        std::cout << argv[i] << "\t" << Square(std::stoi(argv[i])) << std::endl;
    }
    
    return 0;
}