#include <iostream>
using namespace std;

int main()
{

//___ A D R E S   Z M I E N N E J_____pobieranie - operator &________
	
	cout << "Wywo³ywanie adresu pamiêci" << endl;
	float f = 5.45;
	int i = 3;
	cout << "f = " << f << ", adres &f = " << &f << "\n"; // adres jest zapisywany w systemie szesnastkowym
	cout << "i = " << i << ", adres &i = " << &i << endl;
	
	

//____W S K A  N I K - rodzaj zmiennej przechowuj¹cej adres pamiêci__________
	
	//WSKANIK w jêzyku C++ DEKLARUJEMY tak samo jak dowoln¹ zmienn¹, dodaj¹c przed nazw¹ gwiazdkê (*).

	int *p;         // gwiazdka mo¿e byæ przy nazwie wskaŸnika
	char* r;      	// lub przy typie wskaŸnika. Tutaj r jest wskaŸnikiem na zmienn¹ typu char.
	double * q;  	// wolê pisaæ po œrodku, aby nie myliæ deklaracji z wywo³ywaniem wartoœci dla wskaŸnika
	float * x, * y, z; // ... w tym przypadku tylko x oraz y s¹ wskaŸnikami na typ float, z jest zmienn¹ typu float
	
	//______Przyk³ad u¿ycia wskaŸnika____________
	
	cout << "Przyk³ad u¿ycia wskaŸnika" << endl;
	int x = 10, y = 20;
	int * wsk; // deklarujemy wskaŸnik
	
	wsk = &x;  // do wskaŸnika przypisujemy adres, pod którym jest zmienna x

	/*
	jeœli wyœwietlimy co zawiera wsk (bez gwiazdki), to otrzymamy adres komórki w pamiêci (tej komórki, 
	gdzie przechowywana jest zmienna x). Jeœli natomiast chcemy wyœwietliæ, co siê znajduje w tej 
	komórce pamiêci (a wiêc jaka jest wartoœæ zmiennej przechowywanej pod tym adresem), to mo¿emy 
	u¿yæ *wsk (z gwiazdk¹)
	*/
	cout << "Wyswietlamy adres: wsk = " << wsk << ". Wyswietlamy wartosc: *wsk = " << *wsk << "\n";
	cout << "Zmienna x = " << x << ". Adres w ktorej przechowywana jest ta zmienna &x= " << &x << "\n\n";

	wsk = &y;  // a teraz wskaŸnik wskazuje na zmienn¹ y
	// zmienna y po³o¿ona jest pod innym adresem w pamiêci ni¿ x oraz ma inn¹ wartoœæ
	cout << "Wyswietlamy adres: wsk = " << wsk << ". Wyswietlamy wartosc: *wsk = " << *wsk << "\n"; 
	cout << "Zmienna y = " << y << ". Adres w której przechowywana jest ta zmienna &y= " << &y << "\n\n";
	   
	// Obecnie wsk wskazuje na zmienn¹ y. Jak zmieniæ wartoœæ zmiennej y? Chcemy wpisaæ tam np. wartoœæ -5
	// wsk = -5; // b³¹d! Próbujemy ustawiæ wskaŸnik na adres -5!
	*wsk = -5; // poprawnie; w komórkê pamiêci na któr¹ wskazuje wsk wstaw wartoœæ -5
	cout << "Po tym przypisaniu *wsk = " << *wsk << ", x= " << x << ", y= " << y << "\n";
	


//______W S K A  N I K I   N A   T A B L I C E_________________
	
	cout << "WskaŸnik przy tablicach" << endl;
	const int rozmiar = 8;
	int dziesiatki[rozmiar];
	int * pTab; // deklarujemy z gwiazdk¹.
	
	// !!!!	// Note that the asterisk (*) used when declaring a pointer only means that it is 
			// a pointer (it is part of its type compound specifier), and should not be confused 
			// with the dereference operator, but which is also written with an asterisk (*). 
			// They are simply two different things represented with the same sign.
	
	// Inicjalizacja tablicy
	for (int i = 0; i < rozmiar; i++)
	{
		dziesiatki[i] = i * 10;
	}
	
	// ustawienie wskaŸnika, aby pokazywa³ poczatek tablicy
	pTab = &dziesiatki[0]; // to samo uzyskamy w ten sposób: pTab = dziesiatki, poniewa¿
	// nazwa tablicy jest jednoczeœnie adresem jej pierwszego elementu (czyli elementu o indeksie zero). 
	// Oznacza to, ¿e dla kompilatora nazwa dziesiatki oznacza dok³adnie to samo co &dziesiatki[0].
	
	for (int i = 0; i < rozmiar; i++)
	{
		cout << *pTab << endl;
		pTab++;
		// mo¿liwe s¹ tak¿e operacje typu: pTab + 3 przesunie wskaŸnik o 3 pola w tablicy (wiêc dla tablicy int bêdzie to 12 bajtów).
		// pTab - 1 (czyli inaczej zapisuj¹c pTab--) przesunie siê na poprzedni element w tablicy..
	}
	
	//___Inny przyk³ad____
	
	cout << "WskaŸnik a tablice - drugi przyk³ad" << endl;
	const int rozmiar = 5;
	int wiek[rozmiar] = {30, 40, 23, 55, 16};
	string imiona[rozmiar] = {"Stefan", "Anna", "Joanna", "Jacek", "Jojacek"};

	int * pLat = &wiek[rozmiar - 1]; // Ustawienie wskaŸnika na ostatni element tablicy
	string * pOsoba = imiona;        // Ustawienie wskaŸnika na tablicê. Nazwa tablicy = adres pierwszego elementu.

	for (int i = 0; i < rozmiar; i++, pOsoba++, pLat--)
	{
		cout << *pOsoba << " ma " << *pLat << " lat.\n";
	}
	
	//____Kolejny przyk³ad_______
	
	cout << " Inny przyk³ad" << endl;
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
	
//____ W S K A  N I K I   I   C O N S T__________

	// to declare pointers that can access the pointed value to read it, but not to modify it, 
	// it is enough with qualifying the type pointed by the pointer as const.
	cout << "WskaŸnik sta³ej zmiennej" << endl;	
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
