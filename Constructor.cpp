#include<iostream>
using namespace std;

class Demo
{
    public:
    int no1;            
    int no2;

    Demo()            
    {
        cout<<"Inside default constructor\n";
        no1 = 11;
        no2 = 0;
    }

    Demo(int A, int B)
    {
        cout<<"Inside paarametrised instructor\n";
        no1 = A;
        no2 = B;
    }

    Demo(Demo &ref)      // Copy constructor
    {
        no1 = ref.no1;
    }

    ~Demo()
    {
        cout<<"Inside destructor\n";

    }

    void fun()
    {
        cout<<"Inside fun";  

    }
    void gun()
    {
        cout<<"Inside gun";
    }
};

int main()
{
   cout<<"Inside main\n";

    Demo obj1;                  //after this step default constructor is called
   // obj1.fun();
    //obj1.gun();

    cout<<"Value of no1 is : "<<obj1.no1<<"\n";
    cout<<"Value of no1 is : "<<obj1.no2<<"\n";

    Demo obj2(22,33);
    cout<<"Value of no1 is : "<<obj2.no1<<"\n";

    Demo obj3(obj2);
    cout<<"Value of no1 is : "<<obj3.no1<<"\n";

    return 0;
}