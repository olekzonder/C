#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	system("chcp 1251");
	int sizes,sizea;
	printf("Введите размер строки (5-20) >");
	scanf("%d",&sizes);
	while(sizes > 20 || sizes < 4){
		printf("Неверный размер строки, введите размер строки ещё раз (5-20) >");
		scanf("%d",&sizes);
	}
	char s[sizes];
	printf("Введите строку, которую хотите перевести >");
	scanf(" %[^\n]s",s);
	while(sizes != strlen(s) ){
		printf("Размер строки не совпадает с введённым ранее значением!\nВведённый размер - %d, размер введённой строки - %d \n",sizes,strlen(s));
		printf("Введите строку ещё раз или перезапустите программу >");
		scanf(" %[^\n]s",s);
	}
	printf("Введите размер алфавита (1-33) >");
	scanf("%d",&sizea);
	while(sizea > 33 || sizea < 1){
		printf("Неверный размер строки, введите размер строки ещё раз (1-33) >");
		scanf("%d",&sizea);
	}
	printf("Примечание: размеры алфавитов должны совпадать \n");
	char s1[sizea];
	printf("Введите алфавит 1 >");
	scanf("%s",s1);
	while(sizea != strlen(s1) ){
		printf("Размер алфавита не совпадает с введённым ранее значением!\nВведённый размер - %d, размер введённой строки - %d \n",sizea,strlen(s1));
		printf("Введите алфавит ещё раз >");
		scanf("%s",s1);
	}
	char s2[sizea];
	printf("Введите алфавит 2 >");
	scanf("%s",s2);
	while(sizea != strlen(s2)){
		printf("Размер алфавита не совпадает с введённым ранее значением!\nВведённый размер - %d, размер введённой строки - %d \n",sizea,strlen(s2));
		printf("Введите алфавит ещё раз >");
		scanf("%s",s2);
	}
	char out[sizes];
	int i;
	for (i = 0;i <= sizes; i++){
		out[i] = s [i];
	}
	for (i  = 0; i < sizes; i++){
		for(int j = 0; j < sizea; j++){
			if (s[i] == s1[j]) s[i] = s2[j];}
	}
	printf("Результат перевода строки \"%s\": %s",out,s);
	return 0;
}
