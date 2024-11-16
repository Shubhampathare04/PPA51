#include<stdio.h>     //standard input output
#include<stdlib.h>  //standard library

int main()
{
    int *ptr = NULL;
    //step1 : Allocate the memory
    ptr = (int *)malloc(5* sizeof(int));

    //step2 : use the memory 

    //step 3 : Deallocate the memory

    free(ptr);
    

    return 0;
}