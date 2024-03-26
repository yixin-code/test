#include <iostream>
#include <string.h>
#include <fstream>
#include <assert.h>

int main() {
    FILE *fp = fopen("./test", "w+");
    assert(fp != nullptr);

    fputs("sfjkladjfdsljfl\n", fp);
    fputs("sfjkladjljfl\n", fp);
    fputs("sfjkladjfdsljfl\n", fp);
    fputs("sfjkladjjfl", fp);

    fseek(fp, 0, SEEK_SET);

    char buf[1024] = {0};
    while (feof(fp) != EOF) {
        fgets(buf, sizeof(buf), fp);
        std::cout << buf;
        memset(buf, 0, sizeof(buf));
    }

    fclose(fp);

    return 0;
}