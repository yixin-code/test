#include <iostream>

bool is_power_of_two(int num) {
    return (num & (num - 1)) == 0;
}

int main() {
    if (is_power_of_two(8)) {
        std::cout << "yes" << std::endl;
    }

    return 0;
}