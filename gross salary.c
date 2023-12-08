//Write a program to enter basic salary , clearance allowance is 40% and house rent is 20%. Find the gross salary.
#include<stdio.h>
int main()
{
	int bs ,ca,hr,gs;
	printf("Enter the value of basic salary ");
	scanf("%d",&bs);
	ca=bs*.4;
	hr=bs*.2;
	gs=ca+bs+hr;
	printf("The value of clearance allowance =%d\n",ca);
	printf("The value of house rent=%d\n",hr);
	printf("The gross salary =%d",gs);
	return 0;
	
	
}
