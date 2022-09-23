#include <stdio.h>
#include <conio.h>

int main()
{
    float x[100], y[100], sumx = 0, sumx2 = 0, sumy = 0, sumyx = 0, b, a;
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the values:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter x[%d] :",i);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i, i);
        scanf("%f", &y[i]);
    }

    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumx2 = sumx2 + x[i] * x[i];
        sumy = sumy + y[i];
        sumyx = sumyx + y[i] * x[i];
    }

    // for y=ax+b
    a = (sumx2 * sumy - sumyx * sumx) / (n * sumx2 - sumx * sumx);
    b = (n * sumyx - sumx * sumy) / (n * sumx2 - sumx * sumx);

    printf("\nHence, the required eqn is y = %.2fx + %.2f", a, b);

    return 0;
}
