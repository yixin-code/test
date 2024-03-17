#include <iostream>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("./test.txt", O_RDWR | O_APPEND);
    // std::cout << fd << std::endl;
    // dup2(fd, STDIN_FILENO);
    // std::cout << fd << std::endl;
    // dup2(fd, STDOUT_FILENO);
    // std::cout << "hello cpp" << std::endl;
    std::cout << fd << std::endl;
    close(fd);
    std::cout << fd << std::endl;

    return 0;
}