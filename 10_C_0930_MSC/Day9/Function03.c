#include <stdio.h>

int Num10()
{
	return 10;
}
int Num20()
{
	return 10; //return: �Լ����� (�ؿ� return 20, 30, 40�� �۵��� �ȵȴ�)
	return 20, 30, 40; //40�� 30�� �ǰ� 30�� 20�� �Ǿ 20�� ��ȯ�ȴ�
}
int Add(int num1, int num2) //(���ڸ� �����ϴ°��� �Ű���������Ѵ�)
{
	int total;
	total = num1 + num2;
	return total;
}
int Subt(int num1, int num2)
{
	int total;
	total = num1 - num2;
	return total;
}
int Times(int num1, int num2)
{
	int total;
	total = num1 * num2;
	return total;
}
int Divide(int num1, int num2)
{
	int total;
	total = num1/ num2;
	return total;
}
int Ao(int num1, int num2, int num3)
{
	if(num3 == 0)
	{
		int total;
	total = num1 + num2;
	return total;
	}
	else if(num3 ==1)
	{
		int total;
	total = num1 - num2;
	return total;
	}
	else if(num3 == 2)
	{
		int total;
	total = num1 * num2;
	return total;
	}
	else if(num3 ==3)
	{	
		int total;
	total = num1/ num2;
	return total;
	}
}
void main()
{
	int num1;
	num1 = Num10();
	printf("%d\n", num1);

	num1 = Add(20, 10); //() �ȿ� ���� ���� ���ڶ�� �Ѵ�
	printf("%d\n", num1);
	num1 = Subt(20, 10);
	printf("%d\n", num1);
	num1 = Times(20, 10);
	printf("%d\n", num1);
	num1 = Divide(20, 10);
	printf("%d\n", num1);

	//���� 1) ����, ���ϱ�, ������ �Լ��� ��������
	//���� 2) ��Ģ������ ����� ���� �Լ� �ϳ��� �������� ��Ʈ(10000, 20, 0~3)
	num1 = Ao(10000, 20,0);
	printf("%d\n", num1);
}