//Sum of all the elements//
#include<stdio.h>
int main()
{
	int a[3][3],i,j,s;
	printf("Enter the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
	}
	printf("The sum of the elements of matrix are = %d",s);
	
	return 0;
}
