#include <iostream>
using namespace std;

int main()

{
	int number;
	cout << "Podaj ilosc osob: ";
	cin >> number;

if (number==1 || number==2)
{
	cout << "2";
}	
else if (number==3 || number==4)
{
	cout << "4";
}
else if (number==5 || number==6)
{
	cout << "6";
}
else if (number>6 && number<=10)
{
	cout << "10";
}
else
{
	cout << "0";
}

	return 0;
}

