#include <iostream>
using namespace std;

int main ()
{
	int number;
	int wynik=0;
	
	cout << "KALKULATOR\nLiczba 0 konczy proces sumowania\n Podaj liczby do zsumowania:" << endl;
	
	while (number!=0)
	{
		cin >> number;
		
		if(number!=0)
		{
			wynik = wynik + number;
		}
		else
		{
			cout << "Twoj wynik to: "
				<< wynik << endl << endl;
		}
		}	
		
	cout << "Dziekujemy za skorzystanie z kalkulatora";
	
return 0;
}
