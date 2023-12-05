// Write a program to input a number from the user and display whether it is even or odd.//
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	if((n/2)!=0)
	{
		printf("The number is odd");
		
	}
	else
	{
		printf("The number is even");
	}
	return 0;
}
