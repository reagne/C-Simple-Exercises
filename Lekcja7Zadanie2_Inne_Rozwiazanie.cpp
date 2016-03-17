#include <iostream>
using namespace std;
int main()
{
    string pesel;
    int a, b, c, d, e, f, g, h, i, j, k, suma;
    
    cout << "Prosze podac pesel: ";
    cin >> pesel;
    if( pesel.length() != 11 ) {
        cout << "PESEL musi miec 11 cyfr" << endl;
    }
    
    a =( pesel[ 0 ] ); //zmienia string pesel [0] na int a czyli liczbê w kodzie ASCII, czyli powiêkszon¹ o 48
    b =( pesel[ 1 ] );
    c =( pesel[ 2 ] );
    d =( pesel[ 3 ] );
    e =( pesel[ 4 ] );
    f =( pesel[ 5 ] );
    g =( pesel[ 6 ] );
    h =( pesel[ 7 ] );
    i =( pesel[ 8 ] );
    j =( pesel[ 9 ] );
    k =( pesel[ 10 ] );
    cout << "a: "<< a << " pesel [0]: " << pesel[0] << endl;
    
    suma =( a + 3 * b + 7 * c + 9 * d + e + 3 * f + 7 * g + 9 * h + i + 3 * j + k )%10;
    
    if( suma != 0 ) cout << "Niepoprawna cyfra kontrolna"; // nie ma klamr i dzia³a??
    // korzysta z metody równowa¿nej czyli w sk³ad sumy wchodzi tak¿e cyfra kontrolna.
    
    if( j % 2 ) cout << "mezczyzna" << endl; // reszta z dzielenia przez 2 (0=falsz,a 1=prawda) 
    else cout << "kobieta" << endl; 
    
    if( a <= 50 ) // dlaczego a mia³oby byæ mniejsze od 2? Tutaj by³y jakieœ dziwne za³o¿enia.
    {
        cout << pesel[ 4 ] << pesel[ 5 ] << "." << pesel[ 2 ] << pesel[ 3 ] << ".";
        cout << "20" << pesel[ 0 ] << pesel[ 1 ] << endl;
    }
    else
    {
        cout << pesel[ 4 ] << pesel[ 5 ] << "." << pesel[ 2 ] << pesel[ 3 ] << ".";
        cout << "19" << pesel[ 0 ] << pesel[ 1 ] << endl;
    }
    return 0;
}
