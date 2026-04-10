#include <queue>
#include <iostream>

int main()
{
    std::queue<int> MyQueue1;
    std::queue<int> MyQueue2;

    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    MyQueue1.swap(MyQueue2);

    std::cout << "MyQueue1 = ";
    while (!MyQueue1.empty()) {
        std::cout << MyQueue1.front() << " ";
        MyQueue1.pop();
    }

    std::cout << std::endl << "MyQueue2 = ";
    while (!MyQueue2.empty()) {
        std::cout << MyQueue2.front() << " ";
        MyQueue2.pop();
    }


    return 0;


}