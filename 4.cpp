#include <iostream>

class A {
public:
    A() = default;

    void display() {
        std::cout << "m_c_num: " << m_c_num
        << ", num = " << m_num
        << ", num2 = " << m_num2
        << ", num3 = " << m_num3
        << "\n";
    }

private:
    const int m_c_num = 11;
    int m_num;
    int m_num2;
    int m_num3;
};

int main() {
    A a;
    a.display();

    return 0;
}