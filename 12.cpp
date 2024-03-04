#include <iostream>
#include <unistd.h>

int main() {
    while (true) {
        std::cout << "sleep\n";
        sleep(1);
    }

    return 0;
}
