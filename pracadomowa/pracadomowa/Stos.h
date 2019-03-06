#pragma once
class Stos
{
private:
	int *tab;
	int *tab2;
	int index;
public:
	Stos();
	~Stos();
	void push(int element);
	void pop();
	int top();
	int size();
	bool isempty();
};

