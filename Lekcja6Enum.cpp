#include <iostream>
using namespace std;
enum wlasny_enum
{
    przyklad0 = 0,
    przyklad1 = 1
};
wlasny_enum zmien( wlasny_enum argument )
{
    return argument;
}
wlasny_enum zmien1( wlasny_enum & argument )
{
    return argument;
}
int main()
{
    wlasny_enum przykladowy0 = zmien( przyklad1 );
    wlasny_enum przykladowy1 = zmien1( przykladowy0 );
    cout << przykladowy0 << " " << przykladowy1 << endl;
    getchar();
}
