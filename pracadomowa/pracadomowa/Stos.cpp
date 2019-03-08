#include "pch.h"
#include "Stos.h"
#include <iostream>
using namespace std;


Stos::Stos()
{
	tab = new int[1];
	index = 0;
}


Stos::~Stos()
{
}

void Stos::push(int element)
{
	tab[index] = element;
	index++;
	tab2 = new int[index+1];
	for (int i = 0; i < index+1; i++)
	{
		tab2[i] = tab[i];
	}
	delete[] tab;
	tab = tab2;
	
}

void Stos::pop()
{
	
		index--;
		tab2 = new int[index+1];
		for (int i = 0; i < index+1 ; i++)
		{
			tab2[i] = tab[i];
		}
		delete[] tab;
		tab = tab2;
	

}

bool Stos::isempty()
{
	if (tab == nullptr)
		return true;
	else return false;
}

int Stos::top()
{
	return tab[index-1];
}

int Stos::size()
{
	return index;
}