#include <iostream>
using namespace std;

int main()
{
    system("cls");                 //For clearing previous output
    int i, j, temp, *ptr;          //variables decleared here
    ptr = new int[5];              //memory for ptr variable is dinamically allocated
    cout << "enter 5 integers";    //Entering message is printed
    for ( i = 0; i < 5; i++)
    {
        cin>>ptr[i];              //cin 5 numbers here...
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (ptr[i]> ptr[j])                  //ptr[i]>ptr[j] for ascending order and ptr[j]>ptr[i] for descending order...
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    cout << "\n integers in ascending order are:" << endl;
    for (i = 0; i < 5; i++)
        cout << ptr[i] << "\t";
    delete[] ptr;              //dynamically allocated memory for ptr variable is deallocated here...
    return 0;
}
