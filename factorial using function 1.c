//Write a program to find the factorial using with return type with argument//
#include<stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter the number ");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%d",f);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    return f;
}