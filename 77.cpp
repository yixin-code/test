#include <iostream>
#include <sys/socket.h>

int main(int argc, char *argv) {
    int linsten_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (linsten_fd == -1) {
        
    }


    return 0;
}