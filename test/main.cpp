#include <iostream>

#include "math.hpp"
#include "int_to_string.hpp"
#include "palindrome.hpp"
#include "romaToInt.hpp"

int main(int argc, const char* argv[]) {
    for (int i = 1; i < argc; i++) {
        std::cout << argv[i] << "\t" << Square(std::stoi(argv[i])) << std::endl;
    }
    //toStringTest();
    int x;
    std::cin >> x ;
    std::cout << IsPalindrome(x) << std::endl;
    Solution roma;
    x = roma.RomanToInt("III");
    return x;
}
