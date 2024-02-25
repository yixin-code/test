#include <iostream>

class A {
public:
    void display() {
        std::cout << "m_c_num: " << m_c_num << "\n";
    }

private:
    const int m_c_num = 11;
};

int main() {
    A a;
    a.display();

    return 0;
}