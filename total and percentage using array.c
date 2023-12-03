//W
#include<stdio.h>
int main()
{
	int a[4],i,total=0, per;
	printf("Enter the marks of five subject");
	for(i=0;i<5;i++)
	{
		scanf("%d",a[i]);
		total=total +a[i];
	}
	per=total/5;
	printf("The total =%d\nThe percentage =%d",total,per);
	return 0;
	
}
