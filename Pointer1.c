#include <stdio.h>
int main()
{
    int no = 11;

    int *ptr = &no;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",*ptr);


    //no             11
    //&no            100
    //ptr            100
    //&ptr           200
    //sizeof(no)     4
    //sizeof (ptr)   8
    //*ptr           11




    return 0;
}