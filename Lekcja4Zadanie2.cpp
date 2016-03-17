#include <iostream>
using namespace std;

int main()
{
	int number;
	int suma=0;
	
	cout << "Podaj liczbe naturalna z zakresu 1-1000: ";
	cin >> number;
	
	if(number>=1 && number<=1000)
	{
		for(int i=1; i<number+1 ; i++)
		{
			suma=suma+i;
		}
		cout << suma;
	}
	else
	{
		cout << 0;
	}
	
return 0;
}
