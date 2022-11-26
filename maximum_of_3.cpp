#include<iostream>
#include<conio.h>
using namespace std;
void max(int, int, int);
int main( )
{
    int a, b, c;
    cout<<"enter three numbers:\n";
    cin>>a>>b>>c;
    max(a,b,c);
    getch();
}
void max (int x, int y, int z)
{
    if (x>y && y>z)

    { cout<<"max ="<<x; }

    else if (y>x && x>z)

    { cout<<"max ="<<y; }

    else
    cout<<"max ="<<z;
}