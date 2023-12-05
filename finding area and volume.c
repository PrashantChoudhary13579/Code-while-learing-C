//Write a program to print the radius and find the surface area and volume of sphere//
#include<stdio.h>
#define
int main()
{
	float r, sa ;
	float vol;
	printf("Enter the radius ");
	scanf("%f",&r);
	sa=4*3.14*r*r;
	vol=3.14*(r*r*r)*(1.333);
	printf("Surface Area=%f\n",sa);
	printf("Volume=%f\n",vol);
	return 0;
}
