#include "pch.h"
#include "List1d.h"
#include <iostream>
using namespace std;


List1d::List1d()
{
	head = nullptr;
	tail = nullptr;
	length = 0;
}


List1d::~List1d()
{
}

void List1d::pushback(int element)
{
	length++;
	Nodle *added = new Nodle;
	added->liczba = element;
	added->next = nullptr;
	if (head == nullptr)
	{
		head = added;
		tail = added;
	}
	else
	{
		tail->next = added;
		tail = tail->next;
	}
}

void List1d::popback()
{
	if (isempty())
	{
		cout << "pusta";
	}
	else
	{
		length--;
		Nodle *current = new Nodle;
		Nodle *previous = new Nodle;
		current = head;
		while (current->next != nullptr)
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = nullptr;
		delete current;
	}
}

void List1d::pushfront(int element)
{
	length++;
	Nodle *added = new Nodle;
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
		head = added;
	}
	
}

void List1d::popfront()
{
	
	if (isempty())
	{
		cout << "Lista jest pusta" << endl;
	}
	else
	{
		length--;
		Nodle *temp = new Nodle;
		temp = head;
		head = head->next;
		delete temp;
	}
}

bool List1d::isempty()
{
	if (length==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int List1d::size()
{
	return length;
}

int List1d::front()
{
	if (head == nullptr)
	{
		cout << "Lista jest pusta" << endl;
	}
	else
	return head->liczba;
}

int List1d::back()
{
	return tail->liczba;
}

void List1d::clear()
{
	
	Nodle *current = new Nodle;
	Nodle *previous = new Nodle;
	current = head;
	while (current->next != nullptr)
	{
		current = current->next;
		delete previous;
		previous = current;
		length--;
	}
	current->next = nullptr;
	delete current;
	head = nullptr;
	tail = nullptr;
	length--;
	
}

void List1d::display()
{
	Nodle *temp = new Nodle;
	temp = head;
	while (temp != nullptr)
	{
		cout << temp->liczba << endl;
		temp = temp->next;
	}
}



