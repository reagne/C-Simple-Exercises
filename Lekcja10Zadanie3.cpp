#include <iostream>
using namespace std;

unsigned long long int fibonacci( int n )
{
	unsigned long long int ciag[1000] = {0};
	int i;
	
	// Funkcja licz¹ca poszczególne elementy tabeli ciag:
	for ( i = 0; i < n; i++)
	{
		if ( i == 0 )
		{
			( ciag[i] = 0 );
		}
		if ( i == 1 )
		{
			( ciag[i] = 1 );
		}
		if ( i > 1 )
		{
			( ciag[i] = ciag[i-1] + ciag[i-2] );
		}
	}
	
	return ciag[n-1]; // poniewa¿ tabela zaczyna siê od 0 odejmujemy 1, poniewa¿ w funkcji g³ównej zaczynamy od jedynki
}

int main ()
{
	int n;
	
	cin >> n; // podajemy liczbê naturaln¹ od 1 do 1000
	
	for( int i = 1; i <= n; i++ ) // wyœwietli poszczególne liczby
	{
		cout << fibonacci(i) << " ";
	}
	
	cout << endl;
	system ( "pause" );
	return 0;
}
