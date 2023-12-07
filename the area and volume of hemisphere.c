//Write a program to print the area and volume of hemisphere//
#include<stdio.h>
int main()
{
	int r;
	float pi=3.14,area,vol;
	printf("Enter the radius as integer");
	scanf("%d",&r);
	area=4*3.14*r*r;
	vol=(2*3.14*r*r*r)/3;
	printf("The area of the hemisphere =%f\nThe volume of the hemisphere=%f",area,vol);
	return 0;
	
	
}
