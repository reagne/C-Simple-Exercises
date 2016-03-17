#include <iostream>
using namespace std;

//___W S K A è N I K I   A  T A B L I C E   W I E L O W Y M I A R O W E___

/* 
WAØNE!!!!

Dla tablic wielowymiarowych kolejne elementy tablicy umieszczone sπ w sπsiadujπcych komÛrkach pamiÍci.
W takim razie deklaracja tablicy int tablica[2][3] = { {1,2,3}, {4,5,6} };
jest rÛwnoznaczna z deklaracjπ int tablica[2][3] = { 1,2,3,4,5,6 };. 
Zrozumienie tego faktu jest kluczowe dla opanowania wskaünikÛw.
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
	
	// Stworzymy wskaünik, ktÛry pokazuje na pierwszy element tablicy.
	int * pTab; 
	pTab=&tablica[0][0]; // tutaj nie dzia≥a = tablica;
	
	// Majπc adres poczπtku tablicy i dwa indeksy (i oraz j), moøemy znaleüÊ odpowiadajπcy tym indeksom 
	// element tablica[i][j]. Liczπc od poczπtku tablicy, musimy przesunπÊ siÍ "w dÛ≥" o i wierszy 
	// (a kaødy z tych wierszy ma col kolumn), a nastepnie przesunπÊ siÍ "w prawo" o j pozycji. 
	// Zatem w pamiÍci odleg≥oúÊ elementu tablica[i][j] od poczπtku tablicy wynosi: 
	//               >>>>>    i * col + j    <<<<<<<<.
	// Przyk≥adowo, jeúli i=1, a j=2 to 1*3+2 = 5, czyli ptab[5] = &tablica[1][2], czyli jest to 6 element
	// "tablicy jednowymiarowej" ptab.
	// Na podstawie tych obliczeÒ moøemy teraz odczytaÊ wszystkie elementy tablicy operujπc wy≥πcznie na 
	// wskaüniku:
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			cout << *(pTab + i * col + j) << " ";
		}        
	}
	
	cout << endl;  
	
	// A skoro w pamiÍci wszystkie elementy tablicy wielowymiarowej umieszczone sπ liniowo, to odczytujπc
	// wszystkie elementy tablicy nawet nie musimy dbaÊ o to, w ktÛrym rzÍdzie i kolumnie tabeli siÍ 
	// znajdujemy. Wystarczy przesunπÊ wskaünik za kaødym razem po odczytaniu elementu:
	
	pTab = &tablica[0][0]; 
	for (i = 0; i < row * col; i++) 
	{
		cout << *pTab << " "; 
		pTab++; 
	}
	
	cout << endl;
	
	return 0;
}
