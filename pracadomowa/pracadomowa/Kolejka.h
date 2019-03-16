#pragma once
class Kolejka
{
private:
	int *tab;
	int *tab2;
	int index;
	
public:
	Kolejka();
	~Kolejka();
	void push(int element);
	void pop();
	int size();
	bool isempty();
	int front();
	
};

