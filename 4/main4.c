#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	float x,y;
	system("chcp 1251");
	printf("������� ���������� x >");
	scanf("%f",&x);
	printf("������� ���������� y >");
	scanf("%f",&y);
	if (((x*x+y*y <= 1) && (y >= x/2) && (y >= -x/2)) || ((x*x+y+y >= 1) && (x <= 2) && (y <= 1) && (y <= x/2) && (y >= -x/2)) || ((x*x+y*y>=1) && (x >= -2) && (y <= 1) && (y >= x/2) && (y <= -x/2)) || ((x*x+y*y<=1) && (y<=-x/2) && (y<=x/2))){
		printf("����� �������� � �������");
		return 0;
	}
	else{
		printf("����� �� �������� � �������");
		return 0;
	}
}
