// Write a program to input and numbers from the user and perform basic arithmetic operator .//
#include<stdio.h>
int main()
{
	int num1,num2, num3, sum, diff, product;
	float quotient;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	diff=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	
	printf("sum=%d\n",sum);
	printf("Diff=%d\n",diff);
	printf("Product=%d\n",product);
	printf("Quotient=%f\n",quotient);
	return 0;
}
