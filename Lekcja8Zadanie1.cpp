#include <iostream>
using namespace std;

enum DzienTygodnia
{
	Poniedzialek = 1,
	Wtorek,
	Sroda,
	Czwartek,
	Piatek,
	Sobota,
	Niedziela
};

int weekDay(int year, int month, int day) // funkcja ma sprawdza� jaki jest dzie� tygodnia w latach 2000-2020
{
	int x; // ilo�� dni od 2000.01.01
	
	x = ( year - 2000 ) * 365 + ( month - 1 ) * 30 + day + 5; // podstawowe dzia�anie, je�li przyj��, �e nie ma lat
	//przest�pnych i wszystkie miesi�ce maj� po 30 dni. Na ko�cu dodana jest pi�tka, poniewa� wiemy, �e
	// dla daty 2000.01.01 powinna wyj�� 6, kt�ra przypisana jest sobocie.

// --------SPRECYZOWANY MIESI�C---------------------------------------------------------------------
	for( month = month - 1 ; month >= 1 ; month-- ) // dzia�anie, kt�re uwzgl�dnia r�nice w ilo�ci dni w miesi�cach
	// na pocz�rku rozwi�zujemy problem z miesi�cem, p�ki nie zmienili�my warto�ci year.
	{
		if( month == 2 ) 
		{
			if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
			{
				x = x - 1 ;
			}
			else
			{
				x = x - 2 ;
			}
		}
		if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 )// tutaj nie musimy dodawa� grudnia bo nie wyst�pi
		{
			x = x + 1 ;
		}
	}

//--------SPRECYZOWANY ROK----------------------------------------------------------------------------
	for( year = year-1 ; year >= 2000 ; year-- ) // dzia�anie, kt�re uwzgl�dnia lata przest�pne
	{
		if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
		{
			x = x + 1 ;
		}
	}

//-------ZWRACA NUMER TYGODNIA------------------------------------------------------------------------	
	if( x % 7 != 0 )
	{
		return ( x % 7 );
	}
	else
	{
		return x = 7;
	}
}

int main()
{
	int year, month, day;
	cout << "Podaj date: " ;
	cin >> year >> month >> day ;
	
	switch( weekDay(year, month, day) )
	{
		case Poniedzialek:
			cout << "Poniedzialek " << Poniedzialek << endl; break;
		case Wtorek:
			cout << "Wtorek " << Wtorek << endl; break;
		case Sroda:
			cout << "Sroda " << Sroda << endl; break;
		case Czwartek:
			cout << "Czwartek " << Czwartek << endl; break;
		case Piatek:
			cout << "Piatek " << Piatek << endl; break;
		case Sobota:
			cout << "Sobota " << Sobota << endl; break;
		case Niedziela:
			cout << "Niedziela " << Niedziela << endl; break;
	}
	
	system ("pause");
	return 0;
}
