// To check whether the given year is a leap year or not //
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("The year is leap year");
		
	}
	else if (y%100==0)
	{
		printf("The year is not a leap year");
	}
	else if (y%4==0)
	{
		printf("The year is leap year");
		
	}
	else 
	{
		printf("The year is not a leap year");
	}
	return 0;
}

