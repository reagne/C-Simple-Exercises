#include <iostream>
using namespace std;

int main()
{

float c;

	for(float f=0; f<=100; f=f+10) // mimo, ¿e F to liczby ca³kowite, aby z dzialania wyszly liczby
									// rzeczywiste musi byæ float, a nie int.
	{
		cout << f << " F= ";
		c=(f-32)*5/9;
		cout.precision(6); // umo¿liwia precyzowanie miejsc po przecinku.
							//UWAGA! Zlicza wszystkie liczby, nawet te przed przecinkiem.
		cout << c << " C" << endl;
	}
	
	cout << endl;
	
system ("pause");
}
