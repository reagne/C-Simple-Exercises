#include <iostream>
using namespace std;

//______F U N K C J E   Z W R A C A J • C E   W S K A è N I K___________

int * foo()
{
	static int zoo = 40;
	return &zoo;  // zwraca adres zmiennej typu int
}

int main()
{
	int * value = 0;		// wskaünik ustawiony na adres 0
	value = foo();		// ale tutaj do wskaünika zostanie wpisany adres zmiennej zoo
	cout << *value + 4;
	
	return 0;
}

/*_____R O Z M I A R_____


Wskaünik jest zmiennπ przechowujπcπ adres pamiÍci. Skoro jest zmiennπ, to sam teø zajmuje miejsce 
w pamiÍci - tyle, ile zajmuje adres (jako liczba) w komputerze. W systemach 32 bitowych wskaünik 
bÍdzie zajmowa≥ 32 bity, czyli 4 bajty. W systemach 64 bitowych wskaünik zajmuje 8 bajtÛw.

_____H I N T S !!____________________

1) Jaka jest rÛønica pomiÍdzy (*number)++ a *(number++):
Pierwszy zapis odczytujemy: weü wartoúÊ zmiennej, na ktÛrπ pokazuje wskaünik *number, 
a nastÍpnie zwiÍksz tπ wartoúÊ o jeden ++.
Drugi zapis odczytujemy: ZwiÍksz wartoúÊ wskaünika (czyli adresu) o jeden number++, 
a nastÍpnie pokaø, jaka wartoúÊ jest pod tym adresem *

2) Inicjalizuj wskaüniki. Jeúli w twoim programie pojawi≥ siÍ b≥πd, ktÛry spowodowa≥ 
zamkniÍcie programu, to sprawdü, czy wszystkie wskaüniki pokazujπ sensowny (nieprzypadkowy) adres.

3) Jeøeli funkcja przyjmuje w argumencie wskaünik: void foo(int *pointer), to dobrze przed uøyciem 
tego wskaünika sprawdziÊ, czy nie jest ustawiony na adres 0: if (pointer != 0)

*/ 
