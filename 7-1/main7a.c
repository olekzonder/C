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
	printf("������� ������ ������ (5-20) >");
	scanf("%d",&sizes);
	while(sizes > 20 || sizes < 5){
		printf("�������� ������ ������, ������� ������ ������ ��� ��� (5-20) >");
		scanf("%d",&sizes);
	}
	char s[sizes];
	printf("������� ������, ������� ������ ��������� >");
	scanf(" %[^\n]s",s);
	while(sizes != strlen(s) ){
		printf("������ ������ �� ��������� � �������� ����� ���������!\n�������� ������ - %d, ������ �������� ������ - %d \n",sizes,strlen(s));
		printf("������� ������ ��� ��� ��� ������������� ��������� >");
		scanf(" %[^\n]s",s);
	}
	printf("������� ������ �������� (1-33) >");
	scanf("%d",&sizea);
	while(sizea > 33 || sizea < 1){
		printf("�������� ������ ��������, ������� ������ �������� ��� ��� (1-33) >");
		scanf("%d",&sizea);
	}
	printf("����������: ������� ��������� ������ ��������� \n");
	char s1[sizea];
	printf("������� ������� 1 >");
	scanf("%s",s1);
	while(sizea != strlen(s1) ){
		printf("������ �������� �� ��������� � �������� ����� ���������!\n�������� ������ - %d, ������ �������� ������ - %d \n",sizea,strlen(s1));
		printf("������� ������� ��� ��� >");
		scanf("%s",s1);
	}
	char s2[sizea];
	printf("������� ������� 2 >");
	scanf("%s",s2);
	while(sizea != strlen(s2)){
		printf("������ �������� �� ��������� � �������� ����� ���������!\n�������� ������ - %d, ������ �������� ������ - %d \n",sizea,strlen(s2));
		printf("������� ������� ��� ��� >");
		scanf("%s",s2);
	}
    func(s,s1,s2);
	printf("��������� �������� ������: %s", s);
	return 0;
}
