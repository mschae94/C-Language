# include <stdio.h>
# include <time.h> //�����Լ� ���� �ʿ�
# include <stdlib.h> //�����Լ� ���� �ʿ�

void main()
{
	int ranNum1;
	int ranNum2;
	int myNum;
	int comNum;
	srand(time(0)); // ��� �ٸ����� ������ �Ѵ�. 2~3�� ���̷� ���´�
	ranNum1 = rand(); //��� �Ȱ��� ���� ���´�.
	printf("%d\n", ranNum1);

	ranNum2 = rand();
	printf("%d\n", ranNum2);

	ranNum1 = ranNum1 % 3; //�������ڿ��� 3���� ���� ������ ��
	//printf("0~2�� ���´�: %d\n", ranNum1);
	//���� 1) ���������� �ϼ�!

	
	comNum = ranNum1 % 3; 
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
		printf("�����ϴ�");
	}
	if (myNum > comNum)
	{	
		printf("�̰���ϴ�");
	}
	if (myNum < comNum)
	{	
		printf("�����ϴ�");
	}
	if (myNum <= -1 || myNum >= 3)
	{	
		printf("���");
	}
}

