#include <iostream>
#include <fcntl.h> // open
#include <unistd.h> // write, close
#include <string.h>
#include <errno.h>

int main() {
    // int fd = open("62.txt", O_WRONLY | O_CREAT, 0644); // 用户读写执行
    int fd = open("62.txt", O_WRONLY | O_CREAT); // 用户读写执行
    if (fd == -1) {
        std::cout << strerror(errno) << "\n";
        perror("7, open");
        exit(1);
    }

//    write(fd, "asd", 3);
//    write(fd, "qwe", 3);
    write(fd, "zxc", 3);

    close(fd);

    std::cout << "main end\n";

    return 0;
}
