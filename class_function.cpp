#include<iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    float marks;
    public: void getdata()
    {
        cout<<"enter name, roll and marks of a student:"<<endl;
        cin>>name>>roll>>marks;
    }
    void display()
    {
        cout<<"the name, roll and marks of the student are:";
        cout<<name<<"\n"<<roll<<"\n"<<marks;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}