#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int Arr[5];         // Static memory allocation

    int *p = NULL;
    p = (int *)malloc(5* sizeof(int));      //Dynamic memory allocation

    int *q = NULL;
    q = (int*)calloc(5,sizeof(int));        //Dynamic memory allocation using calloc

    int *x = NULL;
    x = new int[5];

    free(p);
    free(q);

    delete [] x;

    return 0;

}