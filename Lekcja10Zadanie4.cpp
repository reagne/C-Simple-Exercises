# include <iostream>
using namespace std;

// Z A D A N I E  -  B O W L I N G

int rzut(int iloscKregli) 
/* funkcja ma symulowaæ rzut kul¹ - iloscKregli to liczba zbitych
krêgli w jednym rzucie. Funkcja ma zwracaæ ca³kowit¹ punktacjê po danym rzucie.

Po ka¿dym rzucie wypisze na ekran komunikat "runda x, rzut y"
Po ostatnim pojawi siê komunikat "Koniec gry. Uzyskane punkty: x" 
*/
{
	static int tablicaWynikow[11][2] = {0}; // dziêki static wartoœci poszczególnych indeksów sa zapisane
											// nie s¹ nadpisywane 0 przy ponownym uruchomieniu funkcji
	
	static int runda = 0;
	static int ball = 0;	 // rzuty
	static int punkty = 0;
	
	punkty = punkty + iloscKregli;

// pierwszy rzut w pierwszej rundzie
	if ( ball == 0 && runda == 0 )		
	{
		tablicaWynikow[runda][ball] = iloscKregli;
		
		if ( iloscKregli == 10 )
		{
			cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " STRIKE! Punkty: ";
			
			runda ++;
			ball += 2; // przechodzimy do pierwszego rzutu w drugiej rundzie
		}
		else
		{
			cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " Punkty: ";
		
			runda++;
			ball++; //  przechodzimy do drugiego rzutu w pierwszej rundzie - runda++ zostanie zniwelowana
					//  w kolejnym kroku poprzez runda -= 1
		}
	}
	
// rzut 2 w ka¿dej rundzie
	else if ( ball == 1 && runda <= 10)
	{
		runda -= 1; 			// cofamy rundê, aby j¹ powtórzyæ przy rzucie 2.
		tablicaWynikow[runda][ball] = iloscKregli;
		
		// tekst w przypadku SPARE	
		if ( tablicaWynikow[runda][0] + tablicaWynikow[runda][1] == 10 )
		{
			cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " SPARE! Punkty: " ;
		}
		// tekst, gdy brak SPARE i STRIKE w drugim rzucie 10 rundy
		else if ( (tablicaWynikow[runda][0] + tablicaWynikow[runda][1] != 10 &&  tablicaWynikow[runda][0] != 10) && runda == 9 ) 
		{
			cout << endl << "KONIEC GRY. Uzyskane punkty: ";
		}
		// tekst w przypadku braku SPARE 
		else
		{
			cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " Punkty: ";
		}
		
	// punkty liczone przy STRIKE
		// w przypadku gdy STRIKE by³ tylko w poprzedniej rundzie
		if ( tablicaWynikow[runda-1][0] == 10 && tablicaWynikow[runda-2][0] != 10 )
		{
			punkty = punkty + tablicaWynikow[runda][1];
		}
		// w przypadku gdy STRIKE wystêpowa³ w dwóch poprzednich rundach
		else if ( tablicaWynikow[runda-1][0] == 10 && tablicaWynikow[runda-2][0] == 10 )
		{
			punkty = punkty + tablicaWynikow[runda][1];
		}
		
		runda++;
		ball++;
	}
	
// rzut 1 w ka¿dej rundzie oprócz pierwszej
	else if ( ball == 2 && runda <= 10 )
	{
		ball -= 2; 	// czyli ball == 0
		tablicaWynikow[runda][ball] = iloscKregli;
		
	// punkty liczone przy SPARE
		// wy³¹czamy mo¿liwoœæ STRIKE		
		if ( tablicaWynikow[runda-1][0] + tablicaWynikow[runda-1][1] == 10 && tablicaWynikow[runda-1][0] != 10 )
		{
			punkty = punkty + tablicaWynikow[runda][0];
		}
	
	// punkty liczone przy STRIKE
		// gdy runda poprzednia i obecna posiada STRIKE
		if ( tablicaWynikow[runda-1][0] == 10 && tablicaWynikow[runda][0] == 10 )
		{
			punkty = punkty + 10;
		}
		// gdy w rundzie poprzedniej by³ STRIKE a dwie rundy przed nie by³o STRIKE
		else if ( tablicaWynikow[runda-1][0] == 10 && tablicaWynikow[runda-2][0] != 10 )
		{
			punkty = punkty + tablicaWynikow[runda][0];
		}
		// gdy w dwóch poprzedzaj¹cych rundach by³ STRIKE, ale nie by³o go w obecnej rundzie
		else if ( tablicaWynikow[runda-1][0] == 10 && tablicaWynikow[runda-2][0] == 10 && runda != 10 )
		{
			punkty = punkty + 10 + 2*tablicaWynikow[runda][0];
		}
		
		// tekst w przypadku STRIKE, dla rund innych od 10
		if ( iloscKregli == 10 && runda != 9 )
		{
			cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " STRIKE! Punkty: ";
			
			runda ++;
			ball += 2;
		}
		else
		{
			// tekst dla rzutu dodatkowego, czyli 3 rzutu w 10 rundzie, gdy w poprzedniej by³ STRIKE
			if( runda == 10 )
			{
				cout << endl << "KONIEC GRY. Uzyskane punkty: ";
			}
			// tekst dla rundy, w której poprzednio by³ STRIKE
			else
			{
				cout << " Runda: " << runda+1 << " Rzut: " << ball+1 << " Punkty ";
			}
			
			runda++;
			ball++;
		}
	
	}
		
	return punkty;
}

int main()
{
	int iloscKregli;
	int CIRz = 1; 	// zmienna przezentuj¹ca Ca³kowit¹ Iloœæ Rzutów
					// 10 rund * 2 rzuty + jeden mo¿liwy rzut dodatkowy w 10 rundzie =
					// ca³kowita iloœæ rzutów wynosi 21
	cout << "BOWLING - Start" << endl << endl;

		do
		{
		int a = CIRz;
		int b = a%2;
		
		cout << "Zbite kregle: ";
		cin >> iloscKregli;
		int x = rzut(iloscKregli);
		
		static int y = 0;
		y = y + iloscKregli;
		
			if ( b == 0 ) // pierwsze rzuty w ka¿dej rundzie
			{
				if ( y != 10 && CIRz == 20 )
				{
					CIRz++;
				}
				
				y = 0; // wyzerowanie zmiennej, aby ponownie liczy³a sumê rzutów w jednej rundzie.
			}
				
			if ( iloscKregli != 10 )
			{	
				cout << x << endl << endl;
			}
			else
			{
				if ( CIRz != 19 ) // runda 10
				{
					cout << x << endl << endl;
					CIRz++;
				}
				else
				{
					cout << x << endl << endl;
					CIRz--;
				}
			}
		
		CIRz++;
		
		} while ( CIRz <= 21 );
		
	
system ( "pause" );
return 0;
	
}
