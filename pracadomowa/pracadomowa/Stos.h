#pragma once
class Stos
{
private:
	int *tab;
	int SizeOfStack;
	int index;
public:
	Stos();
	~Stos();
	void push(int element);
	int pop();
	int top();
	int size();
	bool isempty();
};

