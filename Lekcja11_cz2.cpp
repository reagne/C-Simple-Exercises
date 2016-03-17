#include <iostream>
using namespace std;

//_______ W S K A � N I K   J A K O   A R G U M E N T   F U N K C J I________________

	void printNumber (int number)
	{
		number++;
		cout << "In function printNumber(), number = " << number << "\n";
	}
	
	/* Wywo�anie funkcji printNumber(five) sprawia, �e warto�� zmiennej five jest kopiowana do 
	nowej zmiennej lokalnej, kt�ra nazywa si� number. Wewn�trz funkcji zmienn� number mo�emy 
	zmienia� do woli, jednak nie ma to wp�ywu na zmienn� five. Operujemy na nowej zmiennej, 
	kt�ra jest kopi� five i pocz�tkowo ma tak� sam� warto��. */
	
	void changeAndPrintNumber (int * pNumber)
	{
		(*pNumber)++; // zwi�ksza warto�� znajduj�c� si� pod danym adresem, a nie adres!!
		cout << "In function changeAndPrintNumber(), *pNumber = " << *pNumber << "\n";
	}
	
	/* Funkcja ta przyjmuje jako argument wska�nik. Wywo�uj�c t� funkcj�, w nawiasach podajemy adres 
	zmiennej five ( &five ). Wi�c wewn�trz funkcji changeAndPrintNumber() nie operujemy na kopii zmiennej five, 
	ale na wska�niku, do kt�rego przypisali�my adres zmiennej five. A skoro znamy adres zmiennej to 
	jeste�my w stanie zmieni� warto�� tej zmiennej. Dlatego po inkrementacji wska�nika wewn�trz funkcji 
	(a dok�adnie m�wi�c po inkrementacji warto�ci zmiennej, na kt�r� wskazuje wska�nik), warto�� 
	zmiennej five wynosi 6. */
	
	int main()
	{
		int five = 5;
		printNumber(five);
		cout << "After calling printNumber(), five = " << five << "\n";
		
		changeAndPrintNumber(&five); 
		// dlaczego &five? Argument jest wska�nikiem, a do wska�nika przypisujemy zawsze adres!
		
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

/* Na koniec przypomnimy sobie kilka najwa�niejszych punkt�w dotycz�cych wska�nik�w:

1. Mo�esz pozna� adres, pod kt�rym zmienna znajduje si� w pami�ci komputera. 
Robi si� to za pomoc� operatora &: cout << &i;

2. Wska�nik w j�zyku C++ deklarujemy tak samo jak dowoln� zmienn�, dodaj�c przed nazw� gwiazdk�: 
int *p;

3. Wska�nik inicjalizujemy podaj�c mu adres zmiennej: p = &i;. 
W tym momencie piszemy samo p, bez gwiazdki.

4. Je�li chcesz wpisa� now� warto�� do zmiennej pokazywanej przez wska�nik - u�ywasz gwiazdki*p = 15;

5. p => adres, *p => warto�� zmiennej znajduj�cej si� pod tym adresem

6. Ustawienie wska�nika na tablic�: p = &tab[0];, lub drugi spos�b: pTab = dziesiatki;.

7. Je�eli funkcja przyjmuje w argumencie wska�nik: void foo(int *pointer), to wywo�uj�c t� funkcj� 
musisz poda� adres zmiennej lub nazw� wska�nika: foo(&i)lub foo(anotherPointer) 

*/
