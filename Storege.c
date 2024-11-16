#include<stdio.h>

int Value = 11;
int Data;

void Demo()
{
    int i = 10;
    static int j = 20;
    register int k = 30;

    printf("Inside Demo function\n");

}
int main()
{
    int *p = NULL;
    p = (int *)malloc(5 * sizeof(int));

    Demo();

    return 0;
}