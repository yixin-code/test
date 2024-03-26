#include <iostream>
#include <fstream>

int main()
{
    // char buf[] = {0};
    // *buf = '\0';

    // if (0 == '\0')
    // {
    //     std::cout << "1, success" << std::endl;
    // }

    // if (isspace(*buf)) {
    //     std::cout << "2, success" << std::endl;
    // }

    FILE *fp = fopen("test", "r");
    if (fp == nullptr) {
        perror("19, fopen error");
        exit(1);
    }

    char buf[1024] = {0};
    fgets(buf, sizeof(buf), fp);

    std::cout << "[" << buf << "]";
    if (buf[0] == 0) {
        std::cout << "success" << std::endl;
    }
    // while (fgets(buf, sizeof(buf), fp)) {
    //     std::cout << "[" << buf << "]";
    //     if (buf[0] == 0) {
    //         std::cout << "success" << std::endl;
    //     }
    // }

    // fclose(fp);

    // char buf[] = {0};
    // if (buf[0] == 0) {
    //     std::cout << "success" << std::endl;
    // }

    // std::ifstream fin("test");
    // if (!fin.is_open()) {
    //     perror("41, fin error");
    //     exit(1);
    // }

    // char buf[1024] = {0};
    // while (fin.getline(buf, sizeof(buf))) {
    //     std::cout << buf << std::endl;
    //     // if (buf[0] == 0) {
    //     //     std::cout << "success" << std::endl;
    //     // }
    // }

    // fin.close();

    return 0;
}