# include <stdio.h>

void main()
{
	int num1;
	int my_number;
	int com_number;
	num1 = 10;
	com_number = 1;
	// =: ����
	//if�� (�б⹮)
	//1. if: Ű����
	//2. (): ����
	//3. num1 == 10: ������ ����, == ����
	//4. {}: ����
	//������ ����:
	//1) !=: �ٸ���
	//2) <: �۴�
	//3) >: ũ��
	//4) <=: �۰ų� ����
	//5) >=: ũ�ų� ����

	if(num1 == 10)
	{
		printf("%d �� 10 �Դϴ�\n", num1);
	}
	//����1) ������ ������ �� ����غ�����.
	if(num1 != 10)
	{
		printf("%d �� 10�� �ƴմϴ�\n", num1);
	}
	if(num1 < 10)
	{
		printf("%d �� 10 ���� �۽��ϴ�\n", num1);
	}
	if(num1 > 10)
	{
		printf("%d �� 10���� Ů�ϴ�\n", num1);
	}
	if(num1 <= 10)
	{
		printf("%d �� 10���� �۰ų� �����ϴ�\n", num1);
	}
	if(num1 >= 10)
	{
		printf("%d �� 10���� ũ�ų� �����ϴ�\n", num1);
	}
	//���� 2) ���������������� ��������
	//����1) com_number�� �׻� ����(1)�Դϴ�
	//����2) -1, 3 �Է������� ���޼����� ����غ�����
	/*int my_number;
	int com_number = 1;
	printf("����(0), ����(1), ��(2) �� �Է��ϼ���");*/

	printf("����(0), ����(1), ��(2) �� �Է��ϼ���: \n");
	scanf("%d", &my_number);
	if(my_number < com_number)
	{
		printf("�����ϴ�");
	}
	if(my_number == com_number)
	{
		printf("�����ϴ�");
	}
	if(my_number > com_number)
	{
		printf("�̰���ϴ�");
	}
	if(my_number < 0)
	{
		printf("�����Դϴ�");
	}
	if(my_number >= 3)
	{
		printf("�����Դϴ�");
	}
}