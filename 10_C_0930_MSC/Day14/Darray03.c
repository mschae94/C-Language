# include <stdio.h>
# include <stdlib.h>


int* Malloc(int count)
{
	int* p1;
	p1 = (int*)malloc(sizeof(int)*count);
	return p1;
}

void main()
{
	int* p;
	int**p;
	//���� 1) �Ʒ� ������ �Լ����� ó���غ�����
	//int count=2;
	//p1 = (int*) malloc(sizeof(int)*count);
	p = Malloc(2);
	//���� 2) void�Լ� �׸��� ���Ա��� (=) ex) Malloc();
	p[0] = 10;
	p[1] = 20;
	printf("%d, %d\n", p[0], p[1]);
}