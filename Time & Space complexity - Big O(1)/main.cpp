#include <iostream>


// Big O(1) Constant Time Function
// No matter what is the length of the string, it will always take 1 step to get the last char

char GetLastChar( std::string& line) {
	if (line.empty()) {
		return '\0';
	}
	return line[line.length() - 1];
}

int main() {

	std::string word = "Jinx";

	char LastChar = GetLastChar(word);

	std::cout << LastChar << std::endl;

	return 0;
}