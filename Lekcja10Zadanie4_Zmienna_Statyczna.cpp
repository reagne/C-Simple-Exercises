# include <iostream>
using namespace std;

/* int rzut(int iloscKregli) funkcja ma symulowa� rzut kul� - iloscKregli to liczba zbitych
kr�gli w jednym rzucie. Funkcja ma zwraca� ca�kowit� punktacj� po danym rzucie.

Po ka�dym rzucie wypisze na ekran komunikat "runda x, rzut y"
Po ostatnim pojawi si� komunikat "Koniec gry. Uzyskane punkty: x" 
*/

int zmiennaStatyczna()
{
  static int a; // dzi�ki static zapami�ta, �e funkcja raz zosta�a wywo�ana i zapami�ta jej now� warto��
  
  a++;
  return a;
}
 
int zmiennaLokalna()
{
  int A; // zawsze przy wywo�ywaniu zostanie zapami�tane, �e A jest 0 domy�lnie
  A++;
  return A;
}

int main()
{
  cout<<"Wywoluje funkcje ze zmienn� statyczna "<< zmiennaStatyczna() << " i zmienna lokalna " << zmiennaLokalna();
  cout<<"\n...drugi raz "<< zmiennaStatyczna() << " i " << zmiennaLokalna();
  
}
