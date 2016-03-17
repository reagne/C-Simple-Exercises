#include <iostream>
using namespace std;

#define przedmioty 8 // define umo¿liwia nadanie sta³ych wartoœci
#define oceny 10

//----FUNKCJA WYMAGANA - OBLICZA ŒREDNI¥ WSZYSTKICH PRZEDMIOTÓW -----------------------------------------
float obliczSrednia ( int tablica[przedmioty][oceny] )
{
	float x;
	int r = 0;
	
	for( int i = 0; i < przedmioty; i++ )
	{
		
		for( int j = 0; j < oceny; j++ )
		{
			x = ( x + tablica[i][j] );
			
			if ( tablica[i][j] != 0 )
			{
				r++;
			}
		}
	}
	
	if ( x != 0)
		{
		x = x / r;
		cout.precision(2);
		}
	
	return x;
}

//----FUNKCJA OBLICZA ŒREDNI¥ POSZCZEGÓLNYCH PRZEDMIOTÓW-------------------------------------------------
float sredniaPrzedmiotow ( int tablica[przedmioty][oceny], int i )
{
	int r = 0;
	float y = 0;
	
	for( int j = 0; j < oceny; j++ )
	{
		
		if ( tablica[i][j] != 0 )
		{
			y = (y + tablica[i][j]);
			r++;
		}
	}
	
	if ( y != 0 )
	{
		y = y / r;
		cout.precision(2);
		return y;
	}
}

//----FUNKCJA G£ÓWNA - DZIA£ANIE PROGRAMU----------------------------------------------------------------
int main()
{
	int tablica[przedmioty][oceny] = {0};
	
		tablica[0][0] = 5;
		tablica[0][1] = 4;
		tablica[0][2] = 4;
		tablica[0][3] = 5;
		tablica[0][4] = 4;
		tablica[0][5] = 3;
		tablica[0][6] = 1;
		tablica[0][7] = 6;
		tablica[0][8] = 5;
		tablica[0][9] = 5;    

		tablica[1][0] = 2;
		tablica[1][1] = 3;
		tablica[1][2] = 2;
		tablica[1][3] = 3;
		tablica[1][4] = 2;
		tablica[1][5] = 3;
		tablica[1][6] = 2;
		tablica[1][7] = 3;
		tablica[1][8] = 2;
		tablica[1][9] = 3;  
			
		tablica[2][0] = 1;
		tablica[2][1] = 6;
		tablica[2][2] = 0;
		tablica[2][3] = 0;
		tablica[2][4] = 0;
		tablica[2][5] = 0;
		tablica[2][6] = 0;
		tablica[2][7] = 0;
		tablica[2][8] = 0;
		tablica[2][9] = 0;
		
		tablica[3][0] = 5;
		tablica[3][1] = 4;
		tablica[3][2] = 4;
		tablica[3][3] = 5;
		tablica[3][4] = 4;
		tablica[3][5] = 3;
		tablica[3][6] = 1;
		tablica[3][7] = 6;
		tablica[3][8] = 5;
		tablica[3][9] = 5;      
		
	for ( int i = 0; i < przedmioty; i++)			// œrednia poszczególnych przedmiotów po kolei
	{
		if ( sredniaPrzedmiotow ( tablica, i ) != 0 )
		{
			cout <<	sredniaPrzedmiotow ( tablica, i ) << " ";
		}
	}
	
	cout<< endl << obliczSrednia (tablica) << endl; // œrednia wszystkich przedmiotów
	
	system ( "pause" );
	return 0;
}
