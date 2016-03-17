#include <iostream>  	// Dolaczamy plik, w ktorym jest definicja cout 
using namespace std;	// Aby nie pisac za kazdym razem std::

int main() //Glowna funkcja programu

{
int year = 2013;	// zmienna int, mozemy trzymac w niej liczby calkowite (z ang. integer)
			// do zmiennej o nazwie year wstawiamy liczbe 2013
			// od tego momentu kompilator wie, ¿e zmienna "year" jest równa 2013
			/* mozemy takze stworzyc najpierw zmienna czyli int year a po œredniku dopiero nadaæ
			jej wartoœæ year=2013.Wygladaloby to tak:
			int year;
			year=2013*/
	
cout << "Mamy rok: " << year << endl;
year = 2014;	// zmiana wartoœci zmiennej
cout << "A teraz mamy rok: " << year << endl;

// Inny sposób na przypisanie zmiennej year nowej wartoœci
    year = year + 1;	// mo¿na te¿ zapisaæ krócej: year++; 
			// zmienna jak sama nazwa mowi, moze zmieniac swoja wartosc; dodalismy wiec do niej 1
			// od tego miejsca w programie wartosc zmiennej year to nie 2014, tylko 2015

    cout << "Witamy nowy rok: " << year << endl;
    
    	//Inne dzia³ania
    	year++; // inkrementacja zmiennej -  zwiêkszenie jej wartoœci o 1
    	cout << "year++ " << year << endl; 
    	year--; // dekrementacja zmiennej - obni¿enie jej wartoœci o 1
    	cout << "year-- " << year << endl;
    	year = year - 3000;
    	cout << "year-3000 " << year << endl;
    	cout << " " << endl;
    	
//INSTRUKCJA WARUNKOWA IF(...)

year = 2015; // do zmiennej o nazwie year wstawiamy liczbe 2015

    if (year == 2015)   // jezeli zmienna year wynosi 2015
    {                   // to wykonaj kod, ktory jest miedzy klamrami { }
        cout << "Mamy rok: " << year << endl;
        year++;         // year = year + 1
        cout << "Nastepny bedzie rok: " << year << endl;
    }

/*  if (year == 2013)   // Równy. Uwaga: podwójny znak ==
    if (year > 2013)    // Wiêkszy
    if (year < 2013)    // Mniejszy
    if (year >= 2013)   // Wiêkszy lub równy
    if (year <= 2013)   // Mniejszy lub równy
    if (year != 2013)   // Ró¿ny od
*/

cout << " " << endl;

cout << "Podaj rok: ";
cin >> year; // console in - jestesmy w stanie wczytac to, co napisze uzytkownik programu

if (year > 0)
{
	cout << "Rok, ktory podales to " << year << endl;
	if (year >= 2013)
	{
		cout << "W tym czasie istniala juz Kuznia Programistow" << endl;
	}
}
else if(year == 0)
{
	cout << "Rok, ktory podales jest nieprawidilowy. Podaj nowy: ";
	cin >> year;
	if (year > 0)
{
	cout << "Rok, ktory podales to " << year << endl;
	if (year >= 2013)
	{
		cout << "W tym czasie istniala juz Kuznia Programistow" << endl;
	}
}
}
else // mozna tez zapisac: if(year<0)
{
	cout << "Rok, ktory podales to " << -year << " p.n.e." << endl;
}
    	
return 0;
}
