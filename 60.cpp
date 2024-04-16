#include <iostream>
#include <cstring>
#include <arpa/inet.h>

int main() {
    int num = 0x12345678;
    std::cout << std::hex << num << '\n'; // 12345678
    num = htonl(num); // 主机字节序转为网络字节序
    std::cout << std::hex << num << '\n'; // 78563421

    // int num = 11;
    // printf("[%3d]\n", num);
    // char buf[1024] = "abcdefghi";
    // char *p = (char*)memcpy(buf, "1234", strlen("1234"));
    // std::cout << p << '\n'; // 1234efghi

    return 0;
}