#include <stdio.h>

void IndexChange(int*pi)
{
	
	*pi = 1000;

}
void main()
{
	//���� 1) main�� ������ �ٸ��Լ����� ���� �ٲ۴�.
	//���� 2) main�� �迭�� �ٸ��Լ����� ���� �ٲ۴�.
	int arr[5] = {10,20,30,40,50};
	int i;
	int index;
	//���� 1) �迭�� �ε����� �Է¹ް� �ε����� �迭���� 1000���� �ٲ�� �Լ��� ��������
	for (i=0; i<5; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("�ε���: ");
	scanf("%d", &index);
	IndexChange(&arr[index]);
	
	for (i=0; i<5; i++)
	{
		printf("%d\n", arr[i]);
	}
}