#include <stdio.h>
#include <stdlib.h>

void main()
{
	//1) �л����� �Է¹ް�
	//2) ���м���, �����, ����, ����� ���� ����غ�����
	//2.1) �̸� �߰�
	//3) �Լ���
	//4) int�� 2���������迭�� ����� ���� �Է��� ū�� ���� ���� ���غ�����
	//4.1
	int count;
	int total;
	int avr;
	int i =0;
	int * pKor;
	int * pMath;
	int * pEng;
	int **ppName;

	printf("�л����� �Է����ּ���: ");
	scanf("%d", &count);

	for(i = 0; i<count; i++)
	{
		printf("���м�����?: ");
		scanf("%d", &pMath);
		printf("���� ������?: ");
		scanf("%d", &pEng);
		total = pMath + pEng;
		avr = total/2;
		printf("��������: %d, �����: %d, ����: %d, ���: %d", pMath, pEng, total, avr);
	}
}