#include <iostream>


// Big O(n) Linear Time Function
// No matter what, it may take up to n steps depending on the string length

char GetLastChar(std::string& line) {
	if (line.empty()) {
		return '\0';
	}
	int n = line.length() - 1;

	for (int i = 0; i <= n; i++) {
		if (i == n)
			return line[i];
	}
}

int main() {

	std::string word = "Jinx";

	char LastChar = GetLastChar(word);

	std::cout << LastChar << std::endl;

	return 0;
}