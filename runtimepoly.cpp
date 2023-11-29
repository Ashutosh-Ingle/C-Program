#include<iostream>
using namespace std;

class Base{
    public:
    int i;
    float f;
    void fun()
    {
        cout<<"Inside base fun"<<"\n";
    }
    virtual void gun()
    {
        cout<<"Inside base gun"<<"\n";
    }
};
class derived: public Base
{
    public:
    int i;
    double d;
    virtual void fun()
    {
        cout<<"Inside derived fun"<<"\n";
    }
    void gun()
    {
        cout<<"Inside derived gun"<<"\n";
    }
};

int main()
{
    Base *bp = new derived;

    bp->gun();
    return 0;
}