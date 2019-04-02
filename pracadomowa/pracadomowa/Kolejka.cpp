#include "pch.h"
#include "Kolejka.h"
#include <iostream>
using namespace std;

Kolejka::Kolejka()
{
	capacity = 50;
	tab = new int[50];
	f = 0;
	r = 0;
	currentSize = 0;
}


Kolejka::~Kolejka()
{
}

void Kolejka::push(int element)
{
	if (currentSize == capacity)
	{
		cout << "Kolejka jest pelna" << endl;
	}
	else
	{
		if (r == (capacity - 1))
		{


			r = 0;
			tab[r] = element;
			currentSize++;
		}
		else
		{
			tab[r] = element;
			r = (r + 1) % capacity;
			currentSize++;

		}
	}
}

int Kolejka::pop()
{
	int temp;
	if (isempty())
	{
		cout << "Kolejka jest pusta" << endl;
	}
	else
	{
		if (f == (capacity - 1))
		{
			temp = tab[f];
			f = 0;
			currentSize--;
			return temp;
		}
		else
		{
			temp = tab[f];
			f = (f + 1) % capacity;
			currentSize--;
			return temp;
		}
	}
}
bool Kolejka::isempty()
{
	if (f==r)
		return true;
	else return false;
}


int Kolejka::size()
{
	return currentSize;
}
int Kolejka::front()
{
	return tab[f];
}


