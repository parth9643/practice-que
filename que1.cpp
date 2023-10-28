#include <iostream>
#include <string>

class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        int count = 0;
        std::string temp = "";
        for (char i : s) {
            if (i == '(' && count == 0) {
                count++;
            } else if (i == '(' && count >= 1) {
                temp += i;
                count++;
            } else if (i == ')' && count > 1) {
                temp += i;
                count--;
            } else if (i == ')' && count == 1) {
                count--;
            }
        }
        return temp;
    }
};

int main() {
    std::string input;
    std::cout << "Enter a string containing parentheses: ";
    std::cin >> input;

    Solution solution;
    std::string result = solution.removeOuterParentheses(input);

    std::cout << "After removing outer parentheses: " << result << std::endl;

    return 0;
}
