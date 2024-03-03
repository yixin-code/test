#include <iostream>

int main () {
    float f = 1.123;
    double d = 1.123;

    if (f == 1.123f) {
        std::cout << "f == 1.123\n";
    }

    if (d == 1.123) {
        std::cout << "d == 1.123\n";
    }

    return 0;
}