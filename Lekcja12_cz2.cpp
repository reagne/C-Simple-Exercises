#include <iostream>
using namespace std;

//___W S K A � N I K I   A  T A B L I C E   W I E L O W Y M I A R O W E___

/* 
WA�NE!!!!

Dla tablic wielowymiarowych kolejne elementy tablicy umieszczone s� w s�siaduj�cych kom�rkach pami�ci.
W takim razie deklaracja tablicy int tablica[2][3] = { {1,2,3}, {4,5,6} };
jest r�wnoznaczna z deklaracj� int tablica[2][3] = { 1,2,3,4,5,6 };. 
Zrozumienie tego faktu jest kluczowe dla opanowania wska�nik�w.
*/

int main()
{
	int i, j;
	const int row = 2;
	const int col = 3;
	int tablica[row][col]; 

	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			tablica[i][j] = j; 
		}        
	}
	
	// Stworzymy wska�nik, kt�ry pokazuje na pierwszy element tablicy.
	int * pTab; 
	pTab=&tablica[0][0]; // tutaj nie dzia�a = tablica;
	
	// Maj�c adres pocz�tku tablicy i dwa indeksy (i oraz j), mo�emy znale�� odpowiadaj�cy tym indeksom 
	// element tablica[i][j]. Licz�c od pocz�tku tablicy, musimy przesun�� si� "w d�" o i wierszy 
	// (a ka�dy z tych wierszy ma col kolumn), a nastepnie przesun�� si� "w prawo" o j pozycji. 
	// Zatem w pami�ci odleg�o�� elementu tablica[i][j] od pocz�tku tablicy wynosi: 
	//               >>>>>    i * col + j    <<<<<<<<.
	// Przyk�adowo, je�li i=1, a j=2 to 1*3+2 = 5, czyli ptab[5] = &tablica[1][2], czyli jest to 6 element
	// "tablicy jednowymiarowej" ptab.
	// Na podstawie tych oblicze� mo�emy teraz odczyta� wszystkie elementy tablicy operuj�c wy��cznie na 
	// wska�niku:
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			cout << *(pTab + i * col + j) << " ";
		}        
	}
	
	cout << endl;  
	
	// A skoro w pami�ci wszystkie elementy tablicy wielowymiarowej umieszczone s� liniowo, to odczytuj�c
	// wszystkie elementy tablicy nawet nie musimy dba� o to, w kt�rym rz�dzie i kolumnie tabeli si� 
	// znajdujemy. Wystarczy przesun�� wska�nik za ka�dym razem po odczytaniu elementu:
	
	pTab = &tablica[0][0]; 
	for (i = 0; i < row * col; i++) 
	{
		cout << *pTab << " "; 
		pTab++; 
	}
	
	cout << endl;
	
	return 0;
}
