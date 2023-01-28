#include<iostream>
using namespace std;
class counter {
    int count;
    public: counter()
    {
        count=0;
    }
    void showcount()
    {
        cout<<count;
    }
        void operator ++();
    };

    void counter::operator++()
    {
        ++count;
    }

int main()
{
    counter c1,c2;
    cout<<"c1=";
	c1.showcount();
    cout<<"c2=";
	c2.showcount();
    ++c1;
    ++c2;
    ++c2;
    cout<<"After increment:"<<endl;
    cout<<"c1=";c1.showcount();
    cout<<"c2=";c2.showcount();
    return 0;
}
