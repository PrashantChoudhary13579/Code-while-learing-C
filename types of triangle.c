// Write a program to print print which type of triangle is by taking sides as an input //
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of sides");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("The triangle is equilateral");
	}
	if((a==b)||(b==c)||(a==c))
	{
		printf("The triangle is isosceles");
	}
	else
	{
		printf("The triangle is scalene");
	}
	return 0;
}
