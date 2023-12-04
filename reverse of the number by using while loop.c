//Write a program to print the reverse of the user entered value//
#include<stdio.h>
int main()
{
	int n,rev=0,rem=0, i,j;
	printf("Enter the number");
	scanf("%d",&n);
	i=1;
	while(i<10)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		i++;
		
	}
	printf("The reverse number is=%d",rev);
	return 0;
}
