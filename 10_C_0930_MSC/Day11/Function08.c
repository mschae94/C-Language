#include <stdio.h>
void* Scanf(int *p1)
{
	int i;
	for (i=0; i<5; i++)
	{
		scanf("%d", &p1[i]);
	}
}
int Max(int *p2)
	int max;

void main()
{
	int arr[5] = {0};
	int i;
	int *p1;
	int *p2;
	int max;
	int min;
	int result = -1;
	p1 = &arr[0];
	p2 = &max;
	min = arr[0];
	Scanf(p1);
	for (i=0; i<5; i++)
	{
	printf("%d\n", arr[i]);
	if(max < arr[i])
	{
		max = arr[i];
	}
	if (min > arr[i])
	{
		min = arr[i];
	}
	}
	printf("min: %d, max: %d", min, max);
	

	//���� 1) �迭�� �Է¹޾Ƽ� ���� �����ϼ���
	//���� 2) ū�� �������� ����ϼ���
	//���� 3) �迭�ȿ� �������� ������ result = 0; �� ����ϼ���
	//���� 4) ���� 2���� �Լ��� ó���غ�����
	//���� 5) ���� 3���� �Լ��� ó���غ�����
	
}