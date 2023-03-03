#include<iostream>
using namespace std;
class student
{
    protected: int roll;
    char name[25];
    public: void getdata();
    void putdata();
};
void student::getdata()
{
    cout<<"enter the name and roll number:";
    cin>>name>>roll;
}
void student::putdata()
{
    cout<<name<<","<<roll;
}
class test: public student
{
    protected: float sub1,sub2;
    public: void getmarks(float, float);
    void putmarks();
};
void test::getmarks(float x, float y)
{
    sub1=x;
    sub2=y;
}
void test::putmarks()
{
    cout<<endl<<"marks in two subs are:"<<sub1<<","<<sub2;
}
class result: public test 
{
    float total;
    public: void display();
};
void result::display()
{
    student::putdata();
    test::putmarks();
    total= sub1+sub2;
    cout<<endl<<"total="<<total;
}
int main()
{
    result obj;
    obj.getdata();
    obj.getmarks(20.3, 40.4);
    obj.display();
    return 0;
}