#include <stdio.h>

//int: ������ ���Ѵ�
//return: ���������� ��ȯ�Ѵ�

int Num10()
{
	return 10;

}
int Num20()
{
	return 20;
}
int Num30()
{
	return 30;
}
void Deco()
{
	printf("==========\n");
}

void main()
{
	int num1;

	Deco();
	num1 = 20;
	printf("%d\n", num1);
	num1 = Num10();
	printf("%d\n", num1);
	num1 = Num20();
	printf("%d\n", num1);
	num1 = Num30();
	printf("%d\n", num1);
	Deco();
	//����2) 20 �� 30 �� ��ȯ�ϴ� �Լ� 2���� ���� Ȱ���غ�����
}