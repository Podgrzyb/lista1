#include "pch.h"
#include "Heap.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


Heap::Heap(int n)
{
	tab = new int[n]; 
	size = 0;
	capacity = n;
}


Heap::~Heap()
{
}

int Heap::parent(int i)
{
	return i/2;
}

int Heap::left(int i)
{
	return 2*i;
}

int Heap::right(int i)
{
	return 2*i+1;
}

void Heap::add(int added)
{
	if (capacity == size)
	{
		cout << "stos jest pelny" << endl;
		return;
	}
	
	tab[size] = added;
	int k = size;
	size++;
	while (k != 0 && tab[parent(k)] < tab[k])
	{
		swap(tab[k], tab[parent(k)]);
		k = parent(k);
	}
}

void Heap::Heapify(int i)
{
	int l = left(i);
	int r = right(i);
	int bigger = i;
	if (tab[l] > tab[i]&& l<size)
	{
		bigger = l;
	}
	if (tab[r] > tab[bigger]&&r<size)
	{
		bigger = r;
	}
	if (bigger != i)
	{
		swap(tab[i], tab[bigger]);
		Heapify(bigger);
	}
}

int Heap::RemoveRoot()
{
	if (size == 1)
	{
		size--;
		return tab[0];
	}
	int root = tab[0];
	tab[0] = tab[size - 1];
	size--;
	Heapify(0);
	return root;

}

void Heap::display()
{
	cout << "elementy kopca:";
	for (int i = 0; i < size; i++)
		cout << tab[i] << " ";
	cout << endl;
}
