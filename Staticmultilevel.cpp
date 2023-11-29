#include <iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    static int k;

    Base()
    {
        i =10;
        j = 20;

    }
    void fun()
    {
        cout<<"Base fun";
    }
};
int Base::k = 11;

class Derived: public Base
{
    public:
    int x,y;
    Derived()
    {
        x = 50;
        y = 60;  
    }
    void gun()
    {
        cout<<"Derived gun";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj);

    cout<<bobj.i<<"\n";
    cout<<bobj.j<<"\n";
    cout<<dobj.i<<"\n";
    cout<<Base::k<<"\n";
    cout<<Derived::k<<"\n";
    cout<<dobj.x<<"\n";

    return 0;
}