#include<iostream>
using namespace std;
class complex 
{
    float real, img;
    public: complex()
    {
        real=0;
        img=0;
    }
    complex(float r, float i): real(r), img(i){}
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
int main()
{
    int i,n;
    complex *ptr;
    ptr=new complex(5.5, 6.1);
    ptr->display();
//    delete.ptr;
    return 0;
}
