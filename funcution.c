#include<stdio.h>

void Display()  
{
    printf("inside display function\n");
}

int main()  //main function
{
   printf("INSIDE MAIN FUNCTION\n");
   Display();
   printf("END OF MAIN FUNCTION\n");


    return 0;
}