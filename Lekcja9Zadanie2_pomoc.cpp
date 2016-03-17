#include <iostream>
using namespace std;

// obliczanie dni roboczych w ilosci dni wyznaczonych

int main ()
{
		
int a = 7 ;
int b = a;
int c = 0;
int x = 10;

		for (a ; a < b+x ; a++)
		{
			cout << a % 7 << endl;
			if ( a % 7 != 0 && a % 7 != 6)
			{
				c++;
			}
		}

cout << endl << c << endl;
	
	return 0;
}


