#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	system("chcp 1251");
	int sizes,sizea;
	printf("������� ������ ������ (5-20) >");
	scanf("%d",&sizes);
	while(sizes > 20 || sizes < 4){
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
		printf("�������� ������ ������, ������� ������ ������ ��� ��� (1-33) >");
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
	char out[sizes];
	int i;
	for (i = 0;i <= sizes; i++){
		out[i] = s [i];
	}
	for (i  = 0; i < sizes; i++){
		for(int j = 0; j < sizea; j++){
			if (s[i] == s1[j]) s[i] = s2[j];}
	}
	printf("��������� �������� ������ \"%s\": %s",out,s);
	return 0;
}
