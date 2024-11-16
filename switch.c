#include<stdio.h>
int main()
{
    int Standard = 0;

    printf("Enter your Standard:\n");
    scanf("%d",&Standard);

    switch (Standard)
    {
    case 1:
        printf("Your exam is at 8 AM\n");
        break;

    case 2:
        printf("Your exam is at 9 AM\n");
        break;

    case 3:
        printf("Your exam is at 10 AM\n");
        break;

    case 4:
        printf("Your exam is at 11 AM\n");
        break;
                            
    default:
        printf("Wrong Choice :(\n");
    }



    return 0;
}