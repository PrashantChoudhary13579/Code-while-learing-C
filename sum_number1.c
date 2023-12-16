// Finding the sum of the two number by using the no return type with argument //
#include <stdio.h>
void sum (int ,int );
int main()
{
    int a,b;
    printf("Enter the two number for adding");
    scanf("%d%d",&a,&b);
    sum(a,b);
   
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("Sum=%d",c);
}