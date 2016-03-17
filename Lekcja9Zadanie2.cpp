#include <iostream>
using namespace std;

//===== FUNKCJA: PODAJE DZIE� TYGODNIA PIERWSZEJ PODANEJ DATY ===============================================================

int weekDay(int initYear, int initMonth, int initDay) // funkcja ma sprawdza� jaki jest dzie� tygodnia w latach 2000-2020
{
	int x; // ilo�� dni od 2000.01.01
	
	x = ( initYear - 2000 ) * 365 + ( initMonth - 1 ) * 30 + initDay + 5; 
	// podstawowe dzia�anie, je�li przyj��, �e nie ma lat przest�pnych i wszystkie miesi�ce maj� po 30 dni. 
	// Na ko�cu dodana jest pi�tka, poniewa� wiemy, �e dla daty 2000.01.01 powinna wyj�� 6, kt�ra przypisana jest sobocie.

//-----SPRECYZOWANY MIESI�C----------------------------------------------------------------------------------------------
	
	for( int month = initMonth - 1 ; month >= 1 ; month-- ) // dzia�anie, kt�re uwzgl�dnia r�nice w ilo�ci dni w miesi�cach
	// na pocz�tku rozwi�zujemy problem z miesi�cem, p�ki nie zmienili�my warto�ci year.
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
		if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 )// tutaj nie musimy dodawa� grudnia bo nie wyst�pi
		{
			x = x + 1 ;
		}
	}

//--------SPRECYZOWANY ROK----------------------------------------------------------------------------
	
	for( int year = initYear-1 ; year >= 2000 ; year-- ) // dzia�anie, kt�re uwzgl�dnia lata przest�pne
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
		return x = 7; // je�li niedziela zwr�ci mi 7 zaamiast 0.
	}
}

//=== FUNKCJA: ZLICZA DNI ROBOCZE MIEDZY DWOMA DATAMI=========================================================

int workingDay(int initYear, int initMonth, int initDay, int finalYear, int finalMonth, int finalDay)
{
	
//------ILO�� WSZYSTKICH DNI MIEDZY DATAMI------------------------------------------------------------------

int x;
	
	x = ( finalYear - initYear ) * 365 + ( finalMonth - initMonth ) * 30 + finalDay - initDay + 1; 
	// podstawowe dzia�anie, je�li przyj��, �e nie ma lat przest�pnych i wszystkie miesi�ce maj� po 30 dni. 
	// Na ko�cu dodana jest jedynka, poniewa� aby wszystkie dni by�y brane pod uwag�.

// JE�LI MIESI�CE NIE MIA�Y 30 DNI 
	if (finalMonth - initMonth != 0)
	{
		for( initMonth ; initMonth <= 12 ; initMonth++ ) // dzia�anie, kt�re uwzgl�dnia r�nice w ilo�ci dni w miesi�cach
		// na pocz�rku rozwi�zujemy problem z miesi�cem, p�ki nie zmienili�my warto�ci year.
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

// JE�LI KT�RE� LATA BY�Y PRZEST�PNE
	if (finalYear - initYear != 0)
	{
		for( int year = initYear ; year <= finalYear ; year++ ) // dzia�anie, kt�re uwzgl�dnia lata przest�pne
		{
			if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
			{
				x = x + 1 ;
			}
		}
	}

//----------ILO�� DNI ROBOCZYCH WE WSZYSTKICH DNIACH --------------------------------------------------------------
int a = weekDay(initYear, initMonth, initDay);
int b = a + x;
int c = 0;
	
	for (a ; a < b ; a++)
	{
		if ( a % 7 != 0 && a % 7 != 6) //wyklucza niedziele i soboty, tak aby c zlicza�o si� jedynie gdy dni s� 1-5
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
