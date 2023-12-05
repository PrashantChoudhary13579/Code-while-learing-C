//Write a program to print the factorial of any user entered number//
#include<stdio.h>
int main()
{
	int n, f=1,i;
	printf("Enter the number you want to find the factorial  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The value of factorial= %d",f);
	return 0;
}

