#include <iostream>
using namespace std;

/*----- ZADANIE ----------------------------------------------------------------------------------------- 
Napisz funkcj� jakiTrojkat. Funkcja b�dzie mia�a trzy argumenty, dzi�ki kt�rym pobierze d�ugo�ci trzech
bok�w tr�jk�ta: a, b i c. Funkcja sprawdzi jaki tr�jk�t mo�na stworzy� z podanych bok�w tr�jk�ta. 
Jako wynik swego dzia�ania funkcja zwr�ci jedn� z warto�ci enum:
*/

enum rodzajTrojkata
{
	BRAK,		// jezeli nie mozna stworzyc trojkata
	PROSTOKATNY,	// jezeli trojkat jest prostokatny
	ROZWARTOKATNY,	// jezeli trojkat jest rozwartokatny
	OSTROKATNY	// jezeli trojkat jest ostrokatny
};

//----SPRAWDZA CZY PODANE D�UGO�CI MOG� STWORZY� TROJKAT-----------------------------------------------
bool czyTrojkat ( int a , int b, int c )
{

	if ( a != 0 && b != 0 && c != 0) // je�eli jakakolwiek liczba b�dzie 0 zwr�ci false
	{
	// podmienianie warto�ci zmiennych tak, aby c mia�o warto�� najdluzszego z bok�w:
		int x;
		if ( a >= b && a >= c )
		{
			x = a;
			a = c;
			c = x;
		}
		else if ( b >= a && b >= c )
		{
			x = b;
			b = c;
			c = x;
		}
	// suma dw�ch kr�tszych bok�w musi by� wi�ksza ni� bok trzeci, aby mo�na stworzy� tr�jk�t:
		return c < a + b;
	}

	else
	{
		return 0;	// je�li powy�sze nie zostanie spe�nione funkcja zwr�ci 0, je�li b�dzie spe�nione zwr�ci 1.
	}
}

//----SPRAWDZA JAKI TROJKAT MOZNA UTWORZYC------------------------------------------------------------
int jakiTrojkat ( int a , int b, int c )
{
	int x;
	if ( czyTrojkat (a, b, c) == 1 ) // je�li z podanych d�ugo�ci mo�na utworzy� tr�jk�t
	{
		// podmienianie warto�ci zmiennych tak, aby c mia�o warto�� najdluzszego z bok�w:
		if ( a >= b && a >= c )
		{
			x = a;
			a = c;
			c = x;
		}
		else if ( b >= a && b >= c )
		{
			x = b;
			b = c;
			c = x;
		}
		
		// sprawdzanie jaki rodzaj trojk�ta:
		if ( a*a + b*b == c*c )
		{
			return rodzajTrojkata(PROSTOKATNY);
		}
		
		else if ( a*a + b*b < c*c )
		{
			return rodzajTrojkata(ROZWARTOKATNY);
		}
		
		else if ( a*a + b*b > c*c )
		{
			return rodzajTrojkata(OSTROKATNY);
		}
	}

	else
	{
		return rodzajTrojkata(BRAK);
	}
}

int main ()
{
int a, b, c;
cout << "Podaj dlugosci bokow trojkata: " << endl;
	do
	{
		cin >> a >> b >> c;
	
		switch ( jakiTrojkat(a, b, c) )
		{
			case BRAK:
				cout << "BRAK" << endl; break;
			
			case PROSTOKATNY:
				cout << "PROSTOKATNY" << endl; break;
			
			case ROZWARTOKATNY:
				cout << "ROZWARTOKATNY" << endl; break;
			
			case OSTROKATNY:
				cout << "OSTROKATNY" << endl; break;
		} 
	} while ( (a != 0 || b != 0 || c != 0) ); // je�li wszystkie wprowadzone liczby b�d� zerami, p�tla zostanie przerwana

system ( "pause" );
return 0;
}
