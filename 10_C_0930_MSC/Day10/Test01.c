# include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;//�Լ��� �߰�ȣ�� ������ �����ϴµ� reutrn�� ������ ��� �����Ѵ�
	num1 = 1000; // �ҿ����.
}
int Add2()
{
	int num1;
	int num2;
	return num1 + num2;
}
void Deco()
{
	printf("=============================\n");
}
void main()
{
	Deco();
	Add(10,20);
	Add2();
}
