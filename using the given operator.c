//Perform given operation by using input value of x and y and print them in one line //
#include<stdio.h>
int main()
{
	float x,y,a,b;
	printf("Enter the value of x and y");
	scanf("%f%f",&x,&y);
	a=(x+y)/(x-y);
	b=(x+y)*(x-y);
	printf("The value of a and b is %f\n%f",a,b);
	return 0;
}
