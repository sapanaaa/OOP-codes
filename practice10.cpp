//to find the sum of digits of a number of a multidigit number using do-while loop
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"enter an integer:";
    cin>>n;
    do{
        r=n%10;
        sum+=r;
        n=n/10;
    }
    while(n!=0);
    cout<<"the sum is:"<<sum;
    return 0;
}