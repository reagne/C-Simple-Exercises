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
Powy�sza funkcja oblicza ilo�� cyfr poprzed ilo�� razy, jaka jest potrzebna do podzielenia liczby ca�kowitej
przez 10, a� dojdziemy do 0. Czyli, np. liczba 123
123/10 = 12 <- to jest 1 raz
12,3/10 = 1 <- to jest 2 raz
1,23/10 = 0 <- to jest 3 raz i osi�gneli�my 0.

zmienna i pokazuje nam t� ilo�� razy. Dalatego na ko�cu jest return i, a nie 0, aby�my wynik danej funkcj�
mogli wykorzysta� w kolejnej funkcji.

Sama powy�sza funckja nie zadzia�a nawet je�li podany parametr liczba, cho� nie jestem pewna dlaczego.
*/

main()
      {
         int n;
         cout << "Podaj liczb� naturaln�: ";
         cin >> n;
         cout << "Liczba " << n << " posiada " 
             < i ilosccyfr(n)< " cyfr(y) " << endl;
      }
