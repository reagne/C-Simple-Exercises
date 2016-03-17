#include <iostream>
using namespace std;

void discardVowels(char *text)
{
	char samogloski[100] = "AaEeIiOoUuYy";
	
	for ( int i = 0; text[i] != '\0'; i++ ) // przechodzimy przez poszczególne litery w tekœcie
	{
		for ( int j = 0; j < 12; j++ ) // przechodzimy przez poszczególne samog³oski
		{
			if ( text[i] == samogloski[j] ) // jeœli litera jest samog³osk¹
			{
				for ( ; text[i] != '\0'; i++ ) // przenosimy wszyskie litery o jedno oczko w lewo
											   // tym samym pierwsza litera znika, a druga litera
											   // staje siê pierwsz¹.
				{
					text[i] = text[i+1];
				}
				i = 0; // zerujemy i, co oznacza, ¿e sparawdzamy tekst od pocz¹tku.
					   // na wypadek, gdyby druga litera (po usuniêtej) tak¿e by³a samog³osk¹.
			}
			else
			{
				text[i];
			}
		}
	}
}

int main()
{
	char ala[] = "Ala ma czerwone auto.";
	char *pTekst = ala;		
		
	discardVowels (pTekst);
	cout << pTekst << endl;
	
	system ("pause");
	return 0;
}
