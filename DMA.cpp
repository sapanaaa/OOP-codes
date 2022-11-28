#include<iostream>
using namespace std;

int main()
{
    int *pa, *pb, *psum;
    pa= new int;
    pb= new int;
    psum= new int;
    cout<<"enter two entegers";
    cin>>*pa>>*pb;
    *psum=*pa + *pb;
    cout<<"sum="<<*psum;
    delete pa;
    delete pb;
    return 0;

}