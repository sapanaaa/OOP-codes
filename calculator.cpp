#include <iostream>
using namespace std;
class calculator
{
private:
    char cat;
    int sum, diffrence, product, x, y;
    float division;

public:
    int age;

    int input()
    {
        cout << "Enter any two number :" << endl;
        cin >> x >> y;
    }

    int display()
    {
        cout << "Enter any algebric expression";
        cin >> cat;
        switch (cat)
        {
        case '+':
            sum = x + y;
            cout << "The sum is " << sum << endl;
            break;

        case '-':
            diffrence = x - y;
            cout << "The difference is " << diffrence << endl;
            break;

        case '*':
            product = x * y;
            cout << "The product is " << product << endl;
            break;

        case '/':
            division = x / y;
            cout << "The division is " << division << endl;
            break;

        default:
            cout << "You have entered error !!! \n Please try again.";
            break;
        }
    }
};
int main()
{

    system("cls");
    calculator c;
    c.input();
    c.display();
}