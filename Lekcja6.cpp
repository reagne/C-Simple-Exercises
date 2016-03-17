#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    cin >> day;    
/*
Funkcj¹ switch mo¿na zast¹piæ funkcjê if...else if...else. Zalet¹ instrukcji switch jest to, 
¿e kod zazwyczaj wygl¹da bardziej przejrzyœcie ni¿ przy konstrukcji if..else if..else. Wad¹ jest 
to, ¿e argumentem instrukcji switch zawsze musi byæ liczba ca³kowita - nie mo¿na u¿yæ liczby z 
u³amkiem, np. niedozwolone jest case 3.14:. Drug¹ wad¹ jest to, ¿e w switch nie u¿yjemy operacji 
logicznej, np. sprawdzenia, czy zmienna day jest wiêksze od 5.
*/
    switch(day)    
    {
        case 1:
            cout << "Poniedzialek"; break;
/*
Break powoduje wyjœcie z bloku instrukcji switch. Je¿eli nie napiszemy break w ka¿dej linii, 
to wykonaj¹ siê instrukcje linia po linii. Np. przy wpisaniu liczby 6, program wyœwietli³by 
SobotaNiedzielaTydzien ma 7 dni. Break spowoduje, ¿e po wypisaniu Sobota program wyjdzie za klamrê 
koñcz¹c¹ blok switch.
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
Dziêki default je¿eli ¿aden warunek nie zostanie spe³niony (np. zmienna day bêdzie wynosi³a 8), 
wykona siê instrukcja nastêpuj¹ca w³aœnie po default. W naszym przypadku program wyœwietli 
komunikat Tydzien ma 7 dni.
*/
    } 	
cout << endl;
system ("pause");
return 0;
}
