#include <iostream>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::cout << "Input: n = 2\nOutput: " << fibonacci(2) << std::endl;
    std::cout << "Input: n = 3\nOutput: " << fibonacci(3) << std::endl;
    std::cout << "Input: n = 4\nOutput: " << fibonacci(4) << std::endl;

    return 0;
}
