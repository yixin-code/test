#include <iostream>
#include <string.h>
#include <assert.h>
#include <fstream>

int main() {
    FILE *fp = fopen("test", "r");
    assert(fp != nullptr);

    char buf[1024] = {0};
    if (fgets(buf, sizeof(buf), fp)) {
        std::cout << "read success" << std::endl;
    }
    std::cout << "[" << buf << "]" << std::endl;
    std::cout << int(*buf) << std::endl;
    if (isspace(*buf)) {
        std::cout << "is space" << std::endl;
    }
    std::cout << strlen(buf) << std::endl;

    fclose(fp);

    std::cout << "----------------cpp----------------" << std::endl;

    std::ifstream fin("test");
    assert(fin.is_open());

    memset(buf, 0, sizeof(buf));
    if (fin.getline(buf, sizeof(buf))) {
        std::cout << "read success" << std::endl;
    }
    std::cout << "[" << buf << "]" << std::endl;
    std::cout << int(*buf) << std::endl;
    if (isspace(*buf)) {
        std::cout << "is space" << std::endl;
    }
    std::cout << strlen(buf) << std::endl;

    fin.close();

    return 0;
}