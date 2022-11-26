#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    float marks;
public:
    int age;
    int input()
    {
        cout<<"enter name, roll no, marks and age"<<endl;
        cin>>name>>roll>>marks>>age;
    }
    int display()
    {  
        cout<< "The given info is :"<<name<<endl<< roll<< endl<< marks<< endl<< age<< endl;

    }
};
int main()
{
    student ram, om;
    ram.input();
    ram.display();
    om.input();
    om.display();
    return 0;
}
