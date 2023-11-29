#include<iostream>

using namespace std;
// parent class
class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 11;
            B = 21;
            cout<<"Inside Demo constructor"<<"\n";
        }
        ~ Demo()
        {
                cout<<"Inside demo constructor"<<"\n";

        }
        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";

        }
};
// Child class
class Hello : public Demo           // class Hello extends Demo
{
    public:
        int X,Y;
        Hello()
        {
            cout<<"Inside Hello constructor"<<"\n";

        }
        ~ Hello()
        {
                cout<<"Inside hello constructor"<<"\n";

        }
        void gun()
        {
            cout<<"Inside gun of hello"<<"\n";
        }
};

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    cout

    return 0;
}