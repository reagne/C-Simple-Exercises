#include <iostream>
using namespace std;

void discardVowels(char *text)
{
	char samogloski[100] = "AaEeIiOoUuYy";
	
	for ( int i = 0; text[i] != '\0'; i++ ) // przechodzimy przez poszczeg�lne litery w tek�cie
	{
		for ( int j = 0; j < 12; j++ ) // przechodzimy przez poszczeg�lne samog�oski
		{
			if ( text[i] == samogloski[j] ) // je�li litera jest samog�osk�
			{
				for ( ; text[i] != '\0'; i++ ) // przenosimy wszyskie litery o jedno oczko w lewo
											   // tym samym pierwsza litera znika, a druga litera
											   // staje si� pierwsz�.
				{
					text[i] = text[i+1];
				}
				i = 0; // zerujemy i, co oznacza, �e sparawdzamy tekst od pocz�tku.
					   // na wypadek, gdyby druga litera (po usuni�tej) tak�e by�a samog�osk�.
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
