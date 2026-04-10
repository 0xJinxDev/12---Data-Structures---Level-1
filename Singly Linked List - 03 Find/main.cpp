#include <iostream>
#include <string>

class Node {

public:
	int value;
	Node* Next;
};

void PrintLinkedList(Node* Head) {
	while (Head) {
		std::cout << Head->value << std::endl;
		Head = Head->Next;
	}
}

void DeleteLinkedList(Node*& Head) {
	Node* temp;
	while (Head) {
		temp = Head;
		Head = Head->Next;
		delete temp;
	}
}

void InsertAtBeginning(Node*& Head, int value) {

	Node* newNode = new Node();
	newNode->value = value;
	newNode->Next = Head;

	Head = newNode;
}

Node* Find(Node* Head, int value) {

	while (Head) {
		if (Head->value == value)
		return Head;
		Head = Head->Next;
	}
	return nullptr;
}

int main() {
	Node* Head = nullptr;

	InsertAtBeginning(Head, 1);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 5);

	
	PrintLinkedList(Head);

	Node* Result = Find(Head, 3);

	std::cout << (Result ? ("Found: " + std::to_string(Result->value)) : "Not found");
	DeleteLinkedList(Head);

	return 0;
}