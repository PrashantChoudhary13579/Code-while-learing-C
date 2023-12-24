// a new program using cb value and cb reference 
#include<stdio.h>
void cb_value(int ,int );
void cb_ref(int*, int*);
int main()
{
	int u,v;
	printf("Enter the value of u and v\n");
	scanf("%d%d\n",&u,&v);
	printf("The value of u=%d ,v=%d\n",u,v);
	cb_value(u,v);
	printf("The value of u=%d ,v=%d\n",u,v);
	cb_ref(&u,&v);
	printf("The value of u=%d ,v=%d\n",u,v);
	
}

void cb_value(int u, int v)
{
	u=u*v;
	v=v*u;
	printf("The value of u=%d ,v=%d\n",u,v);
}
void cb_ref(int *u, int*v)
{
	*u;
	*v;
	printf("The value of u=%d ,v=%d\n",*u,*v);
}
