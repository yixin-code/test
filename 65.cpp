#include <unistd.h>
#include <iostream>

int main(int argc, char *argv[]) {
    // char buf[10] = {0};
    // int count = read(STDIN_FILENO, buf, sizeof(buf));
    // write(STDOUT_FILENO, buf, count);
    int num = 0;
    std::cout << ~num << std::endl;

    return 0;
}