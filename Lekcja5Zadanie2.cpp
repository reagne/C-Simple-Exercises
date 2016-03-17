#include <iostream>
using namespace std;

int main()
{	
long long int liczba; // czy u¿ywam z unsigned nic to nie zmienia. Przy podawaniu liczb ujemnych nie 
int i=0;              // wyrzuca mnie z programu. Dziwne.

	cout << "Podaj dodatnia liczbe calkowita:\n";
	do
	{
	cin >> liczba;
	i=0;    // jeœli tego by nie by³o tutaj przy pêtli i sumowa³oby siê w nieskoñczonoœæ.A tak je zerujemy.
		do
		{
			liczba/=10;
			i++;
		}while(liczba>0); 
/*
Dana funkcja oblicza iloœæ cyfr poprzed iloœæ razy, jaka jest potrzebna do podzielenia liczby ca³kowitej
przez 10, a¿ dojdziemy do 0. Czyli, np. liczba 123
123/10 = 12 <- to jest 1 raz
12,3/10 = 1 <- to jest 2 raz
1,23/10 = 0 <- to jest 3 raz i osi¹gneliœmy 0. UWAGA! Tym samym wartoœæ liczba wynosi teraz 0.

zmienna i pokazuje nam tê iloœæ razy.
*/

		if (i==10)
		{
			cout << "OK!" << endl << endl;
		}
		else
		{
			cout << "NOT OK!" << endl << endl;
		}
	} while (liczba==0);
// nie ma mo¿liwoœci wyjœcia z tego za pomoc¹ przycisku. Nie jestem pewna jak to zrobiæ.	
system ("pause");
}
