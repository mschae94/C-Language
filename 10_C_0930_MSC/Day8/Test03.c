#include <stdio.h>

void main ()
{
	//���� 6) �ε��� 2���� �Է¹ް� ���� ���� �ٲ㺸����
// ex) �Է� : 1 , 2  ��� : 10 , 30 , 20 , 40 , 60 

//���� 7) max �� min �� ����غ�����.
// ex ) ��� : max : 60 , min : 10  
//c��� ������ǥ : �������� ���α׷� + ����
	int arr[5] = {10, 20, 30, 40, 60};
	int indexNum1, indexNum2;
	int temp;
	int i;
	int max, min;

	printf("(0-4)�ε��� 2���� �������ּ���");
	scanf("%d %d",&indexNum1, &indexNum2);
	temp = arr[indexNum1];
	arr[indexNum1]=arr[indexNum2];
	arr[indexNum2] = temp;
	max = arr[0];
	min = arr[0];
	for (i=0; i<5; i++)
	{
		if (max < arr[i]){
			max = arr[i];
		}
		if (min > arr[i]){
			min = arr[i];
		}
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	printf("max: %d, min: %d\n", max, min);
	//���� 8) �����Լ��� �̿��ؼ� arr[10,20,30,40,50,60,70] �ȿ� ������ �������
	//ex) 20, 10, 30, 70, 50, 60, 30
}