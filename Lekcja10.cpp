#include <iostream>
using namespace std;

int main()
{
	
//  TABLICE JEDNOWYMIAROWE

	int liczby[3];    // tablica 3-elementowa typu int
	
					  // typZmiennej nazwaTablicy[iloscElementów]
    
    liczby[0] = 5;    // indeksy tablicy NUMERUJEMY OD 0, a nie od 1
    liczby[1] = 10;   // tab[n] PIERWSZY ELEMENT TO tab[0], A OSTATNI tab[n-1]
    liczby[2] = 15;
    
    float ceny[100];
    
    ceny[0] = 3.99;   // pierwszy element tablicy
    ceny[1] = 4.99;   // drugi element tablicy
    ceny[99] = 99.90; // setny element tablicy
    ceny[100] = 100;  // b³¹d! element 101, tablica jest zadeklarowana jako stuelementowa
    
    // Mo¿emy od razu zadeklarowaæ, co ma siê znajdowaæ w zmiennych (tzw. INICJALIZACJA TABLICY)
    int wiek[5] = {30, 40, 23, 55, 16};
    string imiona[5] = {"Stefan", "Anna", "Joanna", "Jacek", "Jojacek"};
    for (int i = 0; i < 5; i++)
    {
        cout << imiona[i] << " jak sie masz? \n";
    }

// 	TABLICE WIELOWYMIAROWE

	/*
	Przyk³ad: robimy dzienniczek ucznia i chcemy u¿yæ tablicy, aby trzymaæ w niej oceny. 
	Ka¿dy uczeñ mo¿e mieæ ileœ tam ocen z ka¿dego przedmiotu, a tych przedmiotów jest te¿ ileœ tam. 
	Tak¹ tablicê mo¿emy zakodowaæ tak:
	*/
	
	// rozmiar tablicy musi byæ wartoœci¹ sta³¹, wiêc u¿ywamy przedrostka const
    const int iloscPrzedmiotow = 15, maxIloscOcen = 10;
    
    // Tworzymy tablicê i inicjalizujemy zerami
    int dzienniczekUcznia[iloscPrzedmiotow][maxIloscOcen] = {0};
    
    /*
    Nasz dzienniczekUcznia jest tablic¹ dwuwymiarow¹, która jest przyk³adem tablicy wielowymiarowej. 
	Tablica ta posiada 15 rzêdów, a w ka¿dym jest 10 kolumn.
    */
    
    // Uzupelnijmy ocenami od 1 do 6
    for (int i = 0; i < iloscPrzedmiotow; i++)
    {
        for (int j = 0; j < maxIloscOcen; j++)
        {
            dzienniczekUcznia[i][j] = j % 6 + 1;
            cout << dzienniczekUcznia[i][j] << "\t"; // "\t" to TAB.
        }
        cout << "\n";
    }
    
    cout << sizeof(dzienniczekUcznia) << endl; // pokazuje ilke pamiêci zu¿ywa dana tablica w bajtach
	
	// Mo¿na tak¿e stworzyæ tablicê TRÓJWYMIAROW¥. Dodaejmy kolejn¹ zmienn¹:
	const int iloscDzieci = 32;
	
	// Tworzymy tablicê trójwymiarow¹:
	int dziennikOcen[iloscDzieci][iloscPrzedmiotow][maxIloscOcen] = {0};
	
// DZIA£ANIA NA TABLICACH

	tablica [5] = {1, 2}; // niezadeklarowane wartoœci bêd¹ zerami; równowa¿ne z {1, 2, 0, 0, 0}
	tablica[0] = 666; // zapisanie wartoœci 666 pod indeksem 0 (czyli w pierwszym elemencie tablicy)
	tablica[1] = tablica[0]; // drugi element bêdzie mia³ tak¹ sam¹ wartoœæ jak pierwszy: 666
	tablica[2] -= 3; //zmniejszenie wartoœci zapisanej pod indexem 2 o 3
	tablica[3]++; //inkrementacja wartoœci spod indeksu 3
	tablica[4] = tablica[0] + 33; //pod indexem 4 umieszczamy wartoœæ elementu z indexu 0 powiêkszonego o 33
	tablica[5] = 12; // b³¹d! tablica ma tylko 5 elementów z indeksami 0..4!

	system ( "pause" );
	return 0;
}
