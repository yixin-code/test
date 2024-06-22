// #include <iostream>
// #include <unistd.h>
// #include <fcntl.h>
// #include <sys/socket.h>

// int main(int argc, char *argv[]) {
//     int fd = open(argv[1], O_CREAT | O_RDWR, 0644);
//     close(fd);
//     close(fd);

//     int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
//     close(socket_fd);
//     close(socket_fd);

//     return 0;
// }
#include <vector>  
#include <iostream>  
  
class MyClass {  
public:  
    MyClass() {  
        std::cout << "MyClass constructor\n";  
    }  
  
    ~MyClass() {  
        std::cout << "MyClass destructor\n";  
    }  
};  
  
class ContainerClass {  
private:  
    std::vector<MyClass> myVector;  
  
public:  
    ContainerClass() {  
        std::cout << "ContainerClass constructor\n";  
        myVector.push_back(MyClass());  
        myVector.push_back(MyClass());  
    }  
  
    ~ContainerClass() {  
        std::cout << "ContainerClass destructor\n";  
        // 不需要显式销毁 myVector，它会在析构时自动销毁  
    }  
};  
  
int main() {  
    ContainerClass cc;  
    return 0;  
}