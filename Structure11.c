#include <stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    char ch;
    double d;

};
union Hello
{
    int i;
    float f;
    char ch;
    double d;

};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of stuct is : %d\n",sizeof(dobj));
    printf("size of union is : %d\n",sizeof(hobj));

    hobj.i = 97;
    hobj.f = 10.0;

    

    return 0; 

}