#include "pch.h"
#include "Stos.h"
#include <iostream>


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
	
	
}
