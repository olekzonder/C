#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define cycle1 for(i = 0;i <n-1; i++)
#define cycle2 for (;j < n; j++)
#define output for (i  = pos1; i < pos2; i++) printf("%d ", A[i]);
int main(int argc, char *argv[]) {
	system("chcp 1251");
	int n = 0;
	while( (n > 20) || (n < 5)){
			printf("������� ������ ������� (5 - 20) > ");
			scanf("%d",&n);
	}
	int A[n];
	char flag = 0;
	//

	int k;
	int i = 0;
	for (;i < n; i++){
		while( (k > 100) || (k < -100)){
			printf("������� �������� ������� (-100 - 100) ",i+1);
			scanf("%d",&k);
		}
		A[i] = k;
		k = -101;
	}
	
	int maxsum = -1;
	int sum, pos1,pos2;
	cycle1{
		if (A[i] <= 0) continue; 
		sum = A[i];
		int j = i+1;
		cycle2{
			if (A[j] >= 0){
				sum += A[j];
				flag = 1; //��������, ��� ��� ������ ������������������, � �� ���� �����
		}
			else break;
		}
	if (sum > maxsum && flag == 1){
			maxsum = sum;
			pos1 = i;
			pos2 = j;
			flag = 0; //����� ������
		}
	}
	printf("%d", maxsum);
	if (maxsum > -1){
		printf("����������� ������������������ ������������� ����� � ������������ ������:");
		output;
	}
	else printf("������� ������������������ ���");
	return 0;
}
