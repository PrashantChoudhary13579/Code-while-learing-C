//checking whether the pointer is valid or not 
#include<Stdio.h>
int main()
{
	int *ptr=NULL;
	if(ptr!=NULL)
	{
		printf("value of ptr is : %d",*ptr);
	}
	else
	{
		printf("Invalid pointer");
		
		
	}
	return 0;
}
