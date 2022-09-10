#include <stdio.h>
#include <conio.h>
void main()
{
    int x[10], fx[10], p[10];
    int k, f, n, i, j = 1, f1 = 1, f2 = 0;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);

    printf("\nEnter the different values of x:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &x[i]);

    printf("\nThe corresponding values of y are:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &fx[i]);

    f = fx[1];
    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
    scanf("%d", &k);

    do
    {
        for (i = 1; i <= n - 1; i++)
        {
            p[i] = ((fx[i + 1] - fx[i]) / (x[i + j] - x[i]));
            fx[i] = p[i];
        }
        f1 = 1;
        for (i = 1; i <= j; i++)
        {
            f1 *= (k - x[i]);
        }
        f2 += (fx[1] * f1);
        n--;
        j++;
    }

    while (n != 1);
    f += f2;
    printf("\nf(%d) = %d", k, fx);
    getch();
}