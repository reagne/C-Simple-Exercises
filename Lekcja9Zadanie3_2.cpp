#include <iostream>
using namespace std;


int main ()
{
	unsigned long long int b;
	int jed, nascie, dzies, set;
	int l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13;
	
	cout << "Wprowadz liczbe od 1 do 1 000 000 000 000 [bez spacji]: ";
	cin >> b;
	
	// Poszczególne cyfry w podanej przez u¿ytkownika liczbie:
	l13 = b % 10; // ostatnia
	l12 = b % 100 -l13;
	l11 = b % 1000 - b % 100;
	l10 = ( b % 10000 - b % 1000 ) / 1000 ;
	l9 = ( b % 100000 - b % 10000 ) / 1000;
	l8 = ( b % 1000000 - b % 100000 ) / 1000;
	l7 = ( b % 10000000 - b % 1000000 ) / 1000000;
	l6 = ( b % 100000000 - b % 10000000 ) / 1000000;
	l5 = ( b % 1000000000 - b % 100000000 ) / 1000000;
	l4 = ( b % 10000000000 - b % 1000000000 ) / 1000000000;
	l3 = ( b % 100000000000 - b % 10000000000 ) / 1000000000;
	l2 = ( b % 1000000000000 - b % 100000000000 ) / 1000000000;
	l1 = b / 1000000000000 ; // pierwsza cyfra
	
	
	
//--- BLN ---------------------------------------------------------------------------------------	
	
	if( l1 != 0)
	{
		jed = l1;	
	
	cout << "bln ";
	
	}
	
//---- MLD ------------------------------------------------------------------------------------------
	
	if ( l2 != 0 || l3 != 0 || l4 != 0)
	{
		set = l2;
		if ( l3 != 1)
		{
			dzies = l3;
			jed = l4;
		}
		else
		{
			nascie = l3 + l4;
			jed = 0;
		}
	
	cout << "mld ";
	
	}
	
//---- MLN -----------------------------------------------------------------------------------------
	
	if ( l5 != 0 || l6 != 0 || l7 != 0)
	{
		set = l5;
		if ( l6 != 1)
		{
			dzies = l6;
			jed = l7;
		}
		else
		{
			nascie = l6 + l7;
			jed = 0;
		}
	
	cout << "mln ";
	
	}
	
//----- TYS -----------------------------------------------------------------------------------------	
	
if ( l8 != 0 || l9 != 0 || l10 != 0)
	{
		set = l8;
		if ( l9 != 1)
		{
			dzies = l9;
			jed = l10;
		}
		else
		{
			nascie = l9 + l10;
			jed = 0;
		}

	cout << "tys ";
	
	}
	
//---- RESZTA ------------------------------------------------------------------------------------------	
	
if ( l11 != 0 || l12 != 0 || l13 != 0)
	{
		set = l11;
		if ( l12 != 1)
		{
			dzies = l12;
			jed = l13;
		}
		else
		{
			nascie = l12 + l13;
			jed = 0;
		}	

	}
	
	
	switch ( set )
	{
		case 0:
			break;
		case 100:
			cout << "sto "; break;
		case 200:
			cout << "dwiescie "; break;
		case 300:
			cout << "trzysta "; break;
		case 400:
			cout << "czterysta "; break;
		case 500:
			cout << "piecset "; break;
		case 600:
			cout << "szescset "; break;
		case 700:
			cout << "siedemset "; break;
		case 800:
			cout << "osiemset "; break;
		case 900:
			cout << "dziewiecset "; break;
	}	

	switch ( dzies )
	{
		case 0:
			break;
		case 10:
			break;
		case 20:
			cout << "dwadziescia "; break;
		case 30:
			cout << "trzydziesci "; break;
		case 40:
			cout << "czterdziesci "; break;
		case 50:
			cout << "piecdziesiat "; break;
		case 60:
			cout << "szescdziesiat "; break;
		case 70:
			cout << "siedemdziesiat "; break;
		case 80:
			cout << "osiemdziesiat "; break;
		case 90:
			cout << "dziewiecdziesiat "; break;
	}
	
	switch ( nascie )
	{
		case 10:
			cout << "dziesiec "; break;
		case 11:
			cout << "jedenascie "; break;
		case 12:
			cout << "dwanascie "; break;
		case 13:
			cout << "trzynascie "; break;
		case 14:
			cout << "czternascie "; break;
		case 15:
			cout << "pietnascie "; break;
		case 16:
			cout << "szesnascie "; break;
		case 17:
			cout << "siedemnascie "; break;
		case 18:
			cout << "osiemnascie "; break;
		case 19:
			cout << "dziewietnascie "; break;
	}
		
	switch ( jed )
	{
		case 0:
			break;
		case 1:
			cout << "jeden "; break;
		case 2:
			cout << "dwa "; break;
		case 3:
			cout << "trzy "; break;
		case 4:
			cout << "cztery "; break;
		case 5:
			cout << "piec "; break;
		case 6:
			cout << "szesc "; break;
		case 7:
			cout << "siedem "; break;
		case 8:
			cout << "osiem "; break;
		case 9:
			cout << "dziewiec "; break;
	}
		
	
	cout << endl;
	
	system ( "pause" );
	return 0;
}
