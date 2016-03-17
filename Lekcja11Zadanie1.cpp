#include <iostream>
using namespace std;

void swapNum(int * num1, int * num2)
{
	int a;
	a = *num1;
	*num1 = *num2;
	*num2 = a;
}

void reverseText(char * text)
{
	int dlugosc;
	char litery[100];
	
	for ( dlugosc = 0;  text[dlugosc] != '\0'; dlugosc++ )
	{
		litery[dlugosc] = text[dlugosc];
	}
	
	int i = dlugosc-1; // odejmujemy '\0', poniewa¿ jeœli od niej zaczniemy to tekst nam siê nie
					   // wyœwietli:
					   
	// Jeœli wprowadzisz tekst o d³ugoœci n znaków to znak n+1 bêdzie zawsze równy 0. 
	// Dla wiêkszoœci funkcji, które operuj¹ na ³añcuchach znaków jest to informacja, 
	// aby zakoñczyæ wyœwietlanie kolejnych znaków z tablicy. Inaczej mówi¹c: tak siê 
	// oznacza koniec tekstu. Pamiêtaj, ¿e numerowanie indeksów tablicy zaczyna siê od zera!
	
	for ( int j = 0 ; j < dlugosc; j++ )
	{
		text[j] = litery[i];
		i--;
	}

}

int main ()
{
	int x, y;
	
	cout << "Podaj dwie liczby: \nLiczba 1: ";
	cin >> x;
	cout << "Liczba 2: ";
	cin >> y;
	
	
	char tekst[] = "Ala lubi chodzic do przedszkola";
	char * ptekst = tekst; // wskazuje na 0 element tablicy
	
	const char * test = "hello";
	
	cout << "test: " << test << " *test: " << *test << " test[4]: " << test[4] << " *(test+3): " << *(test+3) << endl;
	
	cout << "Przed: " << x << " " << y << endl;
	swapNum(&x, &y);
	cout << "Po: " << x << " " << y << endl;
	reverseText(ptekst);
	cout << ptekst << endl;
	
	system ("pause");
	return 0;
}
