#include<iostream>
using namespace std;
class mango;
class apple
{
    int x;
    public: void getdata()
    {
        cout<<"enter an integer value";
        cin>>x;
    }
    friend void add(apple, mango);
};
class mango
{
    int y;
    public: void getdata()
    {
        cin>>y;
    }
    friend void add(apple, mango);
};
void add(apple a1, mango m1)
{
    int sum=a1.x + m1.y;
    cout<<sum;
}
int main()
{
    apple obj1;
    mango obj2;
    obj1.getdata();
    obj2.getdata();
    add(obj1, obj2);
    return 0;
}