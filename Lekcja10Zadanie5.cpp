#include <iostream>
#include <cstdlib> // biblioteka, której jest mo¿liwa operacja rand() i srand ()
#include <ctime>   // biblioteka, dziêki której pobierany jest czas systemowy
using namespace std;

//_______________P A R A D O K S  U R O D Z I N____________________

int birthdayParadox(int people, int tests)
{
	int paradoxTrue = 0;
	
	int tablicaPeople[49] = {0};
	
	srand ( time( NULL ) ); // czas systemowy (sekundy od 1970 roku)
							// powtarzamy go tylko raz przed wszystkimi "rand()"
							// musi byæ przed wszystkimi "for", aby liczby rzeczywiœcie by³y losowe
	
	for ( int i = 1; i <= tests; i++ )
	{
	
	// przpisanie losowych wartoœci od 1 do 365 (dat) dla wyznaczonej liczby osób
	// uproœci³am model tylko do 365 dni - nie biorê pod uwagê lat przestêpnych.
		for ( int i = 0; i <= (people - 1); i++ )
		{		
			tablicaPeople[i] = rand() % 365 + 1; // wyznaczam, aby bra³ losowe liczby z przedzia³u od 1 do 365
		}
	
	// porównywanie poszczególnych liczb losowych
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
		
		x -= people; // zlikwidowanie powtórzeñ, czyli porównywania tych samych liczb.
		
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

