#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char func(char str[],char str1[], char str2[]){
    char out[strlen(str)];
    int i = 0;
	for (i = 0;i <= strlen(str); i++){
		out[i] = str [i];
	}
	for (i  = 0; i < strlen(str); i++){
		for(int j = 0; j < strlen(str1); j++){
			if (str[i] == str1[j]) str[i] = str2[j];}
	}
}
int main() {
	system("chcp 1251");
	int sizes,sizea;
	printf("Введите размер строки (5-20) >");
	scanf("%d",&sizes);
	while(sizes > 20 || sizes < 5){
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
		printf("Неверный размер алфавита, введите размер алфавита ещё раз (1-33) >");
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
    func(s,s1,s2);
	printf("Результат перевода строки: %s", s);
	return 0;
}
