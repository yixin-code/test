#include <iostream>
#include <string.h>

int main() {
    char buf[1024] = {0};
    char buf2[] = "asdf";
    strcat(buf, buf2);

    std::cout << buf << std::endl;

    return 0;
}