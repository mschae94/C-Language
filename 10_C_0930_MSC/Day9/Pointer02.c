#include <stdio.h>

void main ()
{
	int num1 = 178;
	int num2 = 20;
	int *p1;
	int *p2;
	int temp;
	//���� 1) num1 �� ���� num2 �� ���� �ٲ㺸����
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	
	//���� 2) p1 �� p2�� num1 �� num2 �� �ּҸ� ��������ϼ���

	p1 = &num1;
	p2 = &num2;
	printf("&num1: %d\n", p1);
	printf("&num2: %d\n", p2);
	//���� 3) p1�� p2�� ����ؼ� num1 �� num2�� ���� �ٲ㺸����
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("num1: %d, num2: %d\n", num1, num2);

}