#include<iostream>
using namespace std;
class item
{
    static int count;
    float price;
    public: void getdata (float a)
    {
        price=a;
        count++;
    }
    void showcount()
    {
        cout<<"count="<<count<<endl;
    }
};
int item::count;
int main()
{
    item i1, i2, i3;
    i1.showcount();
    i2.showcount();
    i3.showcount();

    i1.getdata(5.7);
    i2.getdata(3.8);
    i3.getdata(2.1);

    cout<<endl<<"after reading data"<<endl;

    i1.showcount();
    i2.showcount();
    i3.showcount();
    
    return 0;
}