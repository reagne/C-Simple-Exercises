#include <iostream>
using namespace std;

int main()
{

	for(int j=1; j<=10; j++)
	{
		cout << " ";
		cout << endl;
			for(int i=1; i<=10; i++)
			{
				cout << i*j << " ";
			}
	}
	cout << endl;
	
system( "pause" ); // zamiast return 0. Dziêki temu system siê nie wy³¹cza autamtycznie po dokonaniu akcji.
}
