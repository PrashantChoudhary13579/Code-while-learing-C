// write a program to check whether the user entered no. is prime or not
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if((n%i)==0)
		{
			printf("Not a prime\n ");
			break;
		}
		
	}
	 if(i==n)
		 {
		printf("Prime no.\n");
	}
	return 0;
}
