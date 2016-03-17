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
// WskaŸniki warto INICJALIZOWAÆ przy stworzeniu przypisuj¹c im od razu konkretny adres pamiêci.
// Jeœli nie znamy jeszcze dok³adnego adresu, przypisujemy mu wartoœæ 0 (NULL). 
// WskaŸnik taki nie wskazuje na nic. A to dlatego, ¿e w systemach operacyjnych nie ma dostêpu do 
// komórki o adresie 0. Dlatego te¿ taki adres mo¿emy u¿yæ do oznaczenia pustego wskaŸnika.
	int * pLiczba = 0;
	string * pText = NULL;

	if (pLiczba != 0) // lub proœciej: if (pLiczba)
	{
		*pLiczba = 6; // wpisze wartoœæ 6 tylko, je¿eli wskaŸnik nie bêdzie pusty
		cout << *pLiczba;
	}
	
	if (pText)
	{
		*pText = "Ala ma kota";
		cout << *pText;
	}
	
// Dobr¹ praktyk¹ jest SPRAWDZENIE WSKANIKA przed jego u¿yciem.

	int * pSomeValue = 0;
	changeAndPrintNumber(pSomeValue); // PATRZ: funkcja void changeAndPrintNumber (int *pNumber)
	
	
return 0;
}

