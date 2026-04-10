#include <iostream>
#include <queue>


int main() {

	std::queue<int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);


	std::cout << "Count = " << MyQueue.size() << std::endl;
	std::cout << "Front = " << MyQueue.front() << std::endl;
	std::cout << "Back = " << MyQueue.back() << std::endl;

	
	while (!MyQueue.empty()) {
		std::cout << MyQueue.front() << std::endl;

		MyQueue.pop();
	}
	return 0;
}