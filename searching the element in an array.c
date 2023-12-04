//Search an element in an array .
#include<stdio.h>
int main()
{
	 int a[5],i,j,n;
	 printf("Enter the value for an array ");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Enter the number you want to search");
	 scanf("%d",&n);
	 for(i=0;i<5;i++)
	 {
	 	if(a[i]==n)
	 	{
	 		printf("The number is at %d place",i+1);
	 		break;
		 }
		 /*else
		 {
		 	printf("the number do not exist");
		 	break;
		 }*/
	 }
	 return 0;
} 
