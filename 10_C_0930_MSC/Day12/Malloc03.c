#include <stdio.h>
#include <stdlib.h> //malloc �Լ�

void Malloc(int count)
{
	int *p1;
	p1 = (int*)malloc(count*4);
}

int* Malloc2(int count)
{
	
	int *p1;
	p1 = (int*)malloc(count*4);
	return p1;
}
void main()
{
	int count;
	int *p1;
	int i;
	//���� 1)���ڸ� �Է¹ް� �׼���ũ���� �迭�� ���� �Է� ����ϼ���
	//���� 2) 1���� �Լ��� �غ�����
	scanf("%d", &count);
	Malloc(count);
	p1 = (int*)Malloc2(count);
	//p1 = (int*)malloc(count*4);

	for(i=0; i< count; i++)
	{
		p1[i] = i;
		printf("%d\n", p1[i]);
	}
}