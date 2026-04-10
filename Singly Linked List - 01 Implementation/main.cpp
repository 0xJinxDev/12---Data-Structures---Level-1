#include <iostream>


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

void DeleteLinkedList(Node* &Head) {
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
int main() {

	Node* Head = nullptr;

	Node* Node1 = nullptr;
	Node* Node2 = nullptr;
	Node* Node3 = nullptr;


	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->value = 1;
	Node2->value = 2;
	Node3->value = 3;

	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = NULL;

	Head = Node1;


	PrintLinkedList(Head);
	DeleteLinkedList(Head);

	return 0;
}