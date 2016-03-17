#include <iostream>
using namespace std;

//===== FUNKCJA: PODAJE DZIEÑ TYGODNIA PIERWSZEJ PODANEJ DATY ===============================================================

int weekDay(int initYear, int initMonth, int initDay) // funkcja ma sprawdzaæ jaki jest dzieñ tygodnia w latach 2000-2020
{
	int x; // iloœæ dni od 2000.01.01
	
	x = ( initYear - 2000 ) * 365 + ( initMonth - 1 ) * 30 + initDay + 5; 
	// podstawowe dzia³anie, jeœli przyj¹æ, ¿e nie ma lat przestêpnych i wszystkie miesi¹ce maj¹ po 30 dni. 
	// Na koñcu dodana jest pi¹tka, poniewa¿ wiemy, ¿e dla daty 2000.01.01 powinna wyjœæ 6, która przypisana jest sobocie.

//-----SPRECYZOWANY MIESI¥C----------------------------------------------------------------------------------------------
	
	for( int month = initMonth - 1 ; month >= 1 ; month-- ) // dzia³anie, które uwzglêdnia ró¿nice w iloœci dni w miesi¹cach
	// na pocz¹tku rozwi¹zujemy problem z miesi¹cem, póki nie zmieniliœmy wartoœci year.
	{
		if( month == 2 ) 
		{
			if( ( initYear % 4 == 0 && initYear % 100 != 0 ) || initYear % 400 == 0 )
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
	
	for( int year = initYear-1 ; year >= 2000 ; year-- ) // dzia³anie, które uwzglêdnia lata przestêpne
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
		return x = 7; // jeœli niedziela zwróci mi 7 zaamiast 0.
	}
}

//=== FUNKCJA: ZLICZA DNI ROBOCZE MIEDZY DWOMA DATAMI=========================================================

int workingDay(int initYear, int initMonth, int initDay, int finalYear, int finalMonth, int finalDay)
{
	
//------ILOŒÆ WSZYSTKICH DNI MIEDZY DATAMI------------------------------------------------------------------

int x;
	
	x = ( finalYear - initYear ) * 365 + ( finalMonth - initMonth ) * 30 + finalDay - initDay + 1; 
	// podstawowe dzia³anie, jeœli przyj¹æ, ¿e nie ma lat przestêpnych i wszystkie miesi¹ce maj¹ po 30 dni. 
	// Na koñcu dodana jest jedynka, poniewa¿ aby wszystkie dni by³y brane pod uwagê.

// JEŒLI MIESI¥CE NIE MIA£Y 30 DNI 
	if (finalMonth - initMonth != 0)
	{
		for( initMonth ; initMonth <= 12 ; initMonth++ ) // dzia³anie, które uwzglêdnia ró¿nice w iloœci dni w miesi¹cach
		// na pocz¹rku rozwi¹zujemy problem z miesi¹cem, póki nie zmieniliœmy wartoœci year.
		{
	
			if( initMonth == 2 ) 
			{
				if( ( initYear % 4 == 0 && initYear % 100 != 0 ) || initYear % 400 == 0 )
				{
					x = x - 1 ;
				}
				else
				{
					x = x - 2 ;
				}
			}
			
			if( initMonth == 1 || initMonth == 3 || initMonth == 5 || initMonth == 7 || initMonth == 8 || initMonth == 10 || initMonth == 12)
			{
				x = x + 1 ;
			}
		}
	
		for( finalMonth ; finalMonth >= 1 ; finalMonth-- ) 
		{
			if( finalMonth == 2 ) 
			{
				if( ( finalYear % 4 == 0 && finalYear % 100 != 0 ) || finalYear % 400 == 0 )
				{
					x = x - 1 ;
				}
				else
				{
					x = x - 2 ;
				}
			}
			
			if( finalMonth == 1 || finalMonth == 3 || finalMonth == 5 || finalMonth == 7 || finalMonth == 8 || finalMonth == 10 || finalMonth == 12 )
			{
				x = x + 1 ;
			}
		}
	}

// JEŒLI KTÓREŒ LATA BY£Y PRZESTÊPNE
	if (finalYear - initYear != 0)
	{
		for( int year = initYear ; year <= finalYear ; year++ ) // dzia³anie, które uwzglêdnia lata przestêpne
		{
			if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
			{
				x = x + 1 ;
			}
		}
	}

//----------ILOŒÆ DNI ROBOCZYCH WE WSZYSTKICH DNIACH --------------------------------------------------------------
int a = weekDay(initYear, initMonth, initDay);
int b = a + x;
int c = 0;
	
	for (a ; a < b ; a++)
	{
		if ( a % 7 != 0 && a % 7 != 6) //wyklucza niedziele i soboty, tak aby c zlicza³o siê jedynie gdy dni s¹ 1-5
		{
			c++;
		}
	}
	
return c;
}

int main()
{
	int initYear, initMonth, initDay, finalYear, finalMonth, finalDay;
	cout << "Podaj date wejsciowa: " ;
	cin >> initYear >> initMonth >> initDay ;
	cout << "Podaj date koncowa: " ;
	cin >> finalYear >> finalMonth >> finalDay ;
		
	cout << "Liczba dni roboczych: " << workingDay( initYear, initMonth, initDay, finalYear, finalMonth, finalDay) << endl;
	
	system ("pause");
	return 0;
}
