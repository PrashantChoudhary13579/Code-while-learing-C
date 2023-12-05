//To calculate area and perimeter of rectangle and then calculate area and circumference of circle//
#include<stdio.h>
int main()
{
	int l,b,peri, area,r;
	float  Area, cir;
	printf("Enter the length , breath and radius");
	scanf("%d%d%d",&l,&b,&r);
	peri =2*(l+b);
	area =l*b;
	Area =3.14*r*r;
	cir= 2*3.14*r;
	printf("Perimeter of rectangle = %d\n",peri);
	printf("Area of the rectangle = %d\n",area);
	printf("Circumference of the circle = %f\n",cir);
	printf("Area of the circle = %f\n",Area);
return 0;	
}
