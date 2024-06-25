#include <iostream>
#include <string.h>

int main() {
    FILE *fp = fopen("./76", "w+");
    fputs("     asd    \n", fp);
    char buf[1024] = "bbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    fseek(fp, 0, SEEK_SET);
    fgets(buf, 1024, fp);
    std::cout << "[" << buf << "]";
    if (isspace(*buf)) {
        std::cout << "*buf is space" << std::endl;
    }
    // char buf[1024] = {0};
    // char buf2[] = "asdf";
    // strcat(buf, buf2);

    // std::cout << buf << std::endl;

    return 0;
}