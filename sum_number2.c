//Sum of two number with return type with argument//
#include<stdio.h>
int sum(int, int);
int main()
{
    int a,b,c;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The sum =%d\n",c);
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}