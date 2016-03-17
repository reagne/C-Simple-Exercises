#include <iostream>
using namespace std;

int main()
{
	
char i;
char j;

cin >> i;


if(i>='a' && i<='z' || i>='A' && i<='Z')
{
	if(i>='a' && i<='z')
	{
	
		for(j='a'; j<=i; j++)
		{
		}
	
		int l=0;
	
		do
		{
			j--;
			l++;
		} while (j>'a');
		cout << l << endl;
	
	}
	else
	{
		for(j='A'; j<=i; j++ )
		{
		}
		
		int l=0;
		
		do
		{
			j--;
			l++;
		} while (j>'A');
		cout << l << endl;
	}

}
else
{
	cout << "0" << endl;
}

	
system ("pause");
}
