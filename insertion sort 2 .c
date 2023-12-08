// Write a program for insertion sort
#include<stdio.h>
int main()
{
	int j,i,a[5],temp;
	printf("Enter any 5 values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		temp=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>temp))
		{
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
