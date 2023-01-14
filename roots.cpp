//a code to find roots of a quadratic equation
#include<iostream>
#include<math.h>
using namespace std;
 float a,b,c,dis,x1,x2,real,imag;
class roots
{
   
    public:
    void input()
    {
        cout<<"enter coefficients of x^2, x and x^0";
        cin>>a>>b>>c;
        dis= (b*b)-(4*a*c) ;
    }
    void real_equal()
    {
        cout<<"the roots are real and equal";
        x1=(-b/(2*a));
        cout<<"\n root is x1=x2="<<x1;
    }
     void real_distinct()
    {
        cout<<"the roots are real and distinct";
        x1=(-b+sqrt(dis)/(2*a)); 
        x2=(-b-sqrt(dis)/(2*a));
        cout<<"\n root is x1="<<x1<<"and x2="<<x2;
    }
     void imaginary()
    {
        cout<<"the roots are imaginary";
        real= -b/(2*a);
        imag= sqrt((4*a*c)-(b*a))/(2*a);
        cout<<"the root is x1="<<real<<"+i"<<imag;
        cout<<"the root is x2="<<real<<"-i"<<imag;
    }
};

int main()
{
    roots obj;
    obj.input();
    if(dis==0)
    {
        obj.real_equal();
    }
    else if(dis>0)
    {
        obj.real_distinct();
    }
    else{
        obj.imaginary();
    }
    return 0;
}
