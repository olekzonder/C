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
	printf("Выберите режим работы: шифрование (0) или дешифрование (1) >");
	scanf("%hu", &checker);
	switch (checker){
    	case 0:{
			printf("Введите код системной области (0-7) >");
			scanf("%u",&S);
			printf("Введите признак \"грязного\" буфера (0-1) >");
			scanf("%u",&D);
			printf("Введите признак свободного буфера (0-1) >");
			scanf("%u",&F);
			printf("Введите номер блока, который отображён в буфере (0-255) >");
			scanf("%u",&B);
			BuffCache = (S&7) << 13;
			BuffCache |= (D&1) << 11;
			BuffCache |= (F&1) << 9;
			BuffCache |= (B&0xFF);
			printf("Представление блока управления кэша в вычислительной системе: %04x",BuffCache);
			break;
    	}
		case 1:{
			printf("Введите представление блока управления кэша в вычислительной системе (Четырёхзначный код, например eaff)");
			scanf("%04x",&BuffCache);
			S = (BuffCache >> 13) &7;
			D = (BuffCache >> 11) &1;
			F = (BuffCache >> 9) &1;
			B = BuffCache&0xFF;
			printf("Код системной области:%u\n",S);
			printf("Признак \"грязного\" буфера:%u\n",D);
			printf("Признак свободного буфера:%u\n",F);
			printf("Блок в буфере:%u\n",B);
			break;
   		}
    	default:{
    		printf("Неверный ввод, перезапустите программу");
			break;
		}
	}
return 0;
}
