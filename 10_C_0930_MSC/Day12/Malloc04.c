#include <stdio.h>
#include <stdlib.h> //malloc �Լ�

int* Malloc(int count)
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
	int eng;
	int kor;
	//���� 3) �л����� �Է¹ް� �׼���ŭ ���� ���� ������ �Է�����غ�����
	printf("�л���: ");
	scanf("%d", &count);
	Malloc(count);
	p1 = (int*)Malloc(count);

	for(i=0; i< count; i++)
	{
		printf("���� ������: ");
		scanf("%d", &eng);
		printf("���� ������: ");
		scanf("%d", &kor);
		p1[i] = i;
		printf("%d\n", p1[i]);
	}
}