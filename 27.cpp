#include <iostream>
#include <unistd.h>
#include <string.h>
// #include <sys/stat.h>

int main(int argc, char *argv[]) {
    write(STDOUT_FILENO, "hello world\n", strlen("hello world\n"));
    // mode_t old_umask = umask(0);
    // std::cout << std::oct << "old_umask: " << old_umask << std::endl;

    // int numm = 11;
    // std::cout << std::oct << "num: " << numm << std::endl;
    // std::cout << "num: " << numm << std::endl;
    // std::cout << std::dec << "num: " << numm << std::endl;

    return 0;
}