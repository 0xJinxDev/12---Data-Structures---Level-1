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

bool InsertAfter(Node* PreviousNode, int Value) {

	if (!PreviousNode)
		return false;

	Node* newNode = new Node();
	newNode->value = Value;
	newNode->Next = PreviousNode->Next;
	PreviousNode->Next = newNode;

	return true;
}

void InsertAtEnd(Node*& Head, int Value) {


	Node* NewNode = new Node();
	NewNode->value = Value;
	NewNode->Next = nullptr;
	if (!Head) {
		Head = NewNode;
		return;
	}

	Node* LastNode = Head;
	while (LastNode->Next) {
		LastNode = LastNode->Next;
	}
	LastNode->Next = NewNode;


}

void DeleteNode(Node*& Head, int value) {

	if (!Head)
		return;

	Node* Previous = Head, * Current = Head;

	if (Current->value == value) {
		Head = Current->Next;
		delete Current;
		return;
	}

	while (Current && Current->value != value) {
		Previous = Current;
		Current = Current->Next;

	}

	if (!Current)
		return;
	Previous->Next = Current->Next;
	delete Current;

}

void DeleteFirstNode(Node*& Head) {

	if (!Head)
		return;

	Node* temp = Head;
	Head = Head->Next;
	delete temp;

}
int main() {
	Node* Head = nullptr;

	InsertAtBeginning(Head, 1);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 5);
	InsertAtEnd(Head, 0);
	DeleteFirstNode(Head);
	PrintLinkedList(Head);


	DeleteLinkedList(Head);

	return 0;
}