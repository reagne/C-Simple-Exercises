#include <iostream>
using namespace std;

//______F U N K C J E   Z W R A C A J � C E   W S K A � N I K___________

int * foo()
{
	static int zoo = 40;
	return &zoo;  // zwraca adres zmiennej typu int
}

int main()
{
	int * value = 0;		// wska�nik ustawiony na adres 0
	value = foo();		// ale tutaj do wska�nika zostanie wpisany adres zmiennej zoo
	cout << *value + 4;
	
	return 0;
}

/*_____R O Z M I A R_____


Wska�nik jest zmienn� przechowuj�c� adres pami�ci. Skoro jest zmienn�, to sam te� zajmuje miejsce 
w pami�ci - tyle, ile zajmuje adres (jako liczba) w komputerze. W systemach 32 bitowych wska�nik 
b�dzie zajmowa� 32 bity, czyli 4 bajty. W systemach 64 bitowych wska�nik zajmuje 8 bajt�w.

_____H I N T S !!____________________

1) Jaka jest r�nica pomi�dzy (*number)++ a *(number++):
Pierwszy zapis odczytujemy: we� warto�� zmiennej, na kt�r� pokazuje wska�nik *number, 
a nast�pnie zwi�ksz t� warto�� o jeden ++.
Drugi zapis odczytujemy: Zwi�ksz warto�� wska�nika (czyli adresu) o jeden number++, 
a nast�pnie poka�, jaka warto�� jest pod tym adresem *

2) Inicjalizuj wska�niki. Je�li w twoim programie pojawi� si� b��d, kt�ry spowodowa� 
zamkni�cie programu, to sprawd�, czy wszystkie wska�niki pokazuj� sensowny (nieprzypadkowy) adres.

3) Je�eli funkcja przyjmuje w argumencie wska�nik: void foo(int *pointer), to dobrze przed u�yciem 
tego wska�nika sprawdzi�, czy nie jest ustawiony na adres 0: if (pointer != 0)

*/ 
