#include<iostream>
// #include<conio.h>  not required
using namespace std;
class student
{
private:
// for names use string data type not char
    string name;
    int roll;
    float marks;
    // void enter(); illegal garna mildaena
public:
    int age;
    void input()
    {
        cout<<"enter name, roll no, marks and age"<<endl;
        cin>>name>>roll>>marks>>age;
    }
    void display()
    {
        cout<<"The given info of :"<<name<<endl<<roll<<endl<<marks<<endl<<age;
    }
};
int main()
{
    system("cls");
    student ram, om;
    ram.input();
    ram.display();
    // ram.enter();   enter function not defined
    om.input();
    om.display();
    return 0;
}