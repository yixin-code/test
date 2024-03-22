#include <iostream>

int main() {
    FILE *fp_read = fopen("test", "r");

    // char buf[1024] = {0};

    // char *temp = fgets(buf, 1024, fp_read);

    // std::cout << temp;
    // std::cout << "你好 世界" << std::endl;

    char buf[1024] = {0};
    fscanf(fp_read, "%s", buf);

    std::cout << buf;
    return 0;
}