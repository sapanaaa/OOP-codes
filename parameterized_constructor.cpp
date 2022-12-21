#include<iostream>
using namespace std;
class constructor
{
    int a, b, c;
    public:
    constructor()
    {
        a=0;
        b=0;
    }
    constructor(int, int);
};
constructor::constructor(int p, int q)
{
    a=p;
    b=q;
    c=a+b;
    cout<<"sum="<<c;
}
int main()

{
    constructor c1, c2, c3(6,3), c4(9,6);
    return 0;
}
