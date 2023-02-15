#include <iostream>
using namespace std;
class base
{
protected:
    int x;

public:
    void input()
    {
        cout << "enter value of x:";
        cin >> x;
    }
};
class derived : public base
{
    int y;

public:
    void enter()
    {
        cout << "enter value of y:";
        cin >> y;
    }

    void sum()
    {
        int s = x + y;
    }
};
int main()
{
    derived b;
    b.input();
    b.enter();
    b.sum();
}