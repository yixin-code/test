#include <iostream>
#include <string.h>

int main(int argc, char *argv[]) {
    char buf[1024] = {0};
    for (int i = 0; i < argc; ++i) {
        strcat(buf, argv[i]);
    }
    std::cout << buf << "\n";

    return 0;
}