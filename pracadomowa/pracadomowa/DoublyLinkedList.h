#pragma once
#include "DoubleNode.h"
class DoublyLinkedList
{
private:
	DoubleNode *head;
	DoubleNode *tail;
	int length;
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	void pushback(int element);
	void popback();
	void pushfront(int element);
	void popfront();
	bool isempty();
	int size();
	int front();
	int back();
};

