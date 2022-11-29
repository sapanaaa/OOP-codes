#include<iostream>
using namespace std;
class B;
class A
{
int x, y;
public: void enter()
{
    cin>>x>>y;
}
friend class B;
};
class B
{
    public: void display(A K)
    {
        cout<<"x="<<K.x<<endl;
        cout<<"y="<<K.y<<endl;
    }};
    int main()
    {
        A obj1;
        B obj2;
        obj1.enter();
        obj2.display(obj1);
    return 0; }