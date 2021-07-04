#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {

public:
    Solution();
    int RomanToInt(std::string s) {
        int x = 0;
        for (int i = 0; i < s.length(); i++) {
            int value = roma_[s[i]];
            (value < roma_[s[i+1]]) && (i < s.length() - 1) ? 
                x = x - value : x = x + value;
        }
    }

private:
    std::unordered_map<char, int> roma_ = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
};
