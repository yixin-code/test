#include <iostream>
#include <string.h>

int main() {
    char buf[] = "abcdefghijk";
    char buf2[1024] = "243124324324";
    char *p = strchr(buf, 'e');
    strncpy(buf2, buf, p - buf);
    buf2[p - buf] = 0;
    std::cout << buf2 << std::endl; // abcd

    return 0;
}