#include <iostream>

constexpr int func(int num) {
    return num * num;
}

int main() {
    int num = 2;
    int num2 = func(num);
    std::cout << num2 << "\n";

    return 0;
}