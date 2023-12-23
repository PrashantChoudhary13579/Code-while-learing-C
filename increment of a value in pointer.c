//Incrementing a pointer //
#include<stdio.h>
int main()
{
	int a=5;
	int *pa;
	printf("The value of a = %d\n",a);
	a++;
	pa=&a;
	printf("The value of a after increment = %d \n",a);
	a--;
	pa=&a;
	printf("The value of a after decrement = %d\n",a);
	return 0;
}
