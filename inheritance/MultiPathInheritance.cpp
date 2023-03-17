#include<iostream>
using namespace std;
class base1
{
    protected: int x;
    public: void assignx()
    {
        x=10;
    }
};
class derived1:public base1
{
    protected: int y;
    public: void assigny()
    {
        y=20;
    }
};
class derived2:public derived1
{
    protected:int z;
    public: void assignz()
    {
        z=30;
    }
};
class base2
{
    protected: int p;
    public: void assignp()
    {
        p=40;
    }
};
class derived3: public derived2, public base2
{
    private: int q, total;
    public: void assignq()
    {
        q=50;
    }
    void sum()
    {
        total= p+q+x+y+z;
        cout<<"\n total="<<total;
    }
};
int main()
{
    derived3 s;
    s.assignx();
    s.assigny();
    s.assignz();
    s.assignp();
    s.assignq();
    s.sum();
    return 0;
}