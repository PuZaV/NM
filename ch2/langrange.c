#include <stdio.h>
#include <conio.h>

void main()
{
    float x[100], fx[100], ip, value = 0, p;
    int i, j, n;
    /* Input Section */
    printf("Enter number of data: ");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("fx[%d] = ", i);
        scanf("%f", &fx[i]);
    }
    printf("Enter interpolation point: ");
    scanf("%f", &ip);
    /* Implementing Lagrange Interpolation */
    for (i = 1; i <= n; i++)
    {
        p = 1;
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                p = p * (ip - x[j]) / (x[i] - x[j]);
            }
        }
        value = value + p * fx[i];
    }
    printf("Interpolated value at %.3f is %.3f.", ip, value);
    getch();
}