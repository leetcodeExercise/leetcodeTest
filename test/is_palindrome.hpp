#include <iostream>

bool isPalindrome(int x) {
    if (x<0) return false;
    std::string Palindrome = std::to_string(x);
    int i = 0;
    while (i < Palindrome.size()/2) {
        if (Palindrome[i] != Palindrome[Palindrome.size() - i - 1])
            return false;
            i++;
    }
    return true;

}
