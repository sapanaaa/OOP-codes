//concept of copy constructor
#include <iostream>
using namespace std;
class student
{
    int id;

public:
    student()
    {
    }
    student(int x)
    {
        id=x;
    }
    student(student &s)
    {
        id = s.id;
    }
    int display()
    {
        return (id);
    }
};
int main()
{
    system("cls");
    student s1(100);
    student s2(s1);
    student s3 = s2;
    student s4 = s1;
    cout << "id of student s1=" << s1.display()<<endl;
    cout << "id of student s2=" << s2.display()<<endl;
    cout << "id of student s3=" << s3.display()<<endl;
    cout << "id of student s4=" << s4.display()<<endl;
}
