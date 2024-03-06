#include <iostream>

int num = 11;
void func();

int main() {
    func();

    std::cout << "num: " << num << std::endl;
    std::cout << "main end" << std::endl;

    return 0;
}

void func() {
    std::cout << "func start" << std::endl;
    static int num2 = 22;
    std::cout << "num2: " << num2 << std::endl;
}