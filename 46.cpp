#include <iostream>

class CStudent {
public:
    CStudent() {
        std::cout << "CStudent() {\n";
    }
};

int main() {
    CStudent *p = new CStudent;

    return 0;
}