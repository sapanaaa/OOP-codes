//friend function 
#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public: void getdata();
    friend int sum(demo);
};
void demo::getdata()
{
    cout<<"\n enter two integers";
    cin>>a>>b;
}
int sum(demo x) //demo txpe variable x is created, so basicallx x is object of class demo
{
    return(x.a+x.b); //x is accessing values of a and b
}
int main()
{
    demo y; //object created, here we can create same name object ie x as well
    y.getdata();
    cout<<"sum is:"<<sum(y);
    return 0;
}

