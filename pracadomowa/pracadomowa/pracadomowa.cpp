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
using namespace std;


int main()
{
	Stos stosik;
	stosik.push(2);
	stosik.push(3);
	cout << "liczba na gorze stosu:"<<stosik.top();
	
	/*
	//stos
	srand(time(NULL));
	stack<int> stos;
	int m=5,liczba;
	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		stos.push(liczba);
	}
	cout << "Ostatnia liczba na stosie to:" << stos.top() << endl;
	int k = 3;
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
	list<int> lista;

	for (int i = 0; i < m; i++)
	{
		liczba = rand() % 50;
		lista.push_back(liczba);
	}
	
	for(int n:lista)
	{
		cout << "element listy:" << n << endl;
	}
	for (int i = 0; i < k; i++)
	{
		liczba = rand() % 50;
		lista.push_front(liczba);
	}
	int l = 4;
	for (int i = 0; i < l; i++)
	{
		if(!lista.empty())
		lista.pop_front();
		else cout << "Lista jest pusta" << endl;
	}
	cout << "Pierwszy element listy:" << lista.front() << endl;
	int j = 2;
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
	*/
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
