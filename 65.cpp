#include <unistd.h>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    std::fstream fio("65.txt", std::ios::in | std::ios::out);
    if (!fio.is_open()) {
        perror("fio");
        exit(1);
    }
    fio << "abc";
    fio.close();
    // char buf[10] = {0};
    // int count = read(STDIN_FILENO, buf, sizeof(buf));
    // write(STDOUT_FILENO, buf, count);
    // int num = 0;
    // std::cout << ~num << std::endl;

    // return 0;
    // exit(-1);
    return 0;
}