#include <iostream>
using namespace std;

int main ()
{
	int number;
	int runda=1;
	
	cout << "GRA\nOdgadnij liczbe od 1 do 99. Masz 10 prob.\n Podaj szczesliwa liczbe:\n";
	
	while (runda<=10)
	{
		cin >> number;
		
		if(number>0 && number<100)
		{
		runda++; // zamiast tego mo�e by� runda = runda+1
			if(number>42)
			{
				cout << "Liczba " << number << " to za duzo. Pozostalo Ci " << 11-runda << " prob." << endl;
			}
			else if(number<42)
			{
				cout << "Liczba " << number << " to za malo. Pozostalo Ci " << 11-runda << " prob." << endl;
			}
			else
			{
				cout << "Brawo! Wygrales po " << runda-1 << " probach!";
				return 0; // gdyby by�o break pokazywa�by si� tak�e komunikat o przegranej na dole
			}
		}
		else
		{
		cout << "Wybierz liczbe z zakresu od 1 do 99!" << endl;	// przy podaniu z�ej liczby rundy si� nie zliczaj�
		}	
	}
	
	cout << "Niestety nie zgadles w 10 rundach. Przegrywasz.";
return 0;
}
