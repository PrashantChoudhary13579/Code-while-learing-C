// Write a program to input 3 numbers from the user and find the largest of them //
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("The largest number is %d",a);
			
		}
		else
		{
			printf("The largest number is %d",c);
		}
		
	}
	else	//b>a
	{
		if(c>b)
		{
					printf("The largest number is %d",c);
	
		}
		else
		{
						printf("The largest number is %d",b);

		}
	}
}
