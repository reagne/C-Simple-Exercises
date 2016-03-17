#include <iostream>
using namespace std;

//==== FUNCKJA: SPRAWDZA POPRAWNO�� DATY URODZENIA W PESELU ==============================================================
bool dateValidation(int year, int month, int day)
{
	if( month == 2 ) 
	{
		if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) // sprawdza lata przest�pne
		{
			day <= 29 ;
		}
		else
		{
			day <= 28 ;
		}
	}

	else if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10  || month == 12)
	{
		day <= 31 ;
	}

	else
	{
		day <= 30 ;
	}
	
return 0; // je�li data jest poprawna wynikiem b�dzie 0.
}

//==== FUNKCJA: SPRAWDZA PARAMETRY PESELu ===================================================================
int main()
{
long long int PESEL;
long long int PESEL2;

while ( PESEL2 != 0 ) // dzi�ki temu, je�li podany PESEL b�dzie niepoprawny, system poprosi o podanie PESELu
{
cout << "Podaj swoj numer PESEL: ";
cin	>> PESEL;

//----SPRAWDZA CZY PESEL MA 11 CYFR-----------------------------------------------------------------
int i = 0;
PESEL2 = PESEL; // aby zachowa� nr PESEL do dalszych dzia�a�

	do
	{
	PESEL2 = PESEL2 / 10; 
	i++ ;
	} while ( PESEL2 > 0 );
		 
	if ( i == 11 ) // W tym przypadku PESEL jest poprawny, a od tej pory PESEL2=0
	{
		int cyf_kon = PESEL % 10; //ostatnia liczba w PESELu - podana cyfra kontrolna
		int a = ( PESEL / 10000000000 ); // poszeg�lne liczby w PESELU od 1 do przedostatniej
		int b = ( PESEL / 1000000000 ) % 10;
		int c = ( PESEL / 100000000 ) % 10;
		int d = ( PESEL / 10000000 ) % 10;
		int e = ( PESEL / 1000000 ) % 10;
		int f = ( PESEL / 100000 ) % 10;
		int g = ( PESEL / 10000 ) % 10;
		int h = ( PESEL / 1000 ) % 10;
		int j = ( PESEL / 100 ) % 10;
		int k = ( PESEL / 10 ) % 10;
		
//----SPRAWDZA ZGODNO�� CYFRY KONTROLNEJ-----------------------------------------------------------
		int suma = ( a + 3 * b + 7 * c + 9 * d + e + 3 * f + 7 * g + 9 * h + j + 3 * k ) % 10;
		int cyf_kon2 = 10 - suma ; // rzeczywista cyfra kontrolna
		
		if ( ( suma == 0 && cyf_kon == 0) || (suma != 0 && cyf_kon == cyf_kon2 ) )
		{
			cout << "Poprawna cyfra kontrolna wynoszaca " << cyf_kon << endl;
			
//----SPRAWDZA P�E�--------------------------------------------------------------------------------
			if( k == 0 || k % 2 == 0 )
			{
				cout << "Kobieta" << endl;
			}
			
			else
			{
				cout << "Mezczyzna" << endl;
			}
			/* reszta z dzielenia przez 2 b�dzie wynosi� w tym przypadku zawsze 0 lub 1 .
			Je�li w if wynik b�dzie 0 oznacza� to b�dzie fa�sz i przjedziemy do else, 
			a je�li 1 to prawd�.Mo�na wi�c by zapisa� to nast�puj�co:
			 */
			if ( k % 2 )
			{
				cout << "Mezczyzna" << endl;
			}
			
			else
			{
				cout << "Kobieta" << endl;
			}
			
//----SPRAWDZANIE I WYPISYWANIE DATY URODZENIA--------------------------------------------------------
			cout << "Data urodzin: ";
			int year, month, day;
			
			month = ( PESEL / 10000000 ) % 100 ; // wyznaczamy dni, miesi�ce i rok inaczej ni� wykorzystuj�c
			day = ( PESEL / 100000 ) % 100 ;     // liczby od a-f, aby m�c wykorzysta� funkcj� dateValidation
			
			if ( month > 0 && month < 20 )
			{
				year = ( PESEL / 1000000000 ) + 1900 ; // dla lat 1900-1999 miesi�ce w PESELach by�y podane normalnie
				
				cout.width( 2 );
    			cout.fill( '0' );
				cout << day << ".";
				cout.width( 2 );
    			cout.fill( '0' ); 
				cout << month << "." << year << endl;
				
				if ( dateValidation (year, month, day) )
				{
					cout << "Data urodzin niepoprawna" << endl;
				}
				
				else
				{
					cout << "Data urodzin poprawna" << endl;
				}
			}
			
			if ( month > 80 && month < 100 )
			{
				month = month - 80 ;
				year = ( PESEL / 1000000000 ) + 1800; // dla lat 1800-1899 miesi�ce w peselach by�y powi�kszone o 80
				
				cout.width( 2 );
    			cout.fill( '0' );
				cout << day << ".";
				cout.width( 2 );
    			cout.fill( '0' ); 
				cout << month << "." << year << endl;
				
				if ( dateValidation (year, month, day) )
				{
					cout << "Data urodzin niepoprawna" << endl;
				}
				
				else
				{
					cout << "Data urodzin poprawna" << endl;
				}
				
			}
			
			if ( month > 20 && month < 40 )
			{
				month = month - 20 ;
				year = ( PESEL / 1000000000 ) + 2000 ; // dla lat 2000-2099 miesi�ce w PESELach s� powi�kszone o 20
				
				cout.width( 2 );
    			cout.fill( '0' );
				cout << day << ".";
				cout.width( 2 );
    			cout.fill( '0' ); 
				cout << month << "." << year << endl;
				
				if ( dateValidation (year, month, day) )
				{
					cout << "Data urodzin niepoprawna" << endl;
				}
				
				else
				{
					cout << "Data urodzin poprawna" << endl;
				}
			}
		}
		
		else
		{
			cout << "Niepoprawna cyfra kontrolna" << endl;
			PESEL2 = 1; // je�li b�dzie nieporawna system poprosi o podanie PESELu
		}
	}
	
	else
	{
		PESEL2 = 1;
		cout << "PESEL musi miec 11 cyfr" << endl;
	}
}
	
system ( "pause" ) ;
return 0;
}
