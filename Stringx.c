#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";
    printf("lengh : %d\n",strlen(Arr));
    printf("size of string is :%d\n",sizeof(Arr));

    printf("%c\n",Arr[3]);
    printf("%c\n",Arr[5]);
    printf("%c\n",Arr[1]);
    return 0;
}