// Enter any number
#include<stdio.h>
int main()
{
    int a=5, *pa;
    pa=&a;
    printf("The value of a =%d\n",a);
    printf("The address of a =%d\n",pa);
    printf("The address of a =%d\n",&pa);
    printf("The value of address  of a =%d",*pa);
    return 0;
    
}
