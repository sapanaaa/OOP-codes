//inline function practice code
#include<iostream>
using namespace std;
inline int name(char n[20]) 
{
    char name;
    cout<<"the name of student is:"<<endl;
    return (name);
} 
inline int roll(int r)
{
    int roll;
    cout<<"the roll no. of student is:"<<endl;
    return (roll);
}
inline int marks(float m)
{
    float marks;
    cout<<"the marks of student are:"<<endl;
    return (marks);
}  
int main()
{
    system("cls");
    char x, n[20];
    int y,r;
    float z, m;
    
    cout<<"enter name, roll no. and marks of a student:";
    cin>>n>>r>>m;

    x=name(n); 
    y=roll(r);
    z=marks(m);
    return 0;
}
