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
	
	x= (year-2000)*365 + (month-1)*30 + day + 5; // podstawowe dzia³anie, jeœli przyj¹æ, ¿e nie ma lat
	//przestêpnych i wszystkie miesi¹ce maj¹ po 30 dni. Na koñcu dodana jest pi¹tka, poniewa¿ wiemy, ¿e
	// dla daty 2000.01.01 powinna wyjœæ 6, która przypisana jest sobocie.
	
	for(month=month-1; month>=1; month--) // dzia³anie, które uwzglêdnia ró¿nice w iloœci dni w miesi¹cach
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
	
	for(year=year-1; year>=2000; year--) // dzia³anie, które uwzglêdnia lata przestêpne
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
