# include <stdio.h>

void main()
{
	int temp;
	printf("�µ��� �Է��ϼ���: ");
	scanf("%d", &temp);
	// 4�б��߿��� ������ 1���� ����ȴ�.
	if (temp >100)
	{
		printf("�µ��� 100�� ���� ũ��");
	}
	else if (temp < 100 && temp >50)
	{
		printf("�µ��� 50�� ���� ũ�� 100�� ���ٴ� �۴�");
	}
	else if (temp < 50 && temp >0)
	{
		printf("�µ��� 0�� ����ũ�� 50�� ���ٴ� �۴�");
	}
	else
	{
		printf("�µ��� 0���� �۴�");
	}

}