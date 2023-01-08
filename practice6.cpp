#include <iostream>
using namespace std;

inline void name(string s)
{
    cout << "Your name is " << s << endl;
}

inline void roll(int r)
{
    cout << "Your roll number is " << r << endl;
}

inline void marks(float m)
{
    cout << "Your marks are " << m << endl;
}

int main()
{
    system("cls");
    string s;
    int r;
    float m;

    cout << "Enter your name: "; //enter name like sapna avoid (spaces)
    cin >> s;
    name(s);

    cout << "Enter your roll number: ";
    cin >> r;
    roll(r);

    cout << "Enter your marks: ";
    cin >> m;
    marks(m);

    return 0;
}
