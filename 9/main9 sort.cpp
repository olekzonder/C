// Sortirovka_pyzirkom.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <stdio.h>
#include <ctime>
#include <cstdlib>

int SortOtbor(int[], int);//�������� ������� ���������� �������
int PSort(int[], int);    //�������� ������� ����������� ����������
int BSort(int[],int); //�������� ������� ���������� ��������� ��������
int main()
{
	system("chcp 1251");

	const int size=20000; //������ �������
	int array[size];
	int array2[size];//������� ��� ���� ������, ����� ��� ������� ����������, ������������ ���������� ������(����� ������� array)
	int array3[size];
	int timeOfSortArray = 0;
	int timeOfSortArray2 = 0;
	int timeOfSortArray3 = 0;
	//�������� ������� ���������� ������� �� 1-�� �� 800-��
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 800;
		array2[i] = array[i];//�������� �������� ������� ������� �� ������, ����� ������������ ��� � ������� ��������� ����������
		array3[i] = array[i];
	}

	//������� �������� (�����������������) ������ �� �����
	printf("����������������� ������: \n");
	for (int i = 0; i < size; i++)
		printf("%4d", array[i]);
			printf("\n\n");
	
	timeOfSortArray = SortOtbor(array, size);
	//������� ��������������� ������ (�������) �� �����
	printf("��������������� ������ (�������): \n");
	for (int i = 0; i < size; i++)
		printf("%4d", array[i]);
	printf("\n\n");
	
	timeOfSortArray2 = PSort(array2, size);
	//������� ��������������� ������ ("�������") �� �����
	printf("��������������� ������ (\"�������\"): \n");
	for (int i = 0; i < size; i++)
		printf("%4d", array2[i]);
	printf("\n\n");
	
	timeOfSortArray3 = BSort(array3, size);
	//������� ��������������� ������ ������ � �������� �������� �� �����
	printf("��������������� ������ (�������� ��������): \n");
	for(int i = 0;i < size;i++){
		printf("%4d",array3[i]);
	}
	printf("\n\n\n\n");
	printf("�� ���������� ������� ������� ������� ���������: %4d ��������� ������ ����������!\n\n", timeOfSortArray);
	printf("�� ���������� ������� ������� \"�������\" ���������: %4d ��������� ������ ����������!\n\n", timeOfSortArray2); 
	printf("�� ���������� ������� ������� �������� �������� ���������: %4d ��������� ������ ����������!\n\n",timeOfSortArray3);
	if (timeOfSortArray < timeOfSortArray2 && timeOfSortArray < timeOfSortArray3)
      printf("���������� ������� ������� ������ �������� ������� \n");
   	else if (timeOfSortArray2 < timeOfSortArray && timeOfSortArray2 < timeOfSortArray3)
      printf("���������� ������� ������� \"������\" �������� ������� \n");
   else if (timeOfSortArray3 < timeOfSortArray && timeOfSortArray3 < timeOfSortArray)
      printf("���������� ������� ������� �������� �������� �������� ������� \n");
   else   
      printf("������ ���������� �������� ����������");
	return 0;
}

int SortOtbor(int Array[], int Size)
{
	int startTime = 0; // ��������� ����� ������ ������� ����������
	int endTime = 0; // �������� ����� ������ ������� ����������
	int searchTime = 0; //����������������� ������ ������� ����������

	int min; //����������� ������� � �������
	int index;
	int temp; // ��������� ���������� ��� �������� ������������ �������� ��������

	startTime = clock(); //�������� ������ ����������������� ����������
	for (int i = Size - 1; i >= 1; i--)
	{
		//������ ��������� ��������
		min = Array[i];
		index = i;

		//���� �������� ��������� �������
		for (int j = i - 1; j >= 0; j--)
		{
			//������� ����������� �������
			if (min > Array[j])
			{
				//���������� ����������� ������� � ��� ������
				min = Array[j];
				index = j;
			}
		}

		//���������� �������
		temp = Array[index];

		for (int x = index; x < i; x++)//�������� �������� �����
		{
			Array[x] = Array[x + 1];
		}

		Array[i] = temp;
	}
	endTime = clock(); // �������� ����� ������ ������� ����������

	return searchTime = (endTime - startTime); //������� ����� ������ ������� ;
}

int PSort(int Array2[], int Size)
{
	int startTime = 0; // ��������� ����� ������ ������� ����������
	int endTime = 0; // �������� ����� ������ ������� ����������
	int searchTime = 0; //����������������� ������ ������� ����������

	int temp; //�����
	int i,j;
	

	startTime = clock(); //�������� ������ ����������������� ����������
	
	for (i = Size - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (Array2[j] > Array2[j + 1])
			{
				temp = Array2[j];
				Array2[j] = Array2[j + 1];
				Array2[j + 1] = temp;
			}
	endTime = clock(); // �������� ����� ������ ������� ����������

	return searchTime = (endTime - startTime); //������� ����� ������ ������� ;
}

int BSort(int Array3[],int Size){
	int startTime = 0; // ��������� ����� ������ ������� ����������
	int endTime = 0; // �������� ����� ������ ������� ����������
	int searchTime = 0; //����������������� ������ ������� ����������
	int i,j,k;
	int min; //����������� �������� ����������������� �����
	int pos; //��������� ������������ �������� ����������������� �����
	startTime = clock();
	for (i = 0; i < Size-1; i++){
		min = Array3[i];
		for(j = i; j < Size;j++){
			if (Array3[j] < min){ //������ � ����������������� ������: ���������� ��������
				min = Array3[j]; 
				pos = j;
			}
		}
		if(min != Array3[i]) //��������, ������ �� ����������� �������
		{
			for (k = pos; k > i; k--){
			Array3[k] = Array3[k-1]; //�������� �������������� ����� �������
		}
			Array3[i] = min; //������ �������� �������� �� ��������� �����������
		}
	}
	endTime = clock();
	return endTime-startTime;
}
