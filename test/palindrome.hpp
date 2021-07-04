#include <iostream>

bool IsPalindrome(int x) {
    if (x < 0) return false;
    std::string palindrome = std::to_string(x);
    for (int i = 0; i < palindrome.length() / 2; i++) {
        if (palindrome[i] != palindrome[palindrome.size() - i - 1])
            return false;
    }
    return true;
}
