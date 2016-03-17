#include<iostream>
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

int main()
{
	int year, month, day;
	cout << "Podaj date: ";
	cin >> year >> month >> day;
	cout << endl;
	cout << weekDay(year, month, day) << endl; // Tutaj dni s¹ ponumerowane od 0 do 6, gdzie 0 to niedziela, a 6 to sobota
	
system("pause");
return 0;
}
