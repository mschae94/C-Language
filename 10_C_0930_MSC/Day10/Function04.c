#include <stdio.h>

int ChangeNum(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = num1;
	return num1;
}
void ChangeNum2(int *num1, int *num2) //void �� ������ return���� �Ƚᵵ�ȴ�
{
	int temp;
	//���� 1) Ǯ�����
	temp = *num1;
	*num1 = *num2;
	*num2 = *num1;
}
void main()
{
	int num1, num2;
	num1 = 123, num2 = 987;

	printf("%d, %d\n", num1, num2); //123, 987
	ChangeNum(num1, num2);
	printf("%d, %d\n", num1, num2); // 987, 123 (�ȵȴ�)
	//���� 1) �� ���� �ռ��� ���ؼ� �ٲ㺸����
	ChangeNum2(&num1, &num2); //������ �Լ��� ���ؼ� �ٲܼ��ִ�
	printf("%d, %d\n", num1, num2); //987, 123
}