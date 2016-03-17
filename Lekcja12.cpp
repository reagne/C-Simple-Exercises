#include <iostream>
using namespace std;

void changeAndPrintNumber (int *pNumber)
{
	if (pNumber == 0)
	{
		return;
	}
		
	(*pNumber)++;
	cout << "In function changeAndPrintNumber(), *pNumber = " << *pNumber << "\n";
}

int main()
{
// Wska�niki warto INICJALIZOWA� przy stworzeniu przypisuj�c im od razu konkretny adres pami�ci.
// Je�li nie znamy jeszcze dok�adnego adresu, przypisujemy mu warto�� 0 (NULL). 
// Wska�nik taki nie wskazuje na nic. A to dlatego, �e w systemach operacyjnych nie ma dost�pu do 
// kom�rki o adresie 0. Dlatego te� taki adres mo�emy u�y� do oznaczenia pustego wska�nika.
	int * pLiczba = 0;
	string * pText = NULL;

	if (pLiczba != 0) // lub pro�ciej: if (pLiczba)
	{
		*pLiczba = 6; // wpisze warto�� 6 tylko, je�eli wska�nik nie b�dzie pusty
		cout << *pLiczba;
	}
	
	if (pText)
	{
		*pText = "Ala ma kota";
		cout << *pText;
	}
	
// Dobr� praktyk� jest SPRAWDZENIE WSKA�NIKA przed jego u�yciem.

	int * pSomeValue = 0;
	changeAndPrintNumber(pSomeValue); // PATRZ: funkcja void changeAndPrintNumber (int *pNumber)
	
	
return 0;
}

