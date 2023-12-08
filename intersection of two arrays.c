// Write a program to find the intersection of two arrys //
#include<Stdio.h>
int main()
{
	int j,i,a[5],b[5];
	printf("Enter the value for first array ");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	printf("Enter the value for second array ");
	 for(j=0;j<5;j++)
	 {
	 	scanf("%d",&b[j]);
	 }
	 printf("The value of intersection are \n ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
			}
			else
			continue;
		}
	}
	return 0;
	
}
