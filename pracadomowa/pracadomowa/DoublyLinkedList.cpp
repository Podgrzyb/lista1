#include "pch.h"
#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

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
	if (isempty())
	{
		cout << "Lista jest pusta" << endl;
	}
	else
	{
		length--;
		DoubleNode *temp = new DoubleNode;
		temp = tail;
		tail = tail->prev;
		tail->next = nullptr;
		delete temp;
	}
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
	if (isempty())
	{
		cout << "Lista jest pusta" << endl;
	}
	else
	{
		length--;
		DoubleNode *temp = new DoubleNode;
		temp = head;
		head = head->next;
		head->prev = nullptr;
		delete temp;
	}
}

bool DoublyLinkedList::isempty()
{
	if (length==0)
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

void DoublyLinkedList::clear()
{
	
	DoubleNode *temp = new DoubleNode;
	while (head != tail)
	{
		temp = head;
		head = head->next;
		head->prev = nullptr;
		delete temp;
		length--;
	}
	length--;
	delete head;
	
	
}

void DoublyLinkedList::display()
{
	DoubleNode *temp = new DoubleNode;
	temp = head;
	while (temp != nullptr)
	{
		cout << temp->liczba << endl;
		temp = temp->next;
	}
}
