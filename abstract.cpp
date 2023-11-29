#include<iostream>
using namespace std;

class base
{
    public:
    int i;
    float f;
    virtual void gun() = 0;
    virtual void sun() = 0;

    virtual void run()
    {
        cout<<"Base run"<<"\n";
    }
};
class derived: public base{
    public:
    int i;
    double d;

    void sun()
    {
        cout<<"Derived sun"<<"\n";
    }
    void fun()
    {
        cout<<"Derived fun"<<"\n";
    }
    void gun()
    {
        cout<<"Derived gun"<<"\n";
    }
    virtual void mun()
    {
        cout<<"Derived mun"<<"\n";
    }
};
int main()
{
    base *bp = NULL;
    derived dobj;

    bp = &dobj;

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    bp->mun();

    return 0;

}