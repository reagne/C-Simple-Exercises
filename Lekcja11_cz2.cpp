#include <iostream>
using namespace std;

//_______ W S K A  N I K   J A K O   A R G U M E N T   F U N K C J I________________

	void printNumber (int number)
	{
		number++;
		cout << "In function printNumber(), number = " << number << "\n";
	}
	
	/* Wywo³anie funkcji printNumber(five) sprawia, ¿e wartoœæ zmiennej five jest kopiowana do 
	nowej zmiennej lokalnej, która nazywa siê number. Wewn¹trz funkcji zmienn¹ number mo¿emy 
	zmieniaæ do woli, jednak nie ma to wp³ywu na zmienn¹ five. Operujemy na nowej zmiennej, 
	która jest kopi¹ five i pocz¹tkowo ma tak¹ sam¹ wartoœæ. */
	
	void changeAndPrintNumber (int * pNumber)
	{
		(*pNumber)++; // zwiêksza wartoœæ znajduj¹c¹ siê pod danym adresem, a nie adres!!
		cout << "In function changeAndPrintNumber(), *pNumber = " << *pNumber << "\n";
	}
	
	/* Funkcja ta przyjmuje jako argument wskaŸnik. Wywo³uj¹c tê funkcjê, w nawiasach podajemy adres 
	zmiennej five ( &five ). Wiêc wewn¹trz funkcji changeAndPrintNumber() nie operujemy na kopii zmiennej five, 
	ale na wskaŸniku, do którego przypisaliœmy adres zmiennej five. A skoro znamy adres zmiennej to 
	jesteœmy w stanie zmieniæ wartoœæ tej zmiennej. Dlatego po inkrementacji wskaŸnika wewn¹trz funkcji 
	(a dok³adnie mówi¹c po inkrementacji wartoœci zmiennej, na któr¹ wskazuje wskaŸnik), wartoœæ 
	zmiennej five wynosi 6. */
	
	int main()
	{
		int five = 5;
		printNumber(five);
		cout << "After calling printNumber(), five = " << five << "\n";
		
		changeAndPrintNumber(&five); 
		// dlaczego &five? Argument jest wskaŸnikiem, a do wskaŸnika przypisujemy zawsze adres!
		
		cout << "After calling changeAndPrintNumber(), five = " << five << "\n";		
		
		return 0;
	}
	
/* Po uruchomieniu tego programu na konsoli zobaczymy:
In function printNumber(), number = 6
After calling printNumber(), five = 5
In function changeAndPrintNumber(), *pNumber = 6
After calling changeAndPrintNumber(), five = 6
*/

//______________PODSUMOWANIE_______________________

/* Na koniec przypomnimy sobie kilka najwa¿niejszych punktów dotycz¹cych wskaŸników:

1. Mo¿esz poznaæ adres, pod którym zmienna znajduje siê w pamiêci komputera. 
Robi siê to za pomoc¹ operatora &: cout << &i;

2. WskaŸnik w jêzyku C++ deklarujemy tak samo jak dowoln¹ zmienn¹, dodaj¹c przed nazw¹ gwiazdkê: 
int *p;

3. WskaŸnik inicjalizujemy podaj¹c mu adres zmiennej: p = &i;. 
W tym momencie piszemy samo p, bez gwiazdki.

4. Jeœli chcesz wpisaæ now¹ wartoœæ do zmiennej pokazywanej przez wskaŸnik - u¿ywasz gwiazdki*p = 15;

5. p => adres, *p => wartoœæ zmiennej znajduj¹cej siê pod tym adresem

6. Ustawienie wskaŸnika na tablicê: p = &tab[0];, lub drugi sposób: pTab = dziesiatki;.

7. Je¿eli funkcja przyjmuje w argumencie wskaŸnik: void foo(int *pointer), to wywo³uj¹c tê funkcjê 
musisz podaæ adres zmiennej lub nazwê wskaŸnika: foo(&i)lub foo(anotherPointer) 

*/
