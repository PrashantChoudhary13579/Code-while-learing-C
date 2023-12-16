// Sum of two number using no return type no argument//
#include <stdio.h>
void Sum(void);
int main()
{
    Sum();
    Sum();
    Sum();
}
void Sum(void)
{
    int a, b, c;
    printf("Enter the two number");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The sum of the numbers =%d\n", c);
    
}