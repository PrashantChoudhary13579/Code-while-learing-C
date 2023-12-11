//Multiplication of 2 matrix//
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,ra,ca,rb,cb;
	printf("Enter the rows and columns of Matrix A");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the rows and columns of B matrix");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//for multiplication
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
			}
		}
		
	}
	printf("The value of the matrix A is");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("The value of the matrix B is");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("The value of the matrix C is");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("%d",c[i][j]);
		}
		printf("\n");
	}

	return 0;
	
}
