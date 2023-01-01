//structure or class??
#include<iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    float marks;
    public: void input()  //function declaration
    {
        float i, sum=0;
        float per;
        cout<<"enter name and roll of a student";
        cin>>name>>roll;
        cout<<"enter marks of 5 subjects";
        for(i=0; i<5; i++)
        {
            cin>>marks;
            sum+=marks;
        }
        per=(sum/500)*100;
        cout<<"name="<<name<<"roll="<<roll<<"percentage="<<per;
    }
};
int main()
{
    student s;  //object declaration
    s.input(); //calling function through object
    return 0;
}
