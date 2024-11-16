#include<stdio.h>
int main()
{


    char c = 'D';
    int i = 11;
    float f= 76.99;
    double d = 76.6789;

    printf("%d\n",sizeof(c));    //1
    printf("%d\n",sizeof(i));    //4
    printf("%d\n",sizeof(f));    //4
    printf("%d\n",sizeof(d));    //8
    //lu is used to avoid the warnings

    
    return 0;


}