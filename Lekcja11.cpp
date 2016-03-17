#include <iostream>
using namespace std;

int main()
{

//___ A D R E S   Z M I E N N E J_____pobieranie - operator &________
	
	cout << "Wywo�ywanie adresu pami�ci" << endl;
	float f = 5.45;
	int i = 3;
	cout << "f = " << f << ", adres &f = " << &f << "\n"; // adres jest zapisywany w systemie szesnastkowym
	cout << "i = " << i << ", adres &i = " << &i << endl;
	
	

//____W S K A � N I K - rodzaj zmiennej przechowuj�cej adres pami�ci__________
	
	//WSKA�NIK w j�zyku C++ DEKLARUJEMY tak samo jak dowoln� zmienn�, dodaj�c przed nazw� gwiazdk� (*).

	int *p;         // gwiazdka mo�e by� przy nazwie wska�nika
	char* r;      	// lub przy typie wska�nika. Tutaj r jest wska�nikiem na zmienn� typu char.
	double * q;  	// wol� pisa� po �rodku, aby nie myli� deklaracji z wywo�ywaniem warto�ci dla wska�nika
	float * x, * y, z; // ... w tym przypadku tylko x oraz y s� wska�nikami na typ float, z jest zmienn� typu float
	
	//______Przyk�ad u�ycia wska�nika____________
	
	cout << "Przyk�ad u�ycia wska�nika" << endl;
	int x = 10, y = 20;
	int * wsk; // deklarujemy wska�nik
	
	wsk = &x;  // do wska�nika przypisujemy adres, pod kt�rym jest zmienna x

	/*
	je�li wy�wietlimy co zawiera wsk (bez gwiazdki), to otrzymamy adres kom�rki w pami�ci (tej kom�rki, 
	gdzie przechowywana jest zmienna x). Je�li natomiast chcemy wy�wietli�, co si� znajduje w tej 
	kom�rce pami�ci (a wi�c jaka jest warto�� zmiennej przechowywanej pod tym adresem), to mo�emy 
	u�y� *wsk (z gwiazdk�)
	*/
	cout << "Wyswietlamy adres: wsk = " << wsk << ". Wyswietlamy wartosc: *wsk = " << *wsk << "\n";
	cout << "Zmienna x = " << x << ". Adres w ktorej przechowywana jest ta zmienna &x= " << &x << "\n\n";

	wsk = &y;  // a teraz wska�nik wskazuje na zmienn� y
	// zmienna y po�o�ona jest pod innym adresem w pami�ci ni� x oraz ma inn� warto��
	cout << "Wyswietlamy adres: wsk = " << wsk << ". Wyswietlamy wartosc: *wsk = " << *wsk << "\n"; 
	cout << "Zmienna y = " << y << ". Adres w kt�rej przechowywana jest ta zmienna &y= " << &y << "\n\n";
	   
	// Obecnie wsk wskazuje na zmienn� y. Jak zmieni� warto�� zmiennej y? Chcemy wpisa� tam np. warto�� -5
	// wsk = -5; // b��d! Pr�bujemy ustawi� wska�nik na adres -5!
	*wsk = -5; // poprawnie; w kom�rk� pami�ci na kt�r� wskazuje wsk wstaw warto�� -5
	cout << "Po tym przypisaniu *wsk = " << *wsk << ", x= " << x << ", y= " << y << "\n";
	


//______W S K A � N I K I   N A   T A B L I C E_________________
	
	cout << "Wska�nik przy tablicach" << endl;
	const int rozmiar = 8;
	int dziesiatki[rozmiar];
	int * pTab; // deklarujemy z gwiazdk�.
	
	// !!!!	// Note that the asterisk (*) used when declaring a pointer only means that it is 
			// a pointer (it is part of its type compound specifier), and should not be confused 
			// with the dereference operator, but which is also written with an asterisk (*). 
			// They are simply two different things represented with the same sign.
	
	// Inicjalizacja tablicy
	for (int i = 0; i < rozmiar; i++)
	{
		dziesiatki[i] = i * 10;
	}
	
	// ustawienie wska�nika, aby pokazywa� poczatek tablicy
	pTab = &dziesiatki[0]; // to samo uzyskamy w ten spos�b: pTab = dziesiatki, poniewa�
	// nazwa tablicy jest jednocze�nie adresem jej pierwszego elementu (czyli elementu o indeksie zero). 
	// Oznacza to, �e dla kompilatora nazwa dziesiatki oznacza dok�adnie to samo co &dziesiatki[0].
	
	for (int i = 0; i < rozmiar; i++)
	{
		cout << *pTab << endl;
		pTab++;
		// mo�liwe s� tak�e operacje typu: pTab + 3 przesunie wska�nik o 3 pola w tablicy (wi�c dla tablicy int b�dzie to 12 bajt�w).
		// pTab - 1 (czyli inaczej zapisuj�c pTab--) przesunie si� na poprzedni element w tablicy..
	}
	
	//___Inny przyk�ad____
	
	cout << "Wska�nik a tablice - drugi przyk�ad" << endl;
	const int rozmiar = 5;
	int wiek[rozmiar] = {30, 40, 23, 55, 16};
	string imiona[rozmiar] = {"Stefan", "Anna", "Joanna", "Jacek", "Jojacek"};

	int * pLat = &wiek[rozmiar - 1]; // Ustawienie wska�nika na ostatni element tablicy
	string * pOsoba = imiona;        // Ustawienie wska�nika na tablic�. Nazwa tablicy = adres pierwszego elementu.

	for (int i = 0; i < rozmiar; i++, pOsoba++, pLat--)
	{
		cout << *pOsoba << " ma " << *pLat << " lat.\n";
	}
	
	//____Kolejny przyk�ad_______
	
	cout << " Inny przyk�ad" << endl;
	int numbers[5];
  	int * p;
  	p = numbers;  *p = 10; 		// numbers[0]
  	p++;  *p = 20; 				// numbers[1]
  	p = &numbers[2];  *p = 30;	// numbers[2]
  	p = numbers + 3;  *p = 40;	// numebrs[3]
  	p = numbers;  *(p+4) = 50;	// numebrs[4]
  	
	for (int n=0; n<5; n++)
  	{
    	cout << numbers[n] << ", ";
	}
	cout << endl;
	
//____ W S K A � N I K I   I   C O N S T__________

	// to declare pointers that can access the pointed value to read it, but not to modify it, 
	// it is enough with qualifying the type pointed by the pointer as const.
	cout << "Wska�nik sta�ej zmiennej" << endl;	
	int x;
	int y = 10;
	const int * p = &y; // These pointer point to constant content it cannot modify, but it is not 
						// constant itselves: i.e., the pointer can still be incremented or assigned 
						// different addresses, although it cannot modify the content it point to.
	x = *p;          // ok: reading p
	// *p = x;       // error: modifying p, which is const-qualified 
	
	// Note also, that the expression &y is of type int*, but this is assigned to a pointer of 
	// type const int*. This is allowed: a pointer to non-const can be implicitly converted to 
	// a pointer to const. But not the other way around!

		  int *       p1 = &x;  // non-const pointer to non-const int
	const int *       p2 = &x;  // non-const pointer to const int
          int * const p3 = &x;  // const pointer to non-const int
    const int * const p4 = &x;  // const pointer to const int 

	system ("pause");
	return 0;
}
