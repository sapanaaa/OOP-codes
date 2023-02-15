#include<iostream>
using namespace std;
class base1
{
    protected: int x;
};
class base2
{
    protected: int y;
};
class base3
{
    protected:int z;
};
class derived: public base1, public base2, public base3
{
    int sum;
    public: void input()
    {
        cout<<"enter the values of x, y and z:"<<endl;
        cin>>x>>y>>z;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
    void show()
    {
        cout<<"the sum is:"<<add(x,y,z);
    }
};
int main()
{
    derived obj;
    obj.input();
    obj.show();
    return 0;
}
