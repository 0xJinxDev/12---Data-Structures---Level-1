#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {

	map <string, int> studentsGrades;

	studentsGrades["Jinx"] = 90;
	studentsGrades["Minerva"] = 85;
	studentsGrades["Hamo"] = 99;

	for (auto& pair : studentsGrades) {
		cout << "Student Name : " << pair.first << " Grade : " << pair.second << endl;
	}

	string studentName = "Jinx";
	if (studentsGrades.find(studentName) != studentsGrades.end()) {
		cout << studentName << "'s grade: " << studentsGrades[studentName] << endl;
	}
	else {
		cout << "Grade not found for " << studentName << endl;
	}
	return 0;
}