#include<iostream>
using namespace std;

class base 
{
    private:
    int a;
    virtual void fun()
    {
        cout<<"Inside private base"<<"\n";
    }
};
class derived: private base
{
    public:
    int i;
   virtual void fun()
    {
        cout<<"Inside derived"<<"\n";
    }
};
int main()
{
    derived dobj;
    dobj.fun();
    return 0;
}