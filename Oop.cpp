// Class = Characteristics + Behaviours

// Class = Data + Functions
#include<iostream>

using namespace std;

class Demo
{
    public:
        int no1;
        int no2;

        void fun()
        {
            cout<<"Inside fun\n";
        }

};

int main()
{
    Demo obj1;                   // 8 byte memory allocated
    Demo obj2;

    cout<<"Size of object : "<<sizeof(obj1)<<"\n";


    obj1.no1 = 11;              //. is direct accessing operator
    obj1.no2 = 22;              // initialised with .    

    obj2.no1 = 51;
    obj2.no2 = 101;

    obj1.fun();
    obj2.fun();

    cout<<obj2.no1<<"\n";
    return 0;

}
