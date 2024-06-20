#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {
    int fd = open(argv[1], O_CREAT | O_RDWR, 0644);
    close(fd);
    close(fd);

    int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    close(socket_fd);
    close(socket_fd);

    return 0;
}