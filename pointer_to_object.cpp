#include<iostream>
using namespace std;
class bce
{
    int roll, marks;
    public: void getdata()
    {
        cout<<"enter roll no and marks";
		cin>>roll>>marks;
    } 
    void showdata()
    {
        cout<<roll<<marks;
    }
};
int main()
{
    bce obj;
    bce *ptr;
    ptr=&obj;
    ptr->getdata();
    (*ptr).showdata();
    return 0;
}
