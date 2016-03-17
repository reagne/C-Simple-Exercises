#include <iostream>

using namespace std;

int main()
{

    for( int a = 1; a <= 10; a++ ) { // petla wypisujaca pierwszy wiersz 
        if( a <= 9 )
             cout << "  ";
        
        if(( a ) >= 10 &&( a ) <= 99 )
             cout << " ";
        
    }
    cout << endl;
    for( int a = 1; a <= 10; a++ ) { //petla wypisujaca pierwsza kolumne
        if( a <= 9 )
             cout << "  ";
        
        if( a >= 10 && a <= 99 )
             cout << " ";
        
        for( int b = 1; b <= 10; b++ ) { //petla wypisujaca wyniki mnozenia
            cout << a * b;
            if(( a * b ) <= 9 )
                 cout << "  ";
            
            if(( a * b ) >= 10 &&( a * b ) <= 99 )
                 cout << " ";
            
        }
        cout << endl;
    }
    
    
    
    system( "pause" );
}
