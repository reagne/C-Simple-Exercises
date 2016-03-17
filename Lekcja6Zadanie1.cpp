#include <iostream>
using namespace std;

/*
Enum to typ wyliczeniowy - rodzaj danych, kt�ry zawiera ju� list� warto�ci, jak� mo�na nada� 
zmiennej w�asnego typu enum. Taki typ poprzedza s�owo kluczowe enum.
W tym typie u�ywa si� PRZECINK�W. Zawsze przy ostatnim elemencie takowego nie poleca si� u�ywa�.
Pierwszy element na li�cie ma domy�lnie warto�� 0, nast�pny - warto�� 1 i tak dalej, chyba �e sami
ustalimy warto�ci.
*/
enum figury
{
     dziewiatka = 9,
     dziesiatka,
     walet,
     dama,
     krol,
     as
};

enum kolory
{
     pik = 40,
     trefl = 60,
     caro = 80,
     kier = 100
};
int suma_liczb ()
{
	return kolory(pik) + figury(dziewiatka);
}
int main()
{
//Podstawowe dzia�ania na enum:
	figury nr_figury;
	nr_figury=dziewiatka;
	kolory nr_koloru;
	nr_koloru=pik;
	cout << nr_figury << endl; // zwr�ci liczb� przypisan� do wyznaczonej 3 linijki wcze�niej dziewi�tki
	cout << endl;
	cout << nr_koloru << endl; // zwr�ci liczb� przypisan� do wyznaczonego 2 linijki wcze�neij koloru
	cout << endl;
	cout << suma_liczb() << " " << kolory(trefl) << endl; // zwr�ci sum� liczb przypisanych do wyznaczonych wcze�niej w funkcji suma_liczb i liczb� przypisan� do koloru trefl.
	cout << endl;

cout << "ZADANIE:"<< endl;
int a;
int b;
cin >> a; cin >> b;

switch(a)
{
	case 9:
		cout << "dziewiatka "; 
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	case 10:
		cout << "dziesiatka ";
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	case 11:
		cout << "walet ";
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	case 12:
		cout << "dama ";
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	case 13:
		cout << "krol ";
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	case 14:
		cout << "as ";
		switch(b)
		{
			case 40:
				cout << "pik"; break;
			case 60:
				cout << "trefl"; break;
			case 80:
				cout << "caro"; break;
			case 100:
				cout << "kier"; break;
			default:
				cout << "niepoprawna wartosc"; break;
		}
		break;
	default:
		cout << "niepoprawna wartosc"; break;
}
cout << endl;
	
system("pause");
return 0;
}
