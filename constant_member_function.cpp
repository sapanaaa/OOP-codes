//to find hypotenuse of a right angled triangle using the concept of constant function
#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    float p,b;
    public: void getdata()
    {
        cout<<"enter perpendicular and base of right angled triangle";
        cin>>p>>b;
    }
    void hypotenuse() const;
};
void complex::hypotenuse() const
{
    float h;
    h= sqrt(pow(p,2)+pow(b,2));
    cout<<h;
}
int main()
{
    complex c1;
    c1.getdata();
    c1.hypotenuse();
    return 0;
}