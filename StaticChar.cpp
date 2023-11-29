#include<iostream>
using namespace std;

class Demo 
{
    public:
    int A,B;            //non static characteristics
    static int X, Y;    //Static characteristics

    Demo()              //Default constructor
    {
        A = 100;      // Initialization of non  static
        B= 222;

    };
};
//Initialization of static characteristics
int Demo :: X = 10;             
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A : "<<obj1.A<<"\n";

    obj1.A++;
    cout<<"Value of A : "<<obj1.A<<"\n";

    cout<<"Size of demo class object is : "<<sizeof(obj1)<<"\n";
    
    return 0;

}