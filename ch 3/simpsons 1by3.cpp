//program to implement composite Simpson's 1/3 rule
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return sqrt(1 - x * x);
}
int main()
{
    int i;
    float x0,xn,h,value,k,sum;
    printf("Enter the lower limit:");
    scanf("%f",&x0);
    printf("Enter the upper limit:");
    scanf("%f",&xn);
    printf("Enter the number of segments:");
    scanf("%f",&k);
    h = (xn - x0) / k;
    sum = f(x0) + f(xn);
    for(i=1;i<k;i=i+2)
        sum += 4 *  f(x0 + i * h);
    for(i=2;i<k-1;i=i+2)
        sum += 2 * f(x0 + i * h);
    value = (h/3) * sum;
    printf("%f",value);
}
// Enter the lower and upper limit 0 1
// Enter the number of segments    4
// 0.770899
