#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	system("chcp 1251");
	unsigned int BuffCache;
	unsigned int S;
	unsigned int D;
	unsigned int F;
	unsigned int B;
	unsigned short int checker;
	printf("�������� ����� ������: ���������� (0) ��� ������������ (1) >");
	scanf("%hu", &checker);
	switch (checker){
    	case 0:{
			printf("������� ��� ��������� ������� (0-7) >");
			scanf("%u",&S);
			printf("������� ������� \"��������\" ������ (0-1) >");
			scanf("%u",&D);
			printf("������� ������� ���������� ������ (0-1) >");
			scanf("%u",&F);
			printf("������� ����� �����, ������� �������� � ������ (0-255) >");
			scanf("%u",&B);
			BuffCache = (S&7) << 13;
			BuffCache |= (D&1) << 11;
			BuffCache |= (F&1) << 9;
			BuffCache |= (B&0xFF);
			printf("������������� ����� ���������� ���� � �������������� �������: %04x",BuffCache);
			break;
    	}
		case 1:{
			printf("������� ������������� ����� ���������� ���� � �������������� ������� (������������� ���, �������� eaff)");
			scanf("%04x",&BuffCache);
			S = (BuffCache >> 13) &7;
			D = (BuffCache >> 11) &1;
			F = (BuffCache >> 9) &1;
			B = BuffCache&0xFF;
			printf("��� ��������� �������:%u\n",S);
			printf("������� \"��������\" ������:%u\n",D);
			printf("������� ���������� ������:%u\n",F);
			printf("���� � ������:%u\n",B);
			break;
   		}
    	default:{
    		printf("�������� ����, ������������� ���������");
			break;
		}
	}
return 0;
}
