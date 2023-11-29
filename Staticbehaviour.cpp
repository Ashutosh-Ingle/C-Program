#include<iostream>
using namespace std;

class Demo 
{
    public:
    int A,B;            //non static characteristics
    static int X, Y;    //Static characteristics

    Demo()              //Default constructor
    {
        A = 0;      // Initialization of non  static
        B = 0;

    }

    void fun()
    {
         cout<<"Inside non static function fun"<<"\n";

        cout<<"Value of B : "<<this->B<<"\n";
        cout<<"Value of A : "<<this->A<<"\n";
        cout<<"Value of X : "<<X<<"\n";
        cout<<"Value of X : "<<Y<<"\n";
        
    }
    static void gun()
    {
        cout<<"Inside static function gun"<<"\n";
         cout<<"Value of X : "<<X<<"\n";
          cout<<"Value of X : "<<Y<<"\n";
    }
};
//Initialization of static characteristics
int Demo :: X = 10;             
int Demo :: Y = 20;

int main()
{
    Demo::gun();
    Demo obj;
    
    obj.fun();      //fun(&obj)

    return 0;

}