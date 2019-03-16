// pracadomowa.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <cstdlib>
#include <ctime>
#include "Stos.h"
#include "Kolejka.h"
#include "List1d.h"
#include "DoublyLinkedList.h"
#include "Heap.h"
using namespace std;


int main()
{

	//stos
	cout << "Stos z biblioteki STL" << endl;
	srand(time(NULL));
	stack<int> stos;
	int m = 12, liczba, k = 8, l = 4, j = 2;
	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		stos.push(liczba);
	}
	cout << "Ostatnia liczba na stosie to:" << stos.top() << endl;
	for (int i = 0; i < k; i++)
	{
		if (stos.empty())
		{
			cout << "stos jest pusty" << endl;
		}
		else
		{
			stos.pop();
		}
	}
	stos.push(3);
	cout << "Liczba elementow stosu wynosi:" << stos.size() << endl;

	//kolejka
	cout << "Kolejka z biblioteki STL" << endl;
	queue<int> kolejka;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		kolejka.push(liczba);
	}
	cout << "pierwszy element kolejki to:" << kolejka.front() << endl;

	for (int i = 0; i < k; i++)
	{
		if (kolejka.empty())
		{
			cout << "kolejka jest pusta" << endl;
		}
		else
		{
			kolejka.pop();
		}
	}
	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		kolejka.push(liczba);
	}
	cout << "pierwszy element kolejki to:" << kolejka.front() << endl;
	cout << "Liczba elementow kolejki wynosi:" << kolejka.size() << endl;

	//lista
	cout << "lista z biblioteki STL" << endl;
	list<int> lista;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		lista.push_back(liczba);
	}

	for (int n : lista)
	{
		cout << "element listy:" << n << endl;
	}
	for (int i = 0; i < k; i++)
	{
		liczba = rand() % 50;
		lista.push_front(liczba);
	}

	for (int i = 0; i < l; i++)
	{
		if (!lista.empty())
			lista.pop_front();
		else cout << "Lista jest pusta" << endl;
	}
	cout << "Pierwszy element listy:" << lista.front() << endl;

	for (int i = 0; i < j; i++)
	{
		if (!lista.empty())
			lista.pop_back();
		else cout << "Lista jest pusta" << endl;
	}
	cout << "Ostatni element listy:" << lista.back() << endl;
	for (int n : lista)
	{
		cout << "element listy:" << n << endl;
	}
	lista.clear();
	cout << "Liczba elementow listy:" << lista.size() << endl;
	//stos zaimplementowany
	cout << "stos zaimplementowany" << endl;
	Stos stos1;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		stos1.push(liczba);
	}
	cout << "Ostatnia liczba na stosie to:" << stos1.top() << endl;

	for (int i = 0; i < k; i++)
	{
		if (stos1.isempty())
		{
			cout << "stos jest pusty" << endl;
		}
		else
		{
			stos1.pop();
		}
	}
	stos.push(3);
	cout << "Liczba elementow stosu wynosi:" << stos1.size() << endl;

	//kolejka zaimplementowana
	cout << "kolejka zaimplementowana" << endl;
	Kolejka kolejka1;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		kolejka1.push(liczba);
	}
	cout << "pierwszy element kolejki to:" << kolejka1.front() << endl;

	for (int i = 0; i < k; i++)
	{
		if (kolejka1.isempty())
		{
			cout << "kolejka jest pusta" << endl;
		}
		else
		{
			kolejka1.pop();
		}
	}
	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		kolejka1.push(liczba);
	}
	cout << "pierwszy element kolejki to:" << kolejka1.front() << endl;
	cout << "Liczba elementow kolejki wynosi:" << kolejka1.size() << endl;

	//lista jednokierunkowa
	cout << "lista jednokierunkowa zaimplementowana" << endl;

	List1d lista1;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		lista1.pushback(liczba);
	}
	lista1.display();
	for (int i = 0; i < k; i++)
	{
		liczba = rand() % 50;
		lista1.pushfront(liczba);
	}

	for (int i = 0; i < l; i++)
	{
		lista1.popfront();
	}
	cout << "Pierwszy element listy:" << lista1.front() << endl;

	for (int i = 0; i < j; i++)
	{
		lista1.popback();
	}
	cout << "Ostatni element listy:" << lista1.back() << endl;

	lista1.display();
	lista1.clear();

	cout << "Liczba elementow listy:" << lista1.size() << endl;

	//lista dwukierunkowa

	cout << "lista dwukierunkowa zaimplementowana" << endl;

	DoublyLinkedList lista2;
	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		lista2.pushback(liczba);
	}
	lista2.display();
	for (int i = 0; i < k; i++)
	{
		liczba = rand() % 50;
		lista2.pushfront(liczba);
	}

	for (int i = 0; i < l; i++)
	{
		lista2.popfront();
	}
	cout << "Pierwszy element listy:" << lista2.front() << endl;

	for (int i = 0; i < j; i++)
	{
		lista2.popback();
	}
	cout << "Ostatni element listy:" << lista2.back() << endl;

	lista2.display();
	lista2.clear();

	cout << "Liczba elementow listy:" << lista2.size() << endl;

	cout << "Kopiec" << endl;
	int x = 8;
	Heap kopiec(10);
	for (int i = 0; i < x; i++)
	{
		liczba = rand() % 50;
		kopiec.add(liczba);
	}
	kopiec.display();
	kopiec.RemoveRoot();
	kopiec.display();
	
	

}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
