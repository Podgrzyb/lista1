#pragma once
class Heap
{
private:
	int size;
	int *tab;
	int capacity;
public:
	Heap(int n);
	~Heap();
	int parent(int i);
	int left(int i);
	int right(int i);
	void add(int added);
	void Heapify(int i);
	int RemoveRoot();
	void display();

};

