#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
    umask(0);
    int fd = open("test.txt", O_WRONLY | O_CREAT, 0777);
    if (fd == -1) {
        perror("2, open");
        exit(1);
    }

    return 0;
}