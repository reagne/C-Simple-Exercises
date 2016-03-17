#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    cin >> day;    
/*
Funkcj� switch mo�na zast�pi� funkcj� if...else if...else. Zalet� instrukcji switch jest to, 
�e kod zazwyczaj wygl�da bardziej przejrzy�cie ni� przy konstrukcji if..else if..else. Wad� jest 
to, �e argumentem instrukcji switch zawsze musi by� liczba ca�kowita - nie mo�na u�y� liczby z 
u�amkiem, np. niedozwolone jest case 3.14:. Drug� wad� jest to, �e w switch nie u�yjemy operacji 
logicznej, np. sprawdzenia, czy zmienna day jest wi�ksze od 5.
*/
    switch(day)    
    {
        case 1:
            cout << "Poniedzialek"; break;
/*
Break powoduje wyj�cie z bloku instrukcji switch. Je�eli nie napiszemy break w ka�dej linii, 
to wykonaj� si� instrukcje linia po linii. Np. przy wpisaniu liczby 6, program wy�wietli�by 
SobotaNiedzielaTydzien ma 7 dni. Break spowoduje, �e po wypisaniu Sobota program wyjdzie za klamr� 
ko�cz�c� blok switch.
*/
        case 2:
            cout << "Wtorek"; break;
        case 3:
            cout << "Sroda"; break;
        case 4:
            cout << "Czwartek"; break;
        case 5:
            cout << "Piatek"; break;
        case 6:
            cout << "Sobota"; break;
        case 7:
            cout << "Niedziela"; break;
        default:           
            cout << "Tydzien ma 7 dni"; break;
/*
Dzi�ki default je�eli �aden warunek nie zostanie spe�niony (np. zmienna day b�dzie wynosi�a 8), 
wykona si� instrukcja nast�puj�ca w�a�nie po default. W naszym przypadku program wy�wietli 
komunikat Tydzien ma 7 dni.
*/
    } 	
cout << endl;
system ("pause");
return 0;
}
