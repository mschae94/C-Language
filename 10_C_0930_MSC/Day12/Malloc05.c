# include <stdio.h>

int ChangeA(int a)
{
	int i;
	a = i;
	return a;
}
int ChangeB()
{
	int b;
	b = 400;
	return b;
}

void main ()
{
	int a;
	int b;
	int *p1;

	//���� 1) �Լ��� �̿��ؼ� a = 300, b = 400���� �ٲ㺸����
	a = 20;
	b = 30;

	//�Լ�ȣ���ڸ�
	a = ChangeA(10);
	b = ChangeB();

	printf("%d, %d", a, b);

}