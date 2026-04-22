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

	Node1->Previous = nullptr;
	Node1->Next = Node2;
	
	Node2->Previous = Node1;
	Node2->Next = Node3;

	Node3->Previous = Node2;
	Node3->Next = nullptr;

	Head = Node1;

	PrintLinkedList(Head);
	

}