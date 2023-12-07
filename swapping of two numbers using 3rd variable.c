// Write a program to print the swaping of two numbers//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("The value of a= %d\nThe value of b= %d",a,b);
	return 0;
}
