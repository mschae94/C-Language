# include <stdio.h>

void main()
{

	int my_number;
	int com_number;
	com_number = 1;

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