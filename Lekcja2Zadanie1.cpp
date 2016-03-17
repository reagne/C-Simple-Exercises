#include <iostream>
using namespace std;

int main()

{
int year;
cout << "Podaj rok: ";
cin >> year;

if(year==2014)
{
	cout << "Rok 2014 jest obecnie" << endl;
}
if(year>2014)
{
	cout << "Rok x nastapi za y lat" << endl;
}
if(year<0)
{
	cout << "Rok x p.n.e. byl y lat temu" << endl;
}
if(year==0)
{
	cout << "Wprowadzone dane sa nieprawidlowe" << endl;
}
if(year>0 && year<2014) // wstawienie && oznacza ORAZ, z kolei || oznacza LUB
{
	cout << "Rok x byl y lat temu";
}

return 0;
}
