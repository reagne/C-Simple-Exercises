#include <iostream>
using namespace std;

// FUNKCJA:
int przywitaj(string osoba) // int - typ funkcji; przywitaj - nazwa funkcji;
							// string osoba - ARGUMENT(Y) funkcji, kt�ry sk�ada si� z typu i nazwy
{
	cout << "Hello " << osoba << "!" << endl;
	
	return 0; // INT W FUNKCJI oznacza, �e funkcja zwraca liczb� ca�kowit�
			  // w naszym przypadku jest to liczba 0
}
// Poniewa� nasza funkcja nic nie zwraca, r�wnie dobrze mo�emy zapisa� ja tak:

void przywitaj2 (string osoba)
{
	cout << "Hello " << osoba << "!" << endl;
	
	return; // void oznacza, �e nasza funkcja niczego nie zwraca st�d nie ma niczego przy return
}

// DO CZEGO MO�NA WYKORZYSTA� ZWRACANIE FUNKCJI? Przyk�ad:
int kwadrat(int x)
{
	return x*x;
}

bool parzysta(int x) // zmienna bool zwraca tylko prawd� i fa�sz
{
	return (x%2)==0;
}
/* Pierwsza funkcja ZWR�CI nam kwadrat argumentu, a druga informacj� czy liczba jest parzysta
*/

// FUNKCJA MO�E MIE� KILKA ARGUMENT�W:
int max(int a, int b) // oddzielamy kolejne argumenty przecinkami
{
    int x;			  // dana funkcja zwr�ci nam wi�ksz� z dw�ch liczba ca�kowitych
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
definiujemy je po to, aby w jeden spos�b realizowa� zadania powtarzalne.
 
W przyk�adzie funkcji przywitaj, gdyby�my mieli tysi�ce imion mo�emy w �atwy spos�b zmieni� 
tre�� powitania. Gdyby�my powitanie mieli w funkcji main:
    int main() 
    {
        cout << "Hello Tytus!" << endl;
        cout << "Hello Romek!" << endl;
        cout << "Hello Atomek!" << endl;
        return 0;
    } 
Musieliby�my zmienia� tre�� ka�dej linijki po kolei.
*/
int main()
{
//	FUNKCJA INT PRZYWITAJ
	przywitaj("Tytus"); // WYWO�UJEMY funkcj� przywitaj I przekazujemy odpowiedni� 
	przywitaj("Romek"); // warto�� argumentu osoba do niej
	przywitaj("Atomek");
	
	cout << endl << endl;
	
//  FUNKCJA VOID PRZYWITAJ2
	przywitaj2("Tytus"); // WYWO�UJEMY funkcj� przywitaj2 I przekazujemy odpowiedni� 
	przywitaj2("Romek"); // warto�� argumentu osoba do niej
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
