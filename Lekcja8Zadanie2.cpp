#include <iostream>
using namespace std;

enum menu // w enum nie mo�e by� spacji
{
	Wyjscie,
	SprawdzSaldo,
	Wyplac50zl,
	Wyplac100zl,
	WyplacInnaKwote 
};

bool poprawnaKwota(int kwota)
{
	return (( kwota % 50 ) == 0 && kwota > 0 );
}

int main()
{
int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy
int kwota;              // kwota, kt�r� bedziemy wyplaca� z bankomatu;
cout << "Menu:\n1 - Sprawdz saldo\n2 - Szybka wyplata 50 zl\n3 - Szybka wyplata 100 zl\n4 - Wyplac inna kwote\n0 - Wyjscie" << endl;
int menu;

while( stanKonta > 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaci�
{
	cout << "Podaj nr operacji, ktora chcesz wykonac: ";
    cin >> menu;
    switch(menu)
	{
	case SprawdzSaldo:
		cout << "Stan twojego konta: " << stanKonta << endl << endl;
		break; 
	case Wyplac50zl:
		kwota = 50;
		stanKonta -= kwota;
		cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji: "
            << stanKonta << endl << endl;
    	break;
	case Wyplac100zl:
		kwota = 100;
		stanKonta -= kwota;
		cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji: "
            << stanKonta << endl << endl;
    	break;
	case WyplacInnaKwote:
        cout << "Podaj kwote" << endl;
        cin >> kwota; // u�ytkownik wpisuje kwot�; zwr�� uwag�, �e strza�ki s� w drug� stron� ni� przy cout
            
        if (poprawnaKwota(kwota)==1 && kwota <= stanKonta) // czy u�ytkownik ma na koncie tyle pieni�dzy, ile chce wyplaci�?
        {
            stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
            cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji: "
            << stanKonta << endl << endl;
        }
        else if (poprawnaKwota(kwota)==0)
        {
            cout << "Kwota musi byc dodatnia i byc wielokrotnoscia 50 zl." << endl << endl;
            continue;
		}
		else if (kwota==0)
		{
			break; // powoduje przerwanie p�tli i przej�cie bezpo�rednio do instrukcji po p�tli
		}
        else    // chcesz wyplaci� wiecej niz masz pieni�dzy na koncie
        {
            cout << "Nie masz tyle Kasy! Masz: "
            << stanKonta << endl << endl;
        }
        break;
    case Wyjscie:
    	cout << "Dziekujemy za korzystanie z naszego bankomatu.\n";
		return 0;
    }
}

cout << "Dziekujemy za korzystanie z naszego bankomatu.\n";
system("pause");
return 0;
}    
