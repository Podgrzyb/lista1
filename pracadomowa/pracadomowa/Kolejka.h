#pragma once
class Kolejka
{
private:
	int *tab;
	int capacity;
	int f;
	int r;
	int currentSize;
	
public:
	Kolejka();
	~Kolejka();
	void push(int element);
	int pop();
	int size();
	bool isempty();
	int front();
	
};

