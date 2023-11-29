#include<iostream>
using namespace std;

class MarvellousArray
{
    private:
        int *Arr;
        int iSize;

    public:
        MarvellousArray(int Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize = Length;
            Arr = new int[iSize];
        }
        ~MarvellousArray()
        {
            cout<<"Inside destructor"<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the vales :"<< "\n";
            for(int i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are : "<<"\n";
            for(int i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Addition()
        {
            int iSum = 0;
            for(int i = 0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};
int main()
{
    MarvellousArray mobj1(6);
    MarvellousArray mobj2(4);

    mobj1.Accept();
    mobj1.Display();

    mobj2.Accept();
    mobj2.Display();

    int iRet = 0;
    iRet= mobj1.Addition();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet= mobj2.Addition();
    cout<<"Addtion is :"<<iRet<<"\n";
    
    return 0;
}