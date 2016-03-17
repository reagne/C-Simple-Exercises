#include <iostream>
using namespace std;

enum kierunkowe
{
	Warszawa = 22,
	Krakow = 12,
	Lodz = 42,
	Wroclaw = 71,
	Poznan = 61,
	Gdansk = 58,
	Szczecin = 91,
	Bydgoszcz = 52,
	Lublin = 81,
	Katowice = 32
};

int main()
{
int nr;
cout << "Podaj 9 cyfrowy numer telefonu bez spacji: ";
cin >> nr;

nr = nr%10000000;

switch(nr)
{
	case Warszawa:
		cout << "Warszawa" << endl;
		break;
	case Krakow:
		cout << "Krakow" << endl;
		break;
	case Lodz:
		cout << "Lodz" << endl;
		break;
	case Wroclaw:
		cout << "Wroclaw" << endl;
		break;
	case Poznan:
		cout << "Poznan" << endl;
		break;
	case Katowice:
		cout << "Katowice" << endl;
		break;
	case Gdansk:
		cout << "Gdansk" << endl;
		break;
	case Szczecin:
		cout << "Szczecin" << endl;
		break;
	case Bydgoszcz:
		cout << "Bydgoszcz" << endl;
		break;
	case Lublin:
		cout << "Lublin" << endl;
		break;
	default:
		cout << "Nieznane miasto" << endl;
		break;
}	
	
system("pause");
return 0;
}
