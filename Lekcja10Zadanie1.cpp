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
		
		for ( j = 1; j <= 10; j++) 					// powoduje i¿ poni¿sza sekwencja jest powtórzona 10 razy
		{
			for( i = 0; i < liczby; i++ )			// przesuwa pierwsz¹ cyfrê przez poszczególne 10 pozycji w tabeli
			{										// np. jeœli pierwsza cyfra jest równa 10 to ta dziesi¹tka jest przesuwana
				if ( kolejnosc[i] > kolejnosc[i+1] )// tak d³ugo, a¿ wyl¹duje w miejscu, gdzie nie ma od niej mniejszej liczby
				{
					int x = kolejnosc[i];
					kolejnosc[i] = kolejnosc[i+1];
					kolejnosc[i+1] = x;
				}
			}
		}
		
		for ( i = 0; i < liczby; i++) 				// wyœwietla now¹ kolejnoœæ 
		{
			cout << kolejnosc[i] << " ";
		}
	}
	
	cout << endl;
	
	system ( "pause" );
	return 0;
}
