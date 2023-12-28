#include <iostream>

void reverseString(const std::string& str, int index = 0) {
    if (index == str.length()) {
        return;
    }

    reverseString(str, index + 1);
    std::cout << str[index];
}

int main() {
    std::string input = "tiger";
    reverseString(input);
    return 0;
}