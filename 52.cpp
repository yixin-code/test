#include <iostream>

int main() {
    char *p = new char[11]{'1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', '\0'};
    // char *p = new char[11]{0};

    std::cout << p << '\n';

    for (int i = 0; i < 11; ++i) {
        std::cout << '[' << p[i] << ']';
    }
    std::cout << '\n';

    delete[] p;

    return 0;
}