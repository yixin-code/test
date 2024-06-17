#include <iostream>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // for (int i = 0; i < 11; ++i) {
    //     std::cout << i << std::endl;
    // }
    int fd = open("72.txt", O_CREAT | O_RDWR, 0664);
    write(fd, "123456789", 9);
    lseek(fd, 0, SEEK_SET);
    char ch = 0;
    read(fd, &ch, 1);
    std::cout << ch << std::endl;
    lseek(fd, 0, SEEK_END);
    if (read(fd, &ch, 1) == 0) {
        std::cout << "read fail" << std::endl;
    }
    std::cout << ch << std::endl;

    return 0;
}