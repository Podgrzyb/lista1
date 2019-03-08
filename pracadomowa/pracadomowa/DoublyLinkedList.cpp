#include "pch.h"
#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList()
{
	head = nullptr;
	tail = nullptr;
	length = 0;
}


DoublyLinkedList::~DoublyLinkedList()
{
}

void DoublyLinkedList::pushback(int element)
{
	length++;
	DoubleNode *added = new DoubleNode;
	added->liczba = element;
	added->next = nullptr;
	if (head == nullptr)
	{
		head = added;
		tail = added;
		
	}
	else
	{
		added->prev = tail;
		tail->next = added;
		tail = added;
	}
}

void DoublyLinkedList::popback()
{
	length--;
	DoubleNode *temp = new DoubleNode;
	temp = tail;
	tail = tail->prev;
	delete temp;
}

void DoublyLinkedList::pushfront(int element)
{
	length++;
	DoubleNode *added = new DoubleNode;
	added->liczba = element;
	added->next = nullptr;
	if (head == nullptr)
	{
		head = added;
		tail = added;
	}
	else
	{
		added->next = head;
		head->prev = added;
		head = added;
	}

}

void DoublyLinkedList::popfront()
{
	length--;
	DoubleNode *temp = new DoubleNode;
	temp = head;
	head = head->next;
	head->prev = nullptr;
	delete temp;
}

bool DoublyLinkedList::isempty()
{
	if (head = nullptr)
		return true;
	else
		return false;
}

int DoublyLinkedList::size()
{
	return length;
}

int DoublyLinkedList::front()
{
	return head->liczba;
}

int DoublyLinkedList::back()
{
	return tail->liczba;
}