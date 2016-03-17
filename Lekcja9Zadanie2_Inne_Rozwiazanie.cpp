#include <iostream>
using namespace std;

bool czyPrzestepny( int rok ) //funkcja sprawdza czy rok jest przestepny, przyda sie w lutym
{
    return(( rok % 4 == 0 && rok % 100 != 0 ) || rok % 400 == 0 );
}
//----------------------------------------------------------------------------------
int weekDay( int year, int month, int day ) //funkcja sprawdza jaki dzien tygodnia przypada na date w latach 2000-2020
{
    int zliczacz;
    int m;
    switch( year ) //instrukcja podajaca jaki dzien przypada jako pierwszy w danym roku
    {
    case 2000:
        zliczacz = 5; break;
    case 2001:
        zliczacz = 0; break;
    case 2002:
        zliczacz = 1; break;
    case 2003:
        zliczacz = 2; break;
    case 2004:
        zliczacz = 3; break;
    case 2005:
        zliczacz = 5; break;
    case 2006:
        zliczacz = 6; break;
    case 2007:
        zliczacz = 0; break;
    case 2008:
        zliczacz = 1; break;
    case 2009:
        zliczacz = 3; break;
    case 2010:
        zliczacz = 4; break;
    case 2011:
        zliczacz = 5; break;
    case 2012:
        zliczacz = 6; break;
    case 2013:
        zliczacz = 1; break;
    case 2014:
        zliczacz = 2; break;
    case 2015:
        zliczacz = 3; break;
    case 2016:
        zliczacz = 4; break;
    case 2017:
        zliczacz = 6; break;
    case 2018:
        zliczacz = 0; break;
    case 2019:
        zliczacz = 1; break;
    case 2020:
        zliczacz = 2; break;
    }
    for( m = 1; m <= month; m++ ) //tutaj do zliczacz dodawane sa kolejne dni do daty
    {
        if( m == month ) //je¿eli miesi¹c to styczeñ
        {
            zliczacz = zliczacz + day;
            break;
        }
        if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) //miesi¹ce maj¹ce 31 dni
        {
            zliczacz = zliczacz + 31;
        }
        if( m == 4 || m == 6 || m == 9 || m == 11 ) //miesi¹ce maj¹ce 30 dni
        {
            zliczacz = zliczacz + 30;
        }
        if( m == 2 ) //luty, funkcja sprawdza czy dany rok jest przestêpny
        {
            zliczacz = zliczacz + 28;
            if( czyPrzestepny( year ) == 1 )
            {
                zliczacz++;
            }
        }
    }
    zliczacz = zliczacz % 7; //reszta mowi nam jaki to dzien tygodnia
    return zliczacz;
}
//----------------------------------------------------------------------------------
int workingDay( int initYear, int initMonth, int initDay, int finalYear, int finalMonth, int finalDay ) //funkcja zlicza dni robocze
{
    int r, m, d;
    int H = 0;
    for( r = initYear; r <= finalYear; r++ ) //petla "roczna"
    {
        for( m = initMonth; m <= 12; m++ ) //petla "miesieczna"
        {
            initMonth = 1;
            if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) //miesi¹ce maj¹ce 31 dni
            {
                for( d = initDay; d <= 31; d++ ) //petla "dzienna"
                {
                    if( weekDay( r, m, d ) == 1 || weekDay( r, m, d ) == 2 || weekDay( r, m, d ) == 3 || weekDay( r, m, d ) == 4 || weekDay( r, m, d ) == 5 )
                    {
                        H++;
                        if( r == finalYear && m == finalMonth && d == finalDay )
                        {
                            return H;
                        }
                    }
                }
            }
            if( m == 4 || m == 6 || m == 9 || m == 11 ) //miesi¹ce maj¹ce 30 dni
            {
                for( d = initDay; d <= 30; d++ ) //petla "dzienna"
                {
                    if( weekDay( r, m, d ) == 1 || weekDay( r, m, d ) == 2 || weekDay( r, m, d ) == 3 || weekDay( r, m, d ) == 4 || weekDay( r, m, d ) == 5 )
                    {
                        H++;
                        if( r == finalYear && m == finalMonth && d == finalDay )
                        {
                            return H;
                        }
                    }
                }
            }
            if( m == 2 ) //luty
            {
                if( czyPrzestepny( r ) == 1 )
                {
                    for( d = initDay; d <= 29; d++ ) //petla "dzienna"
                    {
                        if( weekDay( r, m, d ) == 1 || weekDay( r, m, d ) == 2 || weekDay( r, m, d ) == 3 || weekDay( r, m, d ) == 4 || weekDay( r, m, d ) == 5 )
                        {
                            H++;
                            if( r == finalYear && m == finalMonth && d == finalDay )
                            {
                                return H;
                            }
                        }
                    }
                }
                else
                {
                    for( d = initDay; d <= 28; d++ ) //petla "dzienna"
                    {
                        if( weekDay( r, m, d ) == 1 || weekDay( r, m, d ) == 2 || weekDay( r, m, d ) == 3 || weekDay( r, m, d ) == 4 || weekDay( r, m, d ) == 5 )
                        {
                            H++;
                            if( r == finalYear && m == finalMonth && d == finalDay )
                            {
                                return H;
                            }
                        }
                    }
                }
            }
            initDay = 1;
        }
    }
    return H;
}
//----------------------------------------------------------------------------------
int main()
{
    int a, b, c, x, y, z;
    cout << "Podaj poczatkowa date (rok, miesiac, dzien)" << endl;
    cin >> a >> b >> c;
    cout << "Podaj koncowa date (rok, miesiac, dzien)" << endl;
    cin >> x >> y >> z;
    cout << "Lczba dni roboczych miedzy tymi datami wynosi: " << workingDay( a, b, c, x, y, z );
    return 0;
}
