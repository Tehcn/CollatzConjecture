#pragma once
#include "Node.h"
#include <vector>

class LinkedList {
	Node* head = nullptr;
	Node* tail = nullptr;
	std::vector<Node*> NodeList {};
	size_t nodes = NodeList.size();
	public:
		void Add(int data);
		int IndexGet(int index);
		Node* Search(int lookup, int start=0);
		LinkedList();
		~LinkedList();
};