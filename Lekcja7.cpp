#include <iostream>
using namespace std;

int main()
{

/* 
Operator OR (lub): ||

 if ( (rzut1 < 0) || (rzut1 > 10) ) // je¿eli rzut < 0 LUB rzut > 10
    {
        cout << "Nieprawidlowa ilosc kregli" << endl;
    }
*/	

/*
Operator AND (i): &&
    if ( (rzut1 >= 0) && (rzut1 <= 10) ) // je¿eli rzut >= 0 I jednoczesnie rzut <= 10
    {
        cout << "Prawidlowa ilosc kregli" << endl;
    }
*/	

/*
Operator NOT: !
    !true = false    ->    !1 = 0
    !false = true    ->    !0 = 1
*/
int wiekUzytkownika;
    bool pelnoletni;	// typ bool moze trzymac tylko wartosci true lub false

    cout << "Podaj ile masz lat: ";
    cin >> wiekUzytkownika;

    if (wiekUzytkownika >= 18)
    {
        pelnoletni = true;
    }
    else
    {
        pelnoletni = false;
    }

    // Alkohol mo¿na sprzedawaæ tylko osobom pe³noletnim
    if (!pelnoletni) // to samo co if (pelnoletni == false)
    {
        cout << " nie sprzedawaj mu alkoholu";
    }
    if (pelnoletni) // to samo co if (pelnoletni == true)
    {
        cout << " mozesz sporzedac mu alkohol";
    }
    
    // Prawid³owe bêdzie zapisanie tego w ten sposób:
    pelnoletni = (wiekUzytkownika >= 18);
cout << endl << endl;
    
/*
    if ( (rzut1 >= 0) && (rzut1 <= 10) ) // je¿eli rzut >= 0 i jednoczesnie rzut <= 10
    {
        cout << "Prawidlowa wartosc rzutu" << endl;
    }
    if ( ! ( (rzut1 >= 0) && (rzut1 <= 10) ) ) // je¿eli nieprawda jest to, ze ( rzut >= 0 I jednoczesnie rzut <= 10 )
    {
        cout << "Nieprawidlowa wartosc rzutu" << endl;
    }
*/

/*
Reszta z dzielenia
Dla dowolnej liczby ca³kowitej a i dowolnej liczby naturalnej b istnieje tylko jedna para liczb ca³kowitych k i r taka, ¿e
a = k · b + r, gdzie 0 ? r < b 
Liczbê k nazywamy ilorazem z dzielenia a przez b, a liczbê r - reszt¹ tego dzielenia.

Oto kilka przyk³adów:
19 : 4 = 4, reszty 3, bo 19 = 4 · 4 + 3
17 : 6 = 2, reszty 5, bo 17 = 2 · 6 + 5
106 : 12 = 8, reszty 10, bo 106 = 8 · 12 + 10

W jêzyku C++ do obliczenia reszty z dzielenia u¿ywamy operatora % (modulo). 
*/
 for (int i = 0; i < 15; i++)
    {
        cout << "i = " << i;
        cout << "  i / 4 = " << i / 4;         
        cout << "  i % 4 = " << i % 4 << endl; // reszta z dzielenia przez 4
    }
cout << endl << endl;

for (int i = 1; i < 21; i++)
    {
        if (i % 4 == 0) // liczba jest podzielna przez 4, jesli reszta z dzielenia wynosi 0
        {               // inaczej mowiac petla ta wypisze liczby bedace wielokrotnoscia czworki
            cout << "Liczba " << i << " jest podzielna przez 4" << endl;
        }
    }
cout << endl << endl;

// szukamy wielokrotnosci liczby 100
    for (int i = 1; i < 501; i++)
    {
        if (i % 100 == 0)
        {
            cout << "Liczba " << i << " jest podzielna przez 100" << endl;
        }
    }
cout << endl << endl;
// szukamy liczb 33, 133, 233, 333...
    for (int i = 1; i < 501; i++)	
    {
        if (i % 100 == 33)
        {
            cout << "Liczba " << i << " jest podzielna przez 100 z reszta 33" << endl;
        }
    }
cout << endl << endl;
// szukamy liczb parzystych i nieparzystych 
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Liczba " << i << " jest parzysta" << endl;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        if ((i % 2))    // if (1) -> to samo co if(true)
        {
            cout << "Liczba " << i << " jest nieparzysta" << endl;
        }
    }
cout << endl << endl;
 // szukamy liczb trzycyfrowych, w których druga cyfra jest równa 5
    for (int i = 100; i <= 999; i++)  // dla wszystkich liczb trzycyfrowych
    {
        // interesuje nas tylko druga cyfra, a jak wiemy dzielenie 
        // liczb ca³kowitych zaokr¹gla je w dó³ -> 255 / 10 = 25
        int j = i / 10;
        
        // zmienna j musi koñczyæ siê na 5, aby nasz warunek by³ spe³niony
        if (j % 10 == 5)
        {
            // ale na ekran wypiszemy zmienn¹ i, a nie j! 
            // i jest nadal trzycyfrowe, j ma tylko dwie cyfry!
            cout << "Liczba " << i << " ma 5 jako druga cyfre" << endl;
        }
    }
    
cout << endl;
system ("pause");
return 0;
}
