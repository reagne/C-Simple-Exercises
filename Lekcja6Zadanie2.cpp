#include <iostream>
using namespace std;

enum menu // w enum nie mo¿e byæ spacji
{
	Wyjscie,
	SprawdzSaldo,
	Wyplac50zl,
	Wyplac100zl,
	WyplacInnaKwote 
};

int main()
{
int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy
int kwota;              // kwota, któr¹ bedziemy wyplacaæ z bankomatu;
cout << "Menu:\n1 - Sprawdz saldo\n2 - Szybka wyplata 50 zl\n3 - Szybka wyplata 100 zl\n4 - Wyplac inna kwote\n0 - Wyjscie" << endl;
int nr_akcji;

while( stanKonta > 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaciæ
{
    cin >> nr_akcji;
    switch(nr_akcji)
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
        cin >> kwota; // u¿ytkownik wpisuje kwotê; zwróæ uwagê, ¿e strza³ki s¹ w drug¹ stronê ni¿ przy cout
            
        if (kwota>0 && kwota <= stanKonta) // czy u¿ytkownik ma na koncie tyle pieniêdzy, ile chce wyplaciæ?
        {
            stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
            cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji: "
            << stanKonta << endl << endl;
        }
        else if (kwota<0)
        {
            cout << "Kwota musi byc dodatnia." << endl << endl;
            continue;
		}
		else if (kwota==0)
		{
			break; // powoduje przerwanie pêtli i przejœcie bezpoœrednio do instrukcji po pêtli
		}
        else    // chcesz wyplaciæ wiecej niz masz pieniêdzy na koncie
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
