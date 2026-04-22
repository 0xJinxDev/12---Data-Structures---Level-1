#include <iostream>


class Node {

public:
	int value;
	Node* Next;
	Node* Previous;

};

void PrintLinkedList(Node* Head) {

	while (Head) {
		std::cout << Head->value << std::endl;
		Head = Head->Next;
	}
}


void InsertAtBeginning(Node*& Head, int value) {

	Node* newNode = new Node();
	newNode->value = value;
	newNode->Previous = nullptr;
	newNode->Next = Head;

	if (Head)
		Head->Previous = newNode;
	Head = newNode;

}

Node* FindNode(Node* Head, int value) {
	if (!Head)
		return nullptr;

	while (Head) {
		if (Head->value == value)
			return Head;
		Head = Head->Next;
	}

	return nullptr;
}

bool InsertAfter(Node* PreviousNode, int value) {

	if (!PreviousNode)
		return false;

	Node* newNode = new Node();
	newNode->value = value;
	newNode->Previous = PreviousNode;
	newNode->Next = PreviousNode->Next;

	if (PreviousNode->Next)
		PreviousNode->Next->Previous = newNode;
	PreviousNode->Next = newNode;
	return true;


}


void DeleteNodes(Node*& Head) {

	while (Head) {
		Node* tmp = Head;
		Head = Head->Next;
		delete tmp;
	}
}
int main() {

	Node* Head = nullptr;

	InsertAtBeginning(Head, 1);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 5);

	Node* N1 = FindNode(Head, 3);

	InsertAfter(N1, 10);

	PrintLinkedList(Head);
	DeleteNodes(Head);
}