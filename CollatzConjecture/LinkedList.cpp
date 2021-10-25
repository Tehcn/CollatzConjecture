#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList() {
	this->nodes = 0;
}

LinkedList::~LinkedList() {
	delete this->head;
}

void LinkedList::Add(int data) {
	Node* node = new Node(data);
	if (this->nodes == 0) {
		node->SetPrev(this->head);
		node->SetNext(new Node(-1));
		NodeList.push_back(node);
		nodes++;
		return;
	}

	node->SetPrev(NodeList.at(nodes));
	nodes++;
}

int LinkedList::IndexGet(int index) {
	return this->NodeList[index]->GetData();
}

Node* LinkedList::Search(int lookup, int start) {
	int index = -1;
	Node* currentNode = NodeList.at(start);
	
	while (index == -1) {
		if (currentNode->GetData() != lookup) {
			currentNode = currentNode->GetNext();
			continue;
		}
		break;
	}

	return currentNode;
}