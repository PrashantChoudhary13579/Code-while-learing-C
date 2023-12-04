// Write the no. of notes of 1000 , 500, 200 , 100, 50 ,10,1 of the given amount//
#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,g,f;
	printf("Enter the amount");
	scanf("%d",&n); 
	a=n/1000;
	b=(n%1000)/500;
	c=((n%1000)%500)/200;
	d=(((n%1000)%500)%200)/100;
	e=((((n%1000)%500)%200)%100)/50;
	f=(((((n%1000)%500)%200)%100)%50)/10;
	g=((((((n%1000)%500)%200)%100)%50)%10)/1;
	printf("The no. of notes of 1000 =%d\n",a);
	printf("The no. of notes of 500 =%d\n",b);
	printf("The no. of notes of 200 =%d\n",c);
	printf("The no. of notes of 100 =%d\n",d);
	printf("The no. of notes of 50 =%d\n",e);
	printf("The no. of notes of 10 =%d\n",f);
	printf("The no. of notes of 1 =%d\n",g);
	return 0;
}
