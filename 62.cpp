#include <iostream>
#include <fcntl.h> // open
#include <unistd.h> // write, close

int main() {
    int fd = open("62.txt", O_WRONLY | O_CREAT); // 用户读写执行
    if (fd == -1) {
        perror("7, open");
        exit(1);
    }

    write(fd, "asd", 3);

    close(fd);

    return 0;
}