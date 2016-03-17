#include <iostream>
using namespace std;

/*
Enum to typ wyliczeniowy - rodzaj danych, który zawiera ju¿ listê wartoœci, jak¹ mo¿na nadaæ 
zmiennej w³asnego typu enum. Taki typ poprzedza s³owo kluczowe enum.
W tym typie u¿ywa siê PRZECINKÓW. Zawsze przy ostatnim elemencie takowego nie poleca siê u¿ywaæ.
Pierwszy element na liœcie ma domyœlnie wartoœæ 0, nastêpny - wartoœæ 1 i tak dalej, chyba ¿e sami
ustalimy wartoœci.
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
//Podstawowe dzia³ania na enum:
	figury nr_figury;
	nr_figury=dziewiatka;
	kolory nr_koloru;
	nr_koloru=pik;
	cout << nr_figury << endl; // zwróci liczbê przypisan¹ do wyznaczonej 3 linijki wczeœniej dziewi¹tki
	cout << endl;
	cout << nr_koloru << endl; // zwróci liczbê przypisan¹ do wyznaczonego 2 linijki wczeœneij koloru
	cout << endl;
	cout << suma_liczb() << " " << kolory(trefl) << endl; // zwróci sumê liczb przypisanych do wyznaczonych wczeœniej w funkcji suma_liczb i liczbê przypisan¹ do koloru trefl.
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
