#pragma once
#include "Nodle.h"
class List1d
{
private:
	Nodle *head;
	Nodle *tail;
	int length;
	
public:
	List1d();
	~List1d();
	void pushback(int element);
	void popback();
	void pushfront(int element);
	void popfront();
	bool isempty();
	int size();
	int front();
	int back();
	void clear();
	void display();
};



