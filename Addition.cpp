#include<iostream>

using namespace std;

class Addition{
    private:
   int Value1 = 0;
    int Value2 = 0;

    public:

    Addition()
    {
        Value1 = 0;
        Value2 = 0;

    }

    Addition(int A, int B)
    {
        int Value1 = A;
        int Value2 = B;

    }
    int Add()
    {
        int Ans;
        Ans = Value1 + Value2;
        return Ans;

    }
    
};
int main()
{
    Addition Obj1(11,21);
    int Ret;

    Ret = Obj1.Add();
    cout<<"Add is : "<<Ret<<"\n";


    return 0;
}