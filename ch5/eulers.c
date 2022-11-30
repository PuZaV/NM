#include<stdio.h>
#include<conio.h>
float f(float x,float y)
{
    return 2 * x + y;
}
int main()
{
	int i,n;
	float x,y,h,xp,dy;
	printf("\nInput initialvalue of x and y;\n");
	scanf("%f%f",&x,&y);
	printf("Input X-value at which y is required:");
	scanf("%f",&xp);
	printf("\nInput step size:");
	scanf("%f",&h);
	n=(xp-x)/h;
	for(i=1;i<=n;i++)
	{
		dy=h*f(x,y);
		x=x+h;
		y=y+dy;
		printf("\nx=%f  y=%f",x,y);
	}
	printf("\nValue of y at x=%f is %f",x,y);
	return 0;
}
// Input initialvalue of x and y;
// 0 0
// Input X-value at which y is required:1

// Input step size:0.1

// x=0.100000 n y=0.000000
// x=0.200000 n y=0.020000
// x=0.300000 n y=0.062000
// x=0.400000 n y=0.128200
// x=0.500000 n y=0.221020
// x=0.600000 n y=0.343122
// x=0.700000 n y=0.497434
// x=0.800000 n y=0.687178
// x=0.900000 n y=0.915895
// Value of y at x=0.900000 is 0.915895
