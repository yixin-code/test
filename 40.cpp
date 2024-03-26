#include <iostream>
#include <string.h>
#include <fstream>
#include <assert.h>

int main() {
    FILE *fp = fopen("test", "r");
    assert(fp != nullptr);

    char buf[1024] = {0};
    fgets(buf, sizeof(buf), fp);
    std::cout << "[" << buf << "]" << std::endl;

    fclose(fp);

    std::cout << "-----------------cpp-----------------" << std::endl;

    std::ifstream fin("test");
    assert(fin.is_open());

    memset(buf, 0, sizeof(buf));
    fin.getline(buf, sizeof(buf));
    std::cout << "[" << buf << "]" << std::endl;

    fin.close();

    return 0;
}