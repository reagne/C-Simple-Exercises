#include <iostream>
using namespace std;

// FUNKCJA:
int przywitaj(string osoba) // int - typ funkcji; przywitaj - nazwa funkcji;
							// string osoba - ARGUMENT(Y) funkcji, który sk³ada siê z typu i nazwy
{
	cout << "Hello " << osoba << "!" << endl;
	
	return 0; // INT W FUNKCJI oznacza, ¿e funkcja zwraca liczbê ca³kowit¹
			  // w naszym przypadku jest to liczba 0
}
// Poniewa¿ nasza funkcja nic nie zwraca, równie dobrze mo¿emy zapisaæ ja tak:

void przywitaj2 (string osoba)
{
	cout << "Hello " << osoba << "!" << endl;
	
	return; // void oznacza, ¿e nasza funkcja niczego nie zwraca st¹d nie ma niczego przy return
}

// DO CZEGO MO¯NA WYKORZYSTAÆ ZWRACANIE FUNKCJI? Przyk³ad:
int kwadrat(int x)
{
	return x*x;
}

bool parzysta(int x) // zmienna bool zwraca tylko prawdê i fa³sz
{
	return (x%2)==0;
}
/* Pierwsza funkcja ZWRÓCI nam kwadrat argumentu, a druga informacjê czy liczba jest parzysta
*/

// FUNKCJA MO¯E MIEÆ KILKA ARGUMENTÓW:
int max(int a, int b) // oddzielamy kolejne argumenty przecinkami
{
    int x;			  // dana funkcja zwróci nam wiêksz¹ z dwóch liczba ca³kowitych
        if (a > b)
        {
            x = a;
        }
        else
        {
            x = b;
        }
        return x;
}

/* KLUCZOWY ASPEKT FUNKCJI:
definiujemy je po to, aby w jeden sposób realizowaæ zadania powtarzalne.
 
W przyk³adzie funkcji przywitaj, gdybyœmy mieli tysi¹ce imion mo¿emy w ³atwy sposób zmieniæ 
treœæ powitania. Gdybyœmy powitanie mieli w funkcji main:
    int main() 
    {
        cout << "Hello Tytus!" << endl;
        cout << "Hello Romek!" << endl;
        cout << "Hello Atomek!" << endl;
        return 0;
    } 
Musielibyœmy zmieniaæ treœæ ka¿dej linijki po kolei.
*/
int main()
{
//	FUNKCJA INT PRZYWITAJ
	przywitaj("Tytus"); // WYWO£UJEMY funkcjê przywitaj I przekazujemy odpowiedni¹ 
	przywitaj("Romek"); // wartoœæ argumentu osoba do niej
	przywitaj("Atomek");
	
	cout << endl << endl;
	
//  FUNKCJA VOID PRZYWITAJ2
	przywitaj2("Tytus"); // WYWO£UJEMY funkcjê przywitaj2 I przekazujemy odpowiedni¹ 
	przywitaj2("Romek"); // wartoœæ argumentu osoba do niej
	przywitaj2("Atomek");
	
	cout << endl << endl;
	
//  FUNKCJA KWADRAT I PARZYSTA
	int i;
        for (i = 1; i <= 10; i++)
        {
            cout << i << "   " << kwadrat(i) << "   " << parzysta(i) << endl;
        }
        
    cout << endl << endl;
    
// FUNKCJA MAX
	cout << "-13 i 13. Max: " << max(-13,13) << endl;
	cout << "9 i 0. Max: " << max(9,0) << endl;
	cout << "-2 i -10. Max: " << max(-2,-10) << endl;
	cout << "2 i 20. Max: " << max(2,20) << endl;
        
	return 0;
}
