#include<iostream>
using namespace std;
class celsius
{
    float temp;
    public: celsius()
    {
        temp=0;
    }
    operator float()
    {
        float far;
        far=(temp*9/5)+32;
        return far;
    }
    void gettemp()
    {
        cout<<"enter temperature in celsius;";
        cin>>temp;
    }
};
int main()
{
    celsius cel;
    float far;
    cel.gettemp();
    far=cel;
    cout<<"the temperature in fahrenheit is:"<<far;
    return 0;
}