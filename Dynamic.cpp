#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    int *ptr = NULL;

    //step1 : allocate the memory
    ptr = new int[5];

    //step2 : use the memory
    //logic

    //step3 : dellocate the memory
    delete []ptr;

    return 0;
}