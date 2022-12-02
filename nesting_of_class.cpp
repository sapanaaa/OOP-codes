#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[10];
    public: void enter()
    {
        cout<<"enter name:"<<endl;
        gets(name);
        cout<<"enter roll number"<<endl;
        cin>>roll;
    }
        void display()
        {
            cout<<"name and roll number are"<<name<<"/t"<<roll;
        }
        class date
        {
            int day, month, year;
            public: void getdate();
            void showdate();
        };    
};
void student::date::showdate();
void student::date::getdate();
{
    cin>>day>>month>>year;
}
{
    cout<<"day,month and year are"<<day<<"\t"<<month<<"\t"<<year;
}
int main()
{
    student wanda;
    student::date d1;
    wanda.enter();
    d1.getdate();
    wanda.display();
    d1.showdate();
    return 0;
}
