#include "Node.h"

Node::Node(int data) {
	this->SetData(data);
}

Node::~Node() {
	delete this->next;
}

void Node::SetNext(Node* node) {
	this->next = node;
}

void Node::SetPrev(Node* node) {
	this->prev = node;
}

void Node::SetData(int data) {
	this->data = data;
}

int Node::GetData(void) {
	if (this != nullptr) {
		return this->data;
	}
	else {
		return -1;
	}
}

Node* Node::GetNext(void) {
	if (this != nullptr) {
		return this->next;
	}
	else {
		return nullptr;
	}
}

Node* Node::GetPrev(void) {
	if (this != nullptr) {
		return this->prev;
	}
	else {
		return nullptr;
	}
}