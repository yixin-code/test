#include <iostream>  
#include <vector>  
  
using namespace std;  
  
void josephus(int n, int m) {  // n个人，第m清除
    vector<int> people(n);  
    for (int i = 0; i < n; i++) {  
        people[i] = i + 1; // 初始化人的编号  
    }  
    int index = 0; // 当前报数的人的下标  
    while (people.size() > 0) {  
        for (int i = 0; i < m - 1; i++) { // 报数到m-1  
            index = (index + 1) % people.size(); // 计算下一个人的下标  
        }  
        cout << "出列的人编号：" << people[index] << endl;  
        people.erase(people.begin() + index); // 移除出列的人  
        // index = (index) % people.size(); // 更新当前报数的人的下标  
    }  
}  
  
int main() {  
    int n, m;  
    cout << "请输入总人数n和报数m：";  
    cin >> n >> m;  
    josephus(n, m);  

    std::cout << "main endl" << std::endl;
    return 0;  
}