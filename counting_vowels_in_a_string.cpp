//counting no of vowels in a string
#include<iostream>
using namespace std;
int main()
{
    char str[13]="I love Nepal";
    int i=0, count=0;
    while(i<12)
    {
        if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' ||
        str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout<<"number of vowels="<<count;
    return 0;

}