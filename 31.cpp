#include <iostream>
#include <list>

int main() {
    std::list<int> l {1, 2, 3, 4, 5};
    std::list<int>::iterator it = l.begin();

    it = l.erase(it);
    std::cout << *it << std::endl;

    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 2
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 3
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 4
    // std::advance(it, 1);
    // std::cout << *it << std::endl; //5
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 5
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 1
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 2

    // it = std::next(it);
    // std::cout << *it << std::endl;

    // auto it2 = l.erase(it);
    // // std::cout << it2 << std::endl;
    // std::cout << *it << std::endl;
    // std::cout << *it2 << std::endl;


    // std::cout << *it << std::endl;
    // std::list<int> l(3);
    // std::cout << l.size() << std::endl; // 3
    // std::advance(it, 1);
    // std::cout << *it << std::endl; // 1
    // std::list<int>::iterator it2 = std::next(it, 1); // 返回新的迭代器
    // std::cout << *it2 << std::endl; // 2
    // std::advance(it2, -1);
    // std::cout << *it2 << std::endl; // 1

    // std::cout << *it << std::endl; // 5
    // std::cout << *(++it) << std::endl; // 1
    // std::cout << *(++it) << std::endl; // 2
    // std::cout << *(++it) << std::endl; // 3

    return 0;
}