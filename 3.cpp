#include <iostream>

class A
{
public:
    void func()
    {
        std::cout << "hello world\n";
    }
};

int main()
{
    A a;
    a.func();

    return 0;
}