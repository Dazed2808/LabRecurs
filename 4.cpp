#include <iostream>

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    std::cout << "Input: n = 2\nOutput: " << climbStairs(2) << std::endl;
    std::cout << "Input: n = 3\nOutput: " << climbStairs(3) << std::endl;

    return 0;
}
