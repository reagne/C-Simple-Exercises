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

int weekDay(int year, int month, int day) // funkcja ma sprawdzaæ jaki jest dzieñ tygodnia w latach 2000-2020
{
	int x; // iloœæ dni od 2000.01.01
	
	x = ( year - 2000 ) * 365 + ( month - 1 ) * 30 + day + 5; // podstawowe dzia³anie, jeœli przyj¹æ, ¿e nie ma lat
	//przestêpnych i wszystkie miesi¹ce maj¹ po 30 dni. Na koñcu dodana jest pi¹tka, poniewa¿ wiemy, ¿e
	// dla daty 2000.01.01 powinna wyjœæ 6, która przypisana jest sobocie.

// --------SPRECYZOWANY MIESI¥C---------------------------------------------------------------------
	for( month = month - 1 ; month >= 1 ; month-- ) // dzia³anie, które uwzglêdnia ró¿nice w iloœci dni w miesi¹cach
	// na pocz¹rku rozwi¹zujemy problem z miesi¹cem, póki nie zmieniliœmy wartoœci year.
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
		if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 )// tutaj nie musimy dodawaæ grudnia bo nie wyst¹pi
		{
			x = x + 1 ;
		}
	}

//--------SPRECYZOWANY ROK----------------------------------------------------------------------------
	for( year = year-1 ; year >= 2000 ; year-- ) // dzia³anie, które uwzglêdnia lata przestêpne
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
