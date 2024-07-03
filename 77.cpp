#include <iostream>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

constexpr int POST = 8354;

int main(int argc, char *argv[]) {
    int linsten_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (linsten_fd == -1) {
        perror("listen fail");
        exit(1);
    }

    struct sockaddr_in server_addr;

    memset(&server_addr, 0, sizeof(server_addr));

    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_family      = AF_INET;
    server_addr.sin_port        = htons(POST);

    if (bind(linsten_fd, (sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("bind fail");
        exit(1);
    }

    if (listen(linsten_fd, 5) == -1) {
        perror("listen fail");
        exit(1);
    }

    struct sockaddr_in  client_addr;
    memset(&client_addr, 0, sizeof(client_addr));

    int                 connect_fd = 0;
    socklen_t           client_addr_len = sizeof(client_addr);
    char                buf[2048]   = {0};

    connect_fd = accept(linsten_fd, (sockaddr*)&client_addr, &client_addr_len);

    std::cout << inet_ntop(AF_INET, &client_addr.sin_addr, buf, 16) << "\n";

    memset(buf, 0, sizeof(buf));

    if (connect_fd == -1) {
        perror("accpet fail");
        exit(1);
    }

    int count = 0;

    if ((count = read(connect_fd, buf, sizeof(buf))) == -1) {
        perror("read fail");
        exit(1);
    }

    write(STDOUT_FILENO, buf, count);

    std::cout << "main end\n";

    return 0;
}