#include<iostream>

using namespace std;

class Arithmetic
{
    private:            // not accessible outside class
    int no1;
    int no2;

    public:
    Arithmetic()
    {
        no1 = 0;
        no2 = 0;

    }

    Arithmetic(int a, int b)
    {
        no1 = a;
        no2 = b;

    }   

    int Addition()                                 
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    } 

    

    int Substraction()
    {
        int ans = 0;
        ans = no1 - no2;
        return ans;
    }
};

int main()
{
    Arithmetic obj1(11,21);
    Arithmetic obj2;

    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";
    

    Ret = obj1.Substraction();
    cout<<"Substracton is : "<<Ret<<"\n";

    return 0;
}