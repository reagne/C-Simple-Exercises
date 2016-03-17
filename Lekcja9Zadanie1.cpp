#include <iostream>
using namespace std;

/*----- ZADANIE ----------------------------------------------------------------------------------------- 
Napisz funkcjê jakiTrojkat. Funkcja bêdzie mia³a trzy argumenty, dziêki którym pobierze d³ugoœci trzech
boków trójk¹ta: a, b i c. Funkcja sprawdzi jaki trójk¹t mo¿na stworzyæ z podanych boków trójk¹ta. 
Jako wynik swego dzia³ania funkcja zwróci jedn¹ z wartoœci enum:
*/

enum rodzajTrojkata
{
	BRAK,		// jezeli nie mozna stworzyc trojkata
	PROSTOKATNY,	// jezeli trojkat jest prostokatny
	ROZWARTOKATNY,	// jezeli trojkat jest rozwartokatny
	OSTROKATNY	// jezeli trojkat jest ostrokatny
};

//----SPRAWDZA CZY PODANE D£UGOŒCI MOG¥ STWORZYÆ TROJKAT-----------------------------------------------
bool czyTrojkat ( int a , int b, int c )
{

	if ( a != 0 && b != 0 && c != 0) // je¿eli jakakolwiek liczba bêdzie 0 zwróci false
	{
	// podmienianie wartoœci zmiennych tak, aby c mia³o wartoœæ najdluzszego z boków:
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
	// suma dwóch krótszych boków musi byæ wiêksza niæ bok trzeci, aby mo¿na stworzyæ trójk¹t:
		return c < a + b;
	}

	else
	{
		return 0;	// jeœli powy¿sze nie zostanie spe³nione funkcja zwróci 0, jeœli bêdzie spe³nione zwróci 1.
	}
}

//----SPRAWDZA JAKI TROJKAT MOZNA UTWORZYC------------------------------------------------------------
int jakiTrojkat ( int a , int b, int c )
{
	int x;
	if ( czyTrojkat (a, b, c) == 1 ) // jeœli z podanych d³ugoœci mo¿na utworzyæ trójk¹t
	{
		// podmienianie wartoœci zmiennych tak, aby c mia³o wartoœæ najdluzszego z boków:
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
		
		// sprawdzanie jaki rodzaj trojk¹ta:
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
	} while ( (a != 0 || b != 0 || c != 0) ); // jeœli wszystkie wprowadzone liczby bêd¹ zerami, pêtla zostanie przerwana

system ( "pause" );
return 0;
}
