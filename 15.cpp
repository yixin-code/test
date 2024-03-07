#include <iostream>

int main() {
    int num = 0;
    char ch = ' ';
    scanf("%d", &num);
    scanf("%*c");
    scanf("%c", &ch);

    std::cout << "num: " << num << '\n';
    std::cout << "ch: " << '[' << ch << ']' << "\n";

    return 0;
}