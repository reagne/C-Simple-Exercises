#include <iostream>
using namespace std;

//---FUNKCJE WYDZIELAJ¥CE TYSIECZNE KAWA£KI LICZBY------------------------------------------------------------

int nic ( unsigned long long int b )
{
	int x;
	unsigned long long int n = b;
	
	if ( n != 0 )
	{
		n = n % 1000;
		x = n;
		
		return x;
	}
	else
	{
		return 0;
	}
	
}

int tys ( unsigned long long int b )
{		
	int x;
	unsigned long long int t = b;
		
	if ( t >= 1000 )
	{
		t = t % 1000000 / 1000;
		x = t;
	
		return x;
	}
	else
	{
		return 0;
	}
}
			
int mln ( unsigned long long int b )
{
	int	x;
	unsigned long long int m = b;
	
	if ( m >= 1000000 )
	{
		m = m % 1000000000 / 1000000;
		x = m;
		
		return x;
	}
	else
	{
		return 0;
	}
	
}
				
int mld ( unsigned long long int b )
{
	int x;
	unsigned long long int l = b;
	
	if ( l >= 1000000000 )
	{
		l = l % 1000000000000 / 1000000000;
		x = l;
	
		return x;
	}
	else
	{
		return 0;
	}
}

int bln ( unsigned long long int b )
{
	int x;
	unsigned long long int bl = b;					
	
	if ( bl >= 1000000000000 )
	{	
		bl = bl / 1000000000000;
		x = bl;
	
		return x;
	}
	else
	{
		return 0;
	}
}

//---FUNKCJE SWITCH ZAMIENIAJ¥CE POSZCZEGÓLNE LICZBY NA S£OWA--------------------------------------------------------
// w funkcji switch jest cout, wiêc chyba za³o¿enia zadania nie zosta³y spe³nione - cout i cin mia³y
// wystêpowaæ jedynie w funkcji main.

int Slowo1 (int set)
{
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
	
	return set;	
}

int Slowo2 (int dzie)
{
	switch ( dzie )
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
	return dzie;
}

int Slowo2_1 (int nascie)
{
	switch ( nascie )
	{
		case 0:
			break;
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
	return nascie;	
}

int Slowo3 ( int jed )
{
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
	return jed;
}

//---FUNKCJA G£ÓWNA--------------------------------------------------------------------------------------------------

int main ()
{
	unsigned long long int b;
	
	cout << "Wprowadz liczbe od 1 do 1 000 000 000 000 [bez spacji]: ";
	cin >> b;
	
	if ( bln(b) != 0 ) // Nazywa poszczególne sk³adowe biliona
	{
		Slowo1( bln(b)%1000 - bln(b)%100 );
		
		if (bln(b)%100 - bln(b)%10 == 10)
		{
			Slowo2_1( bln(b)%100 );
		}
		else
		{
			Slowo2( bln(b)%100 - bln(b)%10 );
			Slowo3( bln(b)%10 );
		}
		
		cout << "bln ";
	}
	
	if ( mld (b) != 0 )
	{
		Slowo1( mld(b)%1000 - mld(b)%100 );
		
		if (mld(b)%100 - mld(b)%10 == 10)
		{
			Slowo2_1( mld(b)%100 );
		}
		else
		{
			Slowo2( mld(b)%100 - mld(b)%10 );
			Slowo3( mld(b)%10 );
		}
		
		cout << "mld "; 
	}
	
	if ( mln(b) != 0 )
	{
		Slowo1( mln(b)%1000 - mln(b)%100 );
		
		if (mln(b)%100 - mln(b)%10 == 10)
		{
			Slowo2_1( mln(b)%100 );
		}
		else
		{
			Slowo2( mln(b)%100 - mln(b)%10 );
			Slowo3( mln(b)%10 );
		}
		
		cout << "mln ";
	} 
	
	if ( tys(b) != 0 )
	{
		Slowo1( tys(b)%1000 - tys(b)%100 );
		
		if (tys(b)%100 - tys(b)%10 == 10)
		{
			Slowo2_1( tys(b)%100 );
		}
		else
		{
			Slowo2( tys(b)%100 - tys(b)%10 );
			Slowo3( tys(b)%10 );
		}
		cout << "tys. ";	
	} 
	
	if ( nic(b) != 0 )
	{
		Slowo1( nic(b)%1000 - nic(b)%100 );
		
		if (nic(b)%100 - nic(b)%10 == 10)
		{
			Slowo2_1( nic(b)%100 );
		}
		else
		{
			Slowo2( nic(b)%100 - nic(b)%10 );
			Slowo3( nic(b)%10 );
		}
	}
		
	cout << endl;
	system ( "pause" );
	return 0;
}
