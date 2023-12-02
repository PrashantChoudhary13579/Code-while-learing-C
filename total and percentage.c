//Write a program to enter marks in 5 subject and print total marks and percentage//
#include<Stdio.h>
int main()
{
	int M1,M2,M3,M4,M5, total;
	float per;
	printf("Enter the marks of subject");
	scanf("%d%d%d%d%d",&M1,&M2,&M3,&M4,&M5);
	total = (M1+M2+M3+M4+M5);
	per=total/5.00;
//	scanf("%f",&per);
	printf("The Total marks = %d",total);
    printf("The percentage = %f",per);	
	return 0;
}
