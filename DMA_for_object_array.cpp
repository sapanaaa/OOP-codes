#include<iostream>
using namespace std;
class election
{
    static int count;
    long int citizen_no;
    char name[20], address[30];
    public: void input()
    {
        cout<<"enter candidate details: \n";
        cin>>citizen_no>>name>>address;
        count++;
    }
//    election::count=0;
    void show()
    {
        cout<<citizen_no<<name<<address;
    }
    static void total_record()
    {
        cout<<"total record found="<<count;
    }
};
//election::count=0;
int main ()
{
    char ch;
    int i,n;
    election *ptr;
    cout<<"How many records to enter";
    cin>>n;
    ptr=new election[n];
    for(i=0;i<n;i++)
    {
        ptr[i]->input();
    }
    election::total_record();
    for(i=0;i<n;i++)
    {
        ptr[i]->show();
    }
    delete [] ptr;
    return 0;
}
