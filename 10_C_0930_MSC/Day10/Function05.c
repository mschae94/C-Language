#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}
void ChangeNum1(int *p1)
{
	//int *p1; //p1 = (���ο� �ִ�) &num1
	*p1 = 1000;

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
	//���� 1) num1�� ���� �ٲٴ� void�Լ��� ��������
	int num1, result;
	int num1 = Add(10,20);
	int *p1;
	 
	printf("%d\n", num1);
	p1 = &num1;
	*p1 = 456;
	printf("%d\n", num1);
	
	ChangeNum1(&num1);
	printf("%d\n", num1);
	//���� 2) ��Ģ������ ���� ��� ���ִ� �Լ��� �������� ����) 0�� �Է�������
	//int result = 0, 0�� �ƴϸ� result = 1, result ���� num1���� ����ϼ���
	Ao(
	printf("%d, %d", num1, result);



}