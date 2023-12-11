//Sum of all the diagonals of the matrix//
#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	printf("Enter the value of matrix");
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
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	
	printf("The sum of the diagonals = %d",s);
	return 0;
}
