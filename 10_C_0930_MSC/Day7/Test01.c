#include <stdio.h>

void main()
{
	int numArr[10] = {0};
	int numArr2[5] = {9,5,3,2,1};
	int numArr3[6] = {1,9};
	//int numArr4[2] = {10,9,4}; //���� //�迭�����̻������Ҽ�����
	int i=0;
	int sum=0;

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[1]);
	printf("%d\n", numArr[2]);
	printf("%d\n", numArr[3]);
	printf("%d\n", numArr[4]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[6]);
	printf("%d\n", numArr[7]);
	printf("%d\n", numArr[8]);
	printf("%d\n", numArr[9]);
	
	//����1) �������� ����غ�����
	for(i=0; i <11; i++)
	{
		printf("%d\n", numArr[i]); //i: ��ġ ==> �ε���
	}
	//����2) numArr2�� ���� �������� ����غ�����
	//����2-1) numArr2�� 2���� �ε����� ���� 3���� �ٲ㺸����
	//����2-2) numArr2�� ��簪������ ���հ� ����� ���غ�����
	//����2-3) �ε����ϳ��� �Է¹ް� �װ��� ���� 1000���� �ٲ㺸����
	//ex) �Է�: 2, ���: {9,3,1000,2,1}

	for (i=0; i<6; i++)
	{
		if (i== 1)
		{
			numArr2[i] = 3;
		}
		printf("%d\n", numArr2[i]);
			
	}
	while (i < 5)
	{
		sum = sum + numArr2[i];
		i = i+1;
	}
	printf("%d\n", sum);

	for (i=0; i<7; i++)
	{
		printf("%d\n", numArr3[i]);
	}
	
	
	//����3) numArr3�� ���� �������� ����غ�����
}