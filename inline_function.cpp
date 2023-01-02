//code to perform arithmetic operations like addition, subtraction, division & multiplication using inline functions
#include<iostream>
using namespace std;
inline int sum(int a, int b)
{
    int sum;
	sum= a+b;
    return (sum);
}

inline int difference(int a, int b)
{
    int difference= a-b;
    return (difference);
}

inline int product(int a, int b)
{
    int product= a*b;
    return (product);
}

inline int division(int a, int b)
{
    float division= a/b;
    return (division);
}

int main()
{
    system("cls");
    int x,y,s,m,p;
    float d;
    
    cout<<"enter two integers: ";
    cin>>x>>y;
    
    s = sum (x,y);
    m = difference (x,y);
    p = product (x,y);
    d = division (x,y);
    
    cout<<"the sum is:"<<sum<<"\n"<<"the difference is:"<<difference<<"\n"<<"the product is:"<<product<<"\n"<<"the division is:"<<division;
  
}
