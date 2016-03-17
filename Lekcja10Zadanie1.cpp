#include <iostream>
using namespace std;

int main ()
{
	const int liczby = 10;
	
	int kolejnosc[liczby] = {0};
	
	cout << "Podaj 10 liczb calkowitych: ";
	
	for( int i = 0; i < liczby ; i++ )
	{
	cin >> kolejnosc[i];
	}
	
	if( kolejnosc[0] < 0 )
	{
		for( int i = 9; i >= 0; i-- )
		{
			cout << kolejnosc[i] << " ";
		}
	} 
	else
	{
		int i, j;
		
		for ( j = 1; j <= 10; j++) 					// powoduje i� poni�sza sekwencja jest powt�rzona 10 razy
		{
			for( i = 0; i < liczby; i++ )			// przesuwa pierwsz� cyfr� przez poszczeg�lne 10 pozycji w tabeli
			{										// np. je�li pierwsza cyfra jest r�wna 10 to ta dziesi�tka jest przesuwana
				if ( kolejnosc[i] > kolejnosc[i+1] )// tak d�ugo, a� wyl�duje w miejscu, gdzie nie ma od niej mniejszej liczby
				{
					int x = kolejnosc[i];
					kolejnosc[i] = kolejnosc[i+1];
					kolejnosc[i+1] = x;
				}
			}
		}
		
		for ( i = 0; i < liczby; i++) 				// wy�wietla now� kolejno�� 
		{
			cout << kolejnosc[i] << " ";
		}
	}
	
	cout << endl;
	
	system ( "pause" );
	return 0;
}
