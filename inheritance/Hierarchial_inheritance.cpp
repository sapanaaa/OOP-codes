#include<iostream>
using namespace std;
class base
{
    protected: int x,y;
    public:
    void assign()
    {
        x=10;
        y=20;
    }
};
class derived1: public base
{
    int s;
    public: void add()
    {
        s=x+y;
        cout<<"the sum is:"<<s<<endl;
    }
};
class derived2: public base
{
    int d;
    public: void difference()
    {
        d=y-x;
        cout<<"the difference is:"<<d<<endl;
    }
};
class derived3: public base
{
    int p;
    public: void product()
    {
        p=x*y;
        cout<<"the product is:"<<p<<endl;
    }
};
class derived4: public base
{
    float div;
    public: void division()
    {
        div=y/x;
        cout<<"the division is:"<<div<<endl;
    }
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    derived3 obj3;
    derived4 obj4;
    obj1.assign();
    obj1.add();
    obj2.assign();
    obj2.difference();
    obj3.assign();
    obj3.product();
    obj4.assign();
    obj4.division();
    return 0;
}