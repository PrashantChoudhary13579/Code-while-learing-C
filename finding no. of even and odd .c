//Write a program to input 10 integers in an array and find how many of them are odd and even//
#include<stdio.h>
int main()
{
	int i,j,a[10],counte=0,counto=0;
	printf("Enter any 10 integers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if((a[i]%2)==0)
		{
		counte++;
		
		}
		else
		{
	counto++;
}
	}
	printf("The no. of even numbers are = %d\n",counte);
	printf("The no. of odd numbers are = %d\n",counto);
	return 0;
	
}

