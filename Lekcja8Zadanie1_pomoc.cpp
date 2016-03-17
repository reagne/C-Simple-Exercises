#include <iostream>
using namespace std;


int main()
{
	int year; 
	int month; 
	int day;
	int x;
	
	cout << "Rok: ";
	cin >> year >> month >> day;
	cout << endl;
	
	x= (year-2000)*365 + (month-1)*30 + day + 5; // podstawowe dzia�anie, je�li przyj��, �e nie ma lat
	//przest�pnych i wszystkie miesi�ce maj� po 30 dni. Na ko�cu dodana jest pi�tka, poniewa� wiemy, �e
	// dla daty 2000.01.01 powinna wyj�� 6, kt�ra przypisana jest sobocie.
	
	for(month=month-1; month>=1; month--) // dzia�anie, kt�re uwzgl�dnia r�nice w ilo�ci dni w miesi�cach
	{
		if(month==2)
		{
			if((year%4==0 && year%100!=0) || year%400==0)
			{
				x=x-1;
			}
			else
			{
				x=x-2;
			}
		}
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
		{
			x=x+1;
		}
	}
	
	for(year=year-1; year>=2000; year--) // dzia�anie, kt�re uwzgl�dnia lata przest�pne
	{
		if((year%4==0 && year%100!=0) || year%400==0)
		{
			x=x+1;
		}
	}
	
	x=x%7;
	cout << x << endl;
	
	return 0;
}
