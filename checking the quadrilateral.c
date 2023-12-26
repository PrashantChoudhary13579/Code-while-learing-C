//Write a program to check whether a quadrilateral is rectangle , square , with given sides or not
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the sides of the quadrilateral");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if((a==b)&&(b==c)&&(c==d)&&(d==a))
	{
		printf("The quadrilateral is square");
		
	}
	else if ((a==c)&&(b==d))
	{
		printf("The quadrilateral is rectangle");
	}
	else
	{
		printf("The quadrilateral is neither rectangle nor square");
	}
	return 0;
}
