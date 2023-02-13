#include<iostream>
#include<math.h>
using namespace std;

class polar
{
    float radius;
    int angle;
public:
    polar()
    {
        radius=0;
        angle=0;
    }
    polar(float rad, int ang)
    {
        radius=rad;
        angle=ang;
    }
    float returnRad()
    {
        return radius;
    }
    int returnAng()
    {
        return angle;
    }
    void display()
    {
        cout<<"Radius: "<<radius<<endl;
        cout<<"Angle: "<<angle<<endl;
    }
};

class cartesian
{
    float xco, yco;
public:
    cartesian() : xco(0), yco(0) {}
    cartesian(float x, float y)
    {
        xco=x;
        yco=y;
    }
    cartesian(polar p)
    {
        xco= p.returnRad()*cos(p.returnAng());
        yco= p.returnRad()*sin(p.returnAng());
    }
    void display()
    {
        cout<<"x: "<<xco<<endl;
        cout<<"y: "<<yco<<endl;
    }
};

int main()
{
    polar pol(1.4,30);
    cartesian cart;
    cart=cartesian(pol);
    cout<<"Data in polar form:"<<endl; pol.display();
    cout<<"Data in cartesian form:"<<endl; cart.display();
    return 0;
}
