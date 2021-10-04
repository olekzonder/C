#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 system("chcp 1251");
 double x;
 double y;
 double z;
 printf("Ââåäèòå x, y è z > ");
 scanf("%lf %lf %lf", &x,&y,&z);
 if (cbrt(x)+pow(x,y+2) <0){
 	printf("ÎØÈÁÊÀ");
 	return 0;
}
 double beta = sqrt(10 * ((cbrt(x) + pow(x,y+2)))) * (pow(asin(z),2) - fabs(x-y));
 printf("Îòâåò:%lf",beta);
 return 0;
}
