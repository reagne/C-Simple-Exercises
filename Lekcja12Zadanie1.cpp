#include <iostream>
#include <cstdlib> // dla funkcji srand i rand
#include <ctime> // dla time, clock, clock_t, CLOCKS_PER_SEC
#include <cstring> // dla funkcji memcpy
using namespace std;

//___SORTOWANIE B�BELKOWE________________
void bubbleSort(int * array, int elements)
{
	
}

//___SORTOWANIE PRZEZ WSTAWIANIE____________
void insertionSort(int * array, int elements)
{
	
}

//___SORTOWANIE PRZEZ WYBIERANIE____________
void selectionSort(int * array, int elements)
{
	
}


int main()
{
	clock_t start, i, s, b; // Typ do przechowywania liczby cykli zegara. (alias)
	double czas = 0;
	
	const int elements = 10;
	int array[elements];
	int insertion[elements];
	int selection[elements];
	int bubble[elements];

	srand(time(NULL));
	
	for (int c = 0; c < elements; c++) // wype�nienie tablicy
	{
		array[c] = rand() % 1000;
		cout << array[c] << " ";
	}
	cout << endl;
	
	/*
	MEMCPY  - funkcja z biblioteki "�a�cuchu znak�w", kt�ra kopiuje zawarto�� jednego bloku pami�ci 
			  do drugiego.
			
			void * memcpy( void * destination, const void * source, size_t num );
			
			gdzie,
			
			void* destination  - Wska�nik na pami��, do kt�rej nast�pi kopiowanie.
			const void* source - Wska�nik na pami��, z kt�rej nast�pi kopiowanie.
			size_t num         - Liczba bajt�w do skopiowania.
			
			Zwraca wska�nik przekazany do funkcji poprzez argument destination. 
			
			Kopiuje num bajt�w z miejsca wskazywanego przez source do pami�ci wskazywanej przez 
			destination. 
			Bloki pami�ci nie mog� na siebie zachodzi�. 
	*/
		
	memcpy(insertion, array, elements * sizeof(array[0]));
	memcpy(selection, array, elements * sizeof(array[0]));
	memcpy(bubble, array, elements * sizeof(array[0]));
	
	/*
	CLOCKS_PER_SEC - makro, dzi�ki kt�remu uzyskujemy liczb� sekund.
					 Liczba cykli zegara na sekund�. (makro)
	*/
	
	start = clock(); // clock() - Funkcja, kt�ra zwraca liczb� cykli, kt�re up�yn�y od chwili 
					 //			  uruchomienia programu.
	selectionSort(selection, elements);
	s = clock();
	czas = (double)(s - start) / (double)(CLOCKS_PER_SEC);
	cout << "Czas dzialania sortowania przez wybieranie to: " << czas << endl;
	
	start = clock();
	insertionSort(insertion, elements);
	i = clock();
	czas = (double)(i - start) / (double)(CLOCKS_PER_SEC);
	cout << "Czas dzialania sortowania przez wstawianie to: " << czas << endl;
	
	start = clock();
	bubbleSort(bubble, elements);
	b = clock();
	czas = (double)(b - start) / (double)(CLOCKS_PER_SEC);
	cout << "Czas dzialania sortowania babelkowego to: " << czas << endl;
	
	cout << endl;
	system ("pause");
	return 0;
}
