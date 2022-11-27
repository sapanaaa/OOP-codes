#include<iostream>
using namespace std;


float volume (int a, int b, int c)
{
    return (a*b*c*0.5);
}
float volume (float k, int l, int m)
{
    return(l*l*m);
}
float volume (float p)
{
    return(3.14*p*p*p*4/3);
}
int main()
{
    int c, d, k, e, m;
    float t, s;
    system("cls");

    cout<<"enter the values of dimensions of shapes";

    cin>>c>>d>>t>>e>>m;

    cout<<"volume of trianglular prism="<<volume(c, d, e);
    cout<<"\n volume of cuboid="<<volume(t, c, m);
    cout<<"\n volume of sphere="<<volume(t);

    return 0;
}