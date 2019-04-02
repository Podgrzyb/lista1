#include "pch.h"
#include "Stos.h"
#include <iostream>
using namespace std;


Stos::Stos()
{
	SizeOfStack = 50;
	tab = new int[50];
	index = 0;
}


Stos::~Stos()
{
}

void Stos::push(int element)
{
	tab[index] = element;
	index++;
	int *tab2;
	if (SizeOfStack == index + 1)
	{
		SizeOfStack = 2 * SizeOfStack;
		tab2 = new int[SizeOfStack];

		for (int i = 0; i < index + 1; i++)
		{
			tab2[i] = tab[i];
		}
		delete[] tab;
		tab = tab2;
	}
	else
	{
		tab[index] = element;
	}
}

int Stos::pop()
{
	if (isempty())
	{
		cout << "Nie mozna usunac elementu, gdyz stos jest pusty" << endl;
	}
	return tab[index--];
		
		
}

bool Stos::isempty()
{
	if (tab == nullptr)
		return true;
	else return false;
}

int Stos::top()
{
	return tab[index];
}

int Stos::size()
{
	return index+1;
}