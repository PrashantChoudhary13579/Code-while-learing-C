//Write a program to display roots of the quadratic equation ax^2 + bx + c . Input the value of a,b,c from user.
#include<stdio.h>
#include<math.h>
int main()
{
		int a,c,b;
		float x,y,d;
		printf("Enter the coefficient of x^2 ,x and constant in order : ");
		scanf("%d%d%d", &a,&b,&c);
		printf("Your quadratic equation is (%d)x^2 + (%d)x + (%d)\n",a,b,c);
		d=sqrt(b*b-(4*a*c));
		printf("d=%f\n",d);
		x=(-b-d)/2*a;
		y=(-b+d)/2*a;
		printf("x=%f\n",x);
		printf("y=%f\n",y);
		if(d>0)
		{
			printf("The roots are real and distinct ");
		}
		else if(d<0)
		{
			printf("The roots are imaginary ");
			
		}
		else
		{
			printf("The roots are real and equal");
		}
		return 0;
	
	
		return 0;
		
}

