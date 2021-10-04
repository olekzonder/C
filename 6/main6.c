#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	system("chcp 1251");
	// ВВОД РАЗМЕРА МАССИВА
	int n = 0;
	while( (n > 20) || (n < 5)){
			printf("Введите размер массива (5 - 20) > ");
			scanf("%d",&n);
	}
	int A[n];
	// ВВОД ЗНАЧЕНИЙ
	int k;
	int i = 0;
	char flag = 0;
	for (;i < n; i++){
		while( (k > 100) || (k < -100)){
			printf("Введите значение №%d (-100 - 100) > ",i+1);
			scanf("%d",&k);
		}
		A[i] = k;
		k = -101;
	}
	// ПОДСЧЁТ МАКСИМАЛЬНОЙ ПОСЛЕДОВАТЕЛЬНОСТИ
	int maxsum = -1;
	int sum, pos1,pos2;
	for (i = 0;i < n-1; i++){
		if (A[i] < 0) continue; // ПРОПУСК ОТРИЦАТЕЛЬНОГО ЗНАЧЕНИЯ СЛЕВА
		sum = A[i]; // НАЧИНАЕМ ПОДСЧЁТ СУММЫ С ЛЕВОГО ЗНАЧЕНИЯ
		int j = i+1;
		for (; j < n; j++){
			if (A[j] > 0){
				sum += A[j];
				flag = 1; //проверка, что это именно последовательность, а не одно число
			}
			else break; // ПРЕРЫВАНИЕ ИТЕРАЦИИ С ОТРИЦАТЕЛЬНЫМ ЗНАЧЕНИЕМ
		}
	if (sum > maxsum && flag == 1){
			maxsum = sum;
			pos1 = i; //ЧИСЛО СЛЕВА
			pos2 = j; //ЧИСЛО СПРАВА
			flag = 0; //сброс флажка
		}
	}
	//ОПРЕДЕЛЕНИЕ, ЕСТЬ ЛИ ТАКАЯ ПОСЛЕДОВАТЕЛЬНОСТЬ В МАССИВЕ, ИЛИ НЕТ
	if (maxsum > -1){
		printf("Непрерывная последовательность положительных элементов, сумма которых максимальна:");
		for (i  = pos1; i < pos2; i++) printf("%d ", A[i]);
	}
	else printf("Искомая последовательность отсутствует");
	return 0;
}
