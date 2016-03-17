#include <iostream>
using namespace std;

int main()
{
cout << "GRA. Dart 301." << endl << endl;

	int PunktyWynik=301;
	int punkty;
	int runda=1;
	int rzut=1;
	
	while(PunktyWynik!=0)
	{
		
		cout << "Runda " << runda << ", rzut " << rzut << ": ";
		cin >> punkty;
			if(punkty>=0 && punkty<=60)
			{
			PunktyWynik -= punkty;
			rzut++;
				if(PunktyWynik<0)
				{
				PunktyWynik += punkty;
				cout << "Runda " << runda << ", BUST!\nLiczba Twoich punktow: " << PunktyWynik << endl << endl;
				runda++;
				rzut=1;
				}
				if(PunktyWynik==0)
				{
				break;
				}
				if(rzut==4)
				{
				cout << "Runda " << runda << ", liczba punktow: " << PunktyWynik << endl << endl;
				runda++;
				rzut=1;
				}
			}
			else if(punkty==-1)
			{
			return 0;
			}
			else
			{
			cout << "Niepoprawna ilosc punktow." << endl << endl;
			continue;
			}	
	}
	
	cout << "Gra zakonczona w rundzie " << runda;
	
return 0;
}
