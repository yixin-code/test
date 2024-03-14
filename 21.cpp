#include <iostream>
#include <unistd.h>

int main() {
    std::cout << sysconf(_SC_CHILD_MAX) << std::endl;

    return 0;
}