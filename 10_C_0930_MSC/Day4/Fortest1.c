# include <stdio.h>
# include <time.h> //�����Լ� ���� �ʿ�
# include <stdlib.h> //�����Լ� ���� �ʿ�

void main()
{
	//���� 1) ���������� ������ 10�� �Ҽ��ְ� ��������.
	//���� 2.1) ���� �̱涧���� �ǰ� �غ�����
	int i;
	int myNum;
	int comNum;

	srand(time(0));
	for (i = 0; i < 1; i)
	{	
		comNum = rand() % 3;
		printf("����(0), ����(1), ��(2) �� �Է��ϼ���: ");
		scanf("%d",&myNum);
		if (myNum == 0)
			printf("��: ����\n"); 
		if (myNum == 1)
			printf("��: ����\n"); 
		if (myNum == 2)
			printf("��: ��\n"); 
		if (comNum == 0)
			printf("Com: ����\n");
		if (comNum == 1)
			printf("Com: ����\n");
		if (comNum == 2)
			printf("Com: ��\n");
		if (myNum == comNum)
	{	
		printf("�����ϴ�\n");
	}
	if (myNum > comNum)
	{	
		printf("�̰���ϴ�\n");
	}
	if (myNum < comNum)
	{	
		printf("�����ϴ�\n");
	}
	if (myNum <= -1 || myNum >= 3)
	{	
		printf("���");
	}
	if (myNum > comNum)
	{
		i = i + 1;
		printf("����");
	}
}
}