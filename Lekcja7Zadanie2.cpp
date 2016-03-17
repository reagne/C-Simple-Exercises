#include <iostream>
using namespace std;

int main()
{
long long int PESEL;
long long int PESEL2;

while(PESEL!=0) // dzi�ki temu, je�li podany PESEL b�dzie niepoprawny, system poprosi o podanie PESELu
{
cout << "Podaj swoj numer PESEL: ";
cin	>> PESEL;
int i=0;
PESEL2=PESEL%100000000000; // aby zachowa� nr PESEL do dalszych dzia�a�
	do
	{
	PESEL=PESEL/10; 
	i++;
	}while (PESEL>0); // sprawdza czy PESEL ma 11 cyfr i tym samym zeruje zmienn� PESEL. 
	if(i==11) // W tym przypadku PESEL jest poprawny, a od tej pory PESEL=0,wi�c wykorzystujemy PESEL2
	{
		int cyfra_kontrolna=PESEL2%10; //ostatnia liczba w PESELu
		int suma;
		int a=(PESEL2/10000000000); // poszeg�lne liczby w PESELU od 1 do przedostatniej
		int b=(PESEL2/1000000000)%10;
		int c=(PESEL2/100000000)%10;
		int d=(PESEL2/10000000)%10;
		int e=(PESEL2/1000000)%10;
		int f=(PESEL2/100000)%10;
		int g=(PESEL2/10000)%10;
		int h=(PESEL2/1000)%10;
		int j=(PESEL2/100)%10;
		int k=(PESEL2/10)%10;
		// sprawdzamy zgodno�� cyfry kontrolnej
		suma=1*a+3*b+7*c+9*d+1*e+3*f+7*g+9*h+1*j+3*k;
		int cyfra_kontrolna2=10-suma%10;
		if((suma%10==0 && cyfra_kontrolna==0) || (suma%10!=0 && cyfra_kontrolna==cyfra_kontrolna2))
		{
			cout << "Poprawna cyfra kontrolna wynoszaca " << cyfra_kontrolna << endl;
			
			//sprawdzamy p�e� - tylko je�li cyfra kontrolna jest poprawna
			if(k==0 || k%2==0)
			{
				cout << "Kobieta" << endl;
			}
			else
			{
				cout << "Mezczyzna" << endl;
			}
			/* reszta z dzielenia przez 2 b�dzie wynosi� w tym przypadku zawsze 0 lub 1 .
			Je�li w if wynik b�dzie 0 oznacza� to b�dzie fa�sz i przjedziemy do else, 
			a je�li 1 to prawd�.Mo�na wi�c by zapisa� to nast�puj�co:
			 */
			if (k%2)
			{
				cout << "Mezczyzna" << endl;
			}
			else
			{
				cout << "Kobieta" << endl;
			}
			//wypisywanie daty
			cout << "Data urodzin: ";
			if (c==0 || c==1)
			{
				cout << e << f << "." << c << d << ".19" << a << b << endl;
			}
			if (c==8 || c==9)
			{
				cout << e << f << "." << c-8 << d << ".18" << a << b << endl;
			}
			if (c==2 || c==3)
			{
				cout << e << f << "." << c-2 << d << ".20" << a << b << endl;
			}
		}
		else
		{
			cout << "Niepoprawna cyfra kontrolna" << endl;
			PESEL=1; // je�li b�dzie nieporawna system poprosi o podanie PESELu
		}
	}
	else
	{
		PESEL=1;
		cout << "PESEL musi miec 11 cyfr" << endl;
	}
}
	
system("pause");
return 0;
}
