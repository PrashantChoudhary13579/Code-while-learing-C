// Size of the pointer
#include<stdio.h>
main()
{
	char *cptr;
	int *iptr;
	float *fptr;
	printf("Pointer of character takes %d bytes \n",sizeof(cptr));
	printf("Pointer of integer takes %d bytes \n",sizeof(iptr));
	printf("Pointer of float takes %d bytes \n",sizeof(fptr));
	return 0;
}
