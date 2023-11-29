#include<iostream>

using namespace std;

int strlenX(char *str)     //int strlenX(char *Str)
{
    int counter = 0;

    while(*str != '\0')     //(!= not equal to)
    {
        counter++;
        str++;
    }
    return counter;
}

int main()
{

    char Arr[20];
    int iRet = 0;

    cout<<"Enter your first name : "<<"\n";
    cin>>Arr;

    iRet = strlenX(Arr);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}