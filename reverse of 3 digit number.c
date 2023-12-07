//Write a program to print the reverse of 3-digit number//
#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,rev=0;
	printf("Enter the number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	rev=100*a+10*b+c;
	printf("The reverse of the number is =%d\n",rev);
//	printf("%d  %d   %d",a,b,c);
	return 0;
}
