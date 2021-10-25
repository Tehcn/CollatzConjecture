#include "Print.h"
#include "LinkedList.h"
#include "Node.h"

int main(void) {
	// testing the doubly linked list implementation real quick!
	// create a new list
	LinkedList* list = new LinkedList();
	list->Add(4);
	print("Added data '4' at index '0'");
	list->Add(2);
	print("Added data '2' at index '1'");
	list->Add(1);
	print("Added data '1' at index '2'");

	print("Searching for node with data '2'");
	Node* node = list->Search(2);
	print("Found node with data '2' at index '1'");

	print(node->GetData());

	return 0;
}