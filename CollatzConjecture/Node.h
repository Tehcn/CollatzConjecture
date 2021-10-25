#pragma once
class Node
{
	int data = -1;
	Node* prev;
	Node* next;
	
	public:
		void SetNext(Node* node);
		void SetPrev(Node* node);
		void SetData(int data);
		int GetData(void);
		Node* GetNext(void);
		Node* GetPrev(void);
		Node(int data);
		~Node();
};

