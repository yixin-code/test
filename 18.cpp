#include <iostream>
#include <unistd.h>

int main() {
    int num = sleep(10);
    while (num) {
        std::cout << num << std::endl;
    }

    return 0;
}