#include <iostream>
using namespace std;

/*
W tym zadaniu nie wykorzystujemy ani switcha ani enum, gdy¿ liczby nie s¹ ca³kowite i s¹ tak¿e
przedzia³y liczbowe, których switch nie obs³uguje.
Wykorzystujemy za to zmienne float.
*/
int main()
{
cout << "WSKAZNIK BMI"<< endl << endl;
float a,b,c;
cout << "Podaj swoja wage (np. 63): ";
cin >> a;
cout << "Podaj swoj wzrost (np. 1.72): "; // W liczbach dziesiêtnych nie ma przecinków tylko KROPKI!!
cin >> b;
cout << endl;
c=a/(b*b);
cout.precision(4);
cout << "Twoj BMI wynosi "<< c <<" = ";
if(c<16.00)
{
	cout << "wyglodzenie";
}
else if (c>=16.00 && c<17.00)
{
	cout << "wychudzenie";
}
else if (c>=17.00 && c<18.50)
{
	cout << "niedowaga";
}
else if (c>=18.50 && c<25.00)
{
	cout << "prawidlowe";
}
else if (c>=25.00 && c<30.00)
{
	cout << "nadwaga";
}
else if (c>=30.00 && c<35.00)
{
	cout << "1 stopien otylosci";
}
else if (c>=35.00 && c<40.00)
{
	cout << "2 stopien otylosci";
}
else
{
	cout << "3 stopien otylosci";
}	
cout << endl;
system ("pause");
return 0;
}
