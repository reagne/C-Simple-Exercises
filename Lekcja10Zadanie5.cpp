#include <iostream>
#include <cstdlib> // biblioteka, kt�rej jest mo�liwa operacja rand() i srand ()
#include <ctime>   // biblioteka, dzi�ki kt�rej pobierany jest czas systemowy
using namespace std;

//_______________P A R A D O K S  U R O D Z I N____________________

int birthdayParadox(int people, int tests)
{
	int paradoxTrue = 0;
	
	int tablicaPeople[49] = {0};
	
	srand ( time( NULL ) ); // czas systemowy (sekundy od 1970 roku)
							// powtarzamy go tylko raz przed wszystkimi "rand()"
							// musi by� przed wszystkimi "for", aby liczby rzeczywi�cie by�y losowe
	
	for ( int i = 1; i <= tests; i++ )
	{
	
	// przpisanie losowych warto�ci od 1 do 365 (dat) dla wyznaczonej liczby os�b
	// upro�ci�am model tylko do 365 dni - nie bior� pod uwag� lat przest�pnych.
		for ( int i = 0; i <= (people - 1); i++ )
		{		
			tablicaPeople[i] = rand() % 365 + 1; // wyznaczam, aby bra� losowe liczby z przedzia�u od 1 do 365
		}
	
	// por�wnywanie poszczeg�lnych liczb losowych
		int x = 0;
		
		for ( int i = 0; i <= (people - 1); i++ )
		{
			for ( int j = 0; j <= (people-1); j++ )
			{
				if ( tablicaPeople[i] == tablicaPeople[j] )
				{
					x++;
				}
			}
		}
		
		x -= people; // zlikwidowanie powt�rze�, czyli por�wnywania tych samych liczb.
		
		if ( x > 0 )
		{
			paradoxTrue++;
		}
	}
	
	return paradoxTrue;
}

int main()
{
	int people;
	int tests;
	
	cout << " PARADOKS URODZIN" << endl << endl;
	cout << "Wybierz ilosc prob [1000 - 100000]: ";
	cin >> tests;
	cout << "Wybierz ilosc osob w probie [2 - 50]: ";
	cin >> people;
	
	cout << birthdayParadox (people, tests) << endl;
	
	system ("pause");
	return 0;
}

