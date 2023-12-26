// find the prime no.s between user define numbers 
#include<stdio.h>
int main()
{
	int a,b,i,n;
	printf("Enter the range of no.");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(n=2;n<=b-1;n++)
		{
			if((i%n)==0)
			{
				break;
			}
		}
		if(i==n)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
