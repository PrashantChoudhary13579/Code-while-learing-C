//Write a program to print the average of user entered 5 numbers and give the grading from A to Fail
/*  A+ =90+
	A =80-90
	B+ =70-80
	B =60-70
	C+ =50-60
	C =40-50
	Fail =less than 40
	*/
#include<stdio.h>
int main()
{
	float M1,M2,M3,M4,M5,avg;
	printf("Enter the marks of a student in 5 subjects");
	scanf("%f%f%f%f%f",&M1,&M2,&M3,&M4,&M5);
	avg=(M1+M2+M3+M4+M5)/5;
	printf("Average =%f\n",avg);
	if(avg>=90)
	{
		printf("Grade-A+");
	}
	else if((avg<90)&&(avg>=80))
	{
	printf("Grade-A");	
	}
	else if((avg<80)&&(avg>=70))
		{
		printf("Grade-B+");	
		}
	else if((avg<70)&&(avg>=60))
		{
		printf("Grade-B");	
	}
	else if((avg<60)&&(avg>=50))
	{
	printf("Grade-C+");
}
	else if((avg<50)&&(avg>=40))
	{
	printf("Grade-C");	
}
else
{
	printf("Grade-Fail");
	
}

return 0;

	
	
}



