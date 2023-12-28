#include <iostream>

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    return (n % 2 == 0) ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);
}

int main() {
    std::cout << "Input: x = 2.00000, n = 10\nOutput: " << myPow(2.00000, 10) << std::endl;
    std::cout << "Input: x = 2.10000, n = 3\nOutput: " << myPow(2.10000, 3) << std::endl;
    std::cout << "Input: x = 2.00000, n = -2\nOutput: " << myPow(2.00000, -2) << std::endl;

    return 0;
}
