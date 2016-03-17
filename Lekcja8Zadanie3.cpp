#include <iostream>
using namespace std;

//==== FUNCKJA: SPRAWDZA POPRAWNOŒÆ DATY URODZENIA W PESELU ==============================================================
bool dateValidation(int year, int month, int day)
{
	if( month == 2 ) 
	{
		if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) // sprawdza lata przestêpne
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
	
return 0; // jeœli data jest poprawna wynikiem bêdzie 0.
}

//==== FUNKCJA: SPRAWDZA PARAMETRY PESELu ===================================================================
int main()
{
long long int PESEL;
long long int PESEL2;

while ( PESEL2 != 0 ) // dziêki temu, jeœli podany PESEL bêdzie niepoprawny, system poprosi o podanie PESELu
{
cout << "Podaj swoj numer PESEL: ";
cin	>> PESEL;

//----SPRAWDZA CZY PESEL MA 11 CYFR-----------------------------------------------------------------
int i = 0;
PESEL2 = PESEL; // aby zachowaæ nr PESEL do dalszych dzia³añ

	do
	{
	PESEL2 = PESEL2 / 10; 
	i++ ;
	} while ( PESEL2 > 0 );
		 
	if ( i == 11 ) // W tym przypadku PESEL jest poprawny, a od tej pory PESEL2=0
	{
		int cyf_kon = PESEL % 10; //ostatnia liczba w PESELu - podana cyfra kontrolna
		int a = ( PESEL / 10000000000 ); // poszególne liczby w PESELU od 1 do przedostatniej
		int b = ( PESEL / 1000000000 ) % 10;
		int c = ( PESEL / 100000000 ) % 10;
		int d = ( PESEL / 10000000 ) % 10;
		int e = ( PESEL / 1000000 ) % 10;
		int f = ( PESEL / 100000 ) % 10;
		int g = ( PESEL / 10000 ) % 10;
		int h = ( PESEL / 1000 ) % 10;
		int j = ( PESEL / 100 ) % 10;
		int k = ( PESEL / 10 ) % 10;
		
//----SPRAWDZA ZGODNOŒÆ CYFRY KONTROLNEJ-----------------------------------------------------------
		int suma = ( a + 3 * b + 7 * c + 9 * d + e + 3 * f + 7 * g + 9 * h + j + 3 * k ) % 10;
		int cyf_kon2 = 10 - suma ; // rzeczywista cyfra kontrolna
		
		if ( ( suma == 0 && cyf_kon == 0) || (suma != 0 && cyf_kon == cyf_kon2 ) )
		{
			cout << "Poprawna cyfra kontrolna wynoszaca " << cyf_kon << endl;
			
//----SPRAWDZA P£EÆ--------------------------------------------------------------------------------
			if( k == 0 || k % 2 == 0 )
			{
				cout << "Kobieta" << endl;
			}
			
			else
			{
				cout << "Mezczyzna" << endl;
			}
			/* reszta z dzielenia przez 2 bêdzie wynosiæ w tym przypadku zawsze 0 lub 1 .
			Jeœli w if wynik bêdzie 0 oznaczaæ to bêdzie fa³sz i przjedziemy do else, 
			a jeœli 1 to prawdê.Mo¿na wiêc by zapisaæ to nastêpuj¹co:
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
			
			month = ( PESEL / 10000000 ) % 100 ; // wyznaczamy dni, miesi¹ce i rok inaczej ni¿ wykorzystuj¹c
			day = ( PESEL / 100000 ) % 100 ;     // liczby od a-f, aby móc wykorzystaæ funkcjê dateValidation
			
			if ( month > 0 && month < 20 )
			{
				year = ( PESEL / 1000000000 ) + 1900 ; // dla lat 1900-1999 miesi¹ce w PESELach by³y podane normalnie
				
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
				year = ( PESEL / 1000000000 ) + 1800; // dla lat 1800-1899 miesi¹ce w peselach by³y powiêkszone o 80
				
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
				year = ( PESEL / 1000000000 ) + 2000 ; // dla lat 2000-2099 miesi¹ce w PESELach s¹ powiêkszone o 20
				
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
			PESEL2 = 1; // jeœli bêdzie nieporawna system poprosi o podanie PESELu
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
