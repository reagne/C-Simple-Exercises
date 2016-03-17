# include <iostream>
using namespace std;

/* int rzut(int iloscKregli) funkcja ma symulowaæ rzut kul¹ - iloscKregli to liczba zbitych
krêgli w jednym rzucie. Funkcja ma zwracaæ ca³kowit¹ punktacjê po danym rzucie.

Po ka¿dym rzucie wypisze na ekran komunikat "runda x, rzut y"
Po ostatnim pojawi siê komunikat "Koniec gry. Uzyskane punkty: x" 
*/

int zmiennaStatyczna()
{
  static int a; // dziêki static zapamiêta, ¿e funkcja raz zosta³a wywo³ana i zapamiêta jej now¹ wartoœæ
  
  a++;
  return a;
}
 
int zmiennaLokalna()
{
  int A; // zawsze przy wywo³ywaniu zostanie zapamiêtane, ¿e A jest 0 domyœlnie
  A++;
  return A;
}

int main()
{
  cout<<"Wywoluje funkcje ze zmienn¹ statyczna "<< zmiennaStatyczna() << " i zmienna lokalna " << zmiennaLokalna();
  cout<<"\n...drugi raz "<< zmiennaStatyczna() << " i " << zmiennaLokalna();
  
}
