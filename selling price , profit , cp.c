//If the total S.P of 15 items and the total profit earned on them is input through the keyboard and 10% of sp, write a C program to find the C.P of one it em//
#include<stdio.h>
int main()
{
	int sp[15] ,i ;
	float profit, cp;
	printf("Enter the selling price of 15 items\n ");
	for(i=0;i<15;i++)
	{
		scanf("%d",&sp[i]);
		profit =sp[i]*.1;
		cp= sp[i] - profit;
		printf("Profit=%f\n C.P =%f\n",profit, cp);  
	}
	return 0;
	
}
