//Now print the array after the intersection of two arrays
#include<Stdio.h>
int main()
{
	int j,i,a[5],b[5],c[5],k=0;
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
	 for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
		c[k+1]=a[i];
		} 
			else
			continue;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
		break;
	}
	return 0;
	
}
