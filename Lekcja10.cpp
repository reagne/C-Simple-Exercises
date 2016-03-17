#include <iostream>
using namespace std;

int main()
{
	
//  TABLICE JEDNOWYMIAROWE

	int liczby[3];    // tablica 3-elementowa typu int
	
					  // typZmiennej nazwaTablicy[iloscElement�w]
    
    liczby[0] = 5;    // indeksy tablicy NUMERUJEMY OD 0, a nie od 1
    liczby[1] = 10;   // tab[n] PIERWSZY ELEMENT TO tab[0], A OSTATNI tab[n-1]
    liczby[2] = 15;
    
    float ceny[100];
    
    ceny[0] = 3.99;   // pierwszy element tablicy
    ceny[1] = 4.99;   // drugi element tablicy
    ceny[99] = 99.90; // setny element tablicy
    ceny[100] = 100;  // b��d! element 101, tablica jest zadeklarowana jako stuelementowa
    
    // Mo�emy od razu zadeklarowa�, co ma si� znajdowa� w zmiennych (tzw. INICJALIZACJA TABLICY)
    int wiek[5] = {30, 40, 23, 55, 16};
    string imiona[5] = {"Stefan", "Anna", "Joanna", "Jacek", "Jojacek"};
    for (int i = 0; i < 5; i++)
    {
        cout << imiona[i] << " jak sie masz? \n";
    }

// 	TABLICE WIELOWYMIAROWE

	/*
	Przyk�ad: robimy dzienniczek ucznia i chcemy u�y� tablicy, aby trzyma� w niej oceny. 
	Ka�dy ucze� mo�e mie� ile� tam ocen z ka�dego przedmiotu, a tych przedmiot�w jest te� ile� tam. 
	Tak� tablic� mo�emy zakodowa� tak:
	*/
	
	// rozmiar tablicy musi by� warto�ci� sta��, wi�c u�ywamy przedrostka const
    const int iloscPrzedmiotow = 15, maxIloscOcen = 10;
    
    // Tworzymy tablic� i inicjalizujemy zerami
    int dzienniczekUcznia[iloscPrzedmiotow][maxIloscOcen] = {0};
    
    /*
    Nasz dzienniczekUcznia jest tablic� dwuwymiarow�, kt�ra jest przyk�adem tablicy wielowymiarowej. 
	Tablica ta posiada 15 rz�d�w, a w ka�dym jest 10 kolumn.
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
    
    cout << sizeof(dzienniczekUcznia) << endl; // pokazuje ilke pami�ci zu�ywa dana tablica w bajtach
	
	// Mo�na tak�e stworzy� tablic� TR�JWYMIAROW�. Dodaejmy kolejn� zmienn�:
	const int iloscDzieci = 32;
	
	// Tworzymy tablic� tr�jwymiarow�:
	int dziennikOcen[iloscDzieci][iloscPrzedmiotow][maxIloscOcen] = {0};
	
// DZIA�ANIA NA TABLICACH

	tablica [5] = {1, 2}; // niezadeklarowane warto�ci b�d� zerami; r�wnowa�ne z {1, 2, 0, 0, 0}
	tablica[0] = 666; // zapisanie warto�ci 666 pod indeksem 0 (czyli w pierwszym elemencie tablicy)
	tablica[1] = tablica[0]; // drugi element b�dzie mia� tak� sam� warto�� jak pierwszy: 666
	tablica[2] -= 3; //zmniejszenie warto�ci zapisanej pod indexem 2 o 3
	tablica[3]++; //inkrementacja warto�ci spod indeksu 3
	tablica[4] = tablica[0] + 33; //pod indexem 4 umieszczamy warto�� elementu z indexu 0 powi�kszonego o 33
	tablica[5] = 12; // b��d! tablica ma tylko 5 element�w z indeksami 0..4!

	system ( "pause" );
	return 0;
}
