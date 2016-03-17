#include <iostream>
using namespace std;


int ilosccyfr(int n)
       {
         int i=0;
         do
         {
            n = n/10;
            i++;
         }  while(n>0);
         return i;
       }
/*
Powy¿sza funkcja oblicza iloœæ cyfr poprzed iloœæ razy, jaka jest potrzebna do podzielenia liczby ca³kowitej
przez 10, a¿ dojdziemy do 0. Czyli, np. liczba 123
123/10 = 12 <- to jest 1 raz
12,3/10 = 1 <- to jest 2 raz
1,23/10 = 0 <- to jest 3 raz i osi¹gneliœmy 0.

zmienna i pokazuje nam tê iloœæ razy. Dalatego na koñcu jest return i, a nie 0, abyœmy wynik danej funkcjê
mogli wykorzystaæ w kolejnej funkcji.

Sama powy¿sza funckja nie zadzia³a nawet jeœli podany parametr liczba, choæ nie jestem pewna dlaczego.
*/

main()
      {
         int n;
         cout << "Podaj liczbê naturaln¹: ";
         cin >> n;
         cout << "Liczba " << n << " posiada " 
             < i ilosccyfr(n)< " cyfr(y) " << endl;
      }
