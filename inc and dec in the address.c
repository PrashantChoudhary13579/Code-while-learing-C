//// Checking what happens to the address of the pointer due to the increment and decrement in the address of a //
#include<stdio.h>
int main()
{
	int a=5;
	int *pa;
	pa=&a;
	printf("The value of a = %d\n",a);
	printf("The value of address of a = %d\n",pa);

	
	pa=&a;
	pa++;
	//printf("The value of a after increment = %d \n",a);
	printf("The value of address of a  after increment = %d \n",pa);
	
	pa=&a;
	pa--;
	//printf("The value of a after decrement = %d\n",a);
	printf("The value of address of a after decrement = %d \n",pa);
	return 0;
}
