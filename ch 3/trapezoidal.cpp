//program to implement trapezoidal rule
#include <stdio.h>

#define f(x) (x*x*x + 2)
int main()
{
    float x0,x1,fx0,fx1,h,value;
    printf("Enter the lower limit:");
    scanf("%f",&x0);
    printf("Enter the upper limit:");
    scanf("%f",&x1);
    fx0 = f(x0);
    fx1 = f(x1);
    h = x1 - x0;
    value = (h/2) * (fx0 + fx1);
    printf("the required value is %f ",value);
}
// Enter the lower and upper limits        2 8
// 1572.000000
