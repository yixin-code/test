#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 mt(rd());

    std::uniform_int_distribution<> dis(1, 3);

    for (int i = 0; i < 10; ++i) {
        std::cout << dis(mt) << " ";
    }
    std::cout << '\n';

    return 0;
}
