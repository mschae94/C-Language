# include <stdio.h>

void main()
{
	// #����
	// (variable) �ڷḦ �����ϴ� �޸𸮰���
	// �ڷ��� ����: int, float, char
	// int: ������ �����Ѵ� (+- 20����)
	int a; //���: int ������ ������ ������ Ȯ���ض�, �̸��� a ���ض�
	int b;
	int c;
	a = 10; // = (����) == (����)
	printf("%d\n",a);
	b = 20;
	printf("%d\n", b);

	// ���� 1) ����, ���ϱ�, �����⸦
	// ������ ����ؼ� ����غ�����
	// +, -, *, /
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);

	// ���� 2) a == 10, b == 20 �ΰ��� �ٲ㺸����.
	c = a;
	a = b;
	b = c;

	printf("a: %d, b: %d\n", a, b);


}