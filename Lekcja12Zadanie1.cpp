#include <iostream>
#include <cstdlib> // dla funkcji srand i rand
#include <ctime> // dla time, clock, clock_t, CLOCKS_PER_SEC
#include <cstring> // dla funkcji memcpy
using namespace std;

//___SORTOWANIE B¥BELKOWE________________
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
	
	for (int c = 0; c < elements; c++) // wype³nienie tablicy
	{
		array[c] = rand() % 1000;
		cout << array[c] << " ";
	}
	cout << endl;
	
	/*
	MEMCPY  - funkcja z biblioteki "£añcuchu znaków", która kopiuje zawartoœæ jednego bloku pamiêci 
			  do drugiego.
			
			void * memcpy( void * destination, const void * source, size_t num );
			
			gdzie,
			
			void* destination  - WskaŸnik na pamiêæ, do której nast¹pi kopiowanie.
			const void* source - WskaŸnik na pamiêæ, z której nast¹pi kopiowanie.
			size_t num         - Liczba bajtów do skopiowania.
			
			Zwraca wskaŸnik przekazany do funkcji poprzez argument destination. 
			
			Kopiuje num bajtów z miejsca wskazywanego przez source do pamiêci wskazywanej przez 
			destination. 
			Bloki pamiêci nie mog¹ na siebie zachodziæ. 
	*/
		
	memcpy(insertion, array, elements * sizeof(array[0]));
	memcpy(selection, array, elements * sizeof(array[0]));
	memcpy(bubble, array, elements * sizeof(array[0]));
	
	/*
	CLOCKS_PER_SEC - makro, dziêki któremu uzyskujemy liczbê sekund.
					 Liczba cykli zegara na sekundê. (makro)
	*/
	
	start = clock(); // clock() - Funkcja, która zwraca liczbê cykli, które up³ynê³y od chwili 
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
