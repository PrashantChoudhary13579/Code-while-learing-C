//Write a program to print the swapping of two numbers without using third variable//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a=%d\nThe value of b=%d",a,b);
	return 0;
}
