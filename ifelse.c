#include<stdio.h>
int main()
{
    int No = 0, Result = 0;
    printf("enter number : \n");
    scanf("%d",&No);

    Result = No % 2;

    if(Result == 0)
    {
        printf("It is even No\n");
    }
    else
    {
        printf("It is Odd No\n");
    }

    return 0;

}