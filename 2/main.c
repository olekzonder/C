#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double x;
 double y;
 double z = 0.15;
 printf("x and y:");
 scanf("%lf %lf",&x,&y);
 double beta = sqrt(10 * ( ( cbrt(x) + pow(x,y+2) ) ) ) * ( pow(asin(z),2) - fabs(x-y));
 printf("%lf",beta);
 return 0;
}

