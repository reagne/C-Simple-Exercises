#include <iostream>
using namespace std;

void scalTablice(int *t1, int *t2, int *t3)
{
	for ( int i = 0; i < 5; i++ )
	{
		t3[i] = t1[i];
	}
	
	for ( int j = 5; j < 10; j++ )
	{
		t3[j] = t2[j-5];
	}
}

void sortuj(int *tab)
{
	for ( int i = 0; i < 10; i++)
	{
		if ( tab[i] > tab[i+1] )
		{
			int przech = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = przech;
			i = -1;
		}
		else
		{
			tab[i];
		}
	}
}

int main()
{
	const int rozmiar = 5;
	int tabA [rozmiar] = {5,8,12,-5,7};
	int tabB [rozmiar] = {0, -1, -2,-3, 12};
	int tabC [2*rozmiar] = {0};
	int * ptabA, * ptabB, * ptabC;
	ptabA=tabA;
	ptabB=tabB;
	ptabC=tabC;

	scalTablice(ptabA, ptabB, ptabC);
	cout << "Wynikiem dzialania funkcji scalTablice jest tablica tabC w takiej postaci: \n";
	for ( int i = 0; i < 2*rozmiar; i++ )
	{
		cout << *(ptabC + i) << " ";
	}

	sortuj(ptabC);
	cout << "\n\nWynikiem dzialania funkcji sortuj jest tablica tabC w takiej postaci: \n";
	for ( int i = 0; i < 2*rozmiar; i++ )
	{
		cout << *(ptabC + i) << " ";
	}
	
	cout << endl;
	system ("pause");
	return 0;
}
