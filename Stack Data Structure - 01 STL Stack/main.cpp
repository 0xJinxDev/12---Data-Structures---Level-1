#include <iostream>
#include <stack>



int main() {

	std::stack <int> stkNumbers;

	stkNumbers.push(10);
	stkNumbers.push(20);
	stkNumbers.push(30);
	stkNumbers.push(40);
	stkNumbers.push(50);

	std::cout << "Count = " << stkNumbers.size() << std::endl;

	while (!stkNumbers.empty()) {

		std::cout << stkNumbers.top() << std::endl;
		stkNumbers.pop();
	}

	return 0;
}