#include "pch.h"
#include "Kolejka.h"


Kolejka::Kolejka()
{
	tab = new int[1];
	index = 0;
	
}


Kolejka::~Kolejka()
{
}

void Kolejka::push(int element)
{
	tab[index] = element;
	index++;
	tab2 = new int[index + 1];
	for (int i = 0; i < index + 1; i++)
	{
		tab2[i] = tab[i];
	}
	delete[] tab;
	tab = tab2;
}

void Kolejka::pop()
{

	index--;
	tab2 = new int[index + 1];
	for (int i = 0; i < index + 1; i++)
	{
		tab2[i] = tab[i+1];
	}
	delete[] tab;
	tab = tab2;

}
bool Kolejka::isempty()
{
	if (tab == nullptr)
		return true;
	else return false;
}


int Kolejka::size()
{
	return index;
}
int Kolejka::front()
{
	return tab[0];
}