# include <stdio.h>

void main()
{
	//ī���
	int myNum;
	int comNum;
	int num1;
	int num2;
	comNum = 1;
	printf("����(0), ����(1), ��(2) �� �Է��ϼ���: ");
	scanf("%d",&myNum);
	// �ѹ����� �߰�ȣ�� ��� �۵��Ѵ�. e.g) if (myNum == comNum) print("�����ϴ�");
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
	//���� 1) �ʸ� �Է¹ް� �ú��ʸ� ����ؼ� ����ϼ��� (����)
	// 3700, 1�ð� 1�� 40�� (��Ʈ�� / , %)

	int second;
	
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &second);
	
	if (second/60 > 0)
	{
		printf("%d �� �Դϴ�", );
	}
	//2. ���� �ΰ��� �Է¹ް� ���� ��� ���, 
	//2.1 ���߿� �ϳ��� 0�̸�"0���� �����������ϴ� ���

	if (num1 ==0 || num2 == 0)
	{
		printf("0���� �����������ϴ�");
	}
	else 
	{
		printf("%d/%d = %d\n", num1, num2 ,num1/num2);
	}

	//5. ����1���� �Է¹ް� ¦�� Ȧ�� ��� (������ Ȱ�� %)
	if (num1 % 2 == 0)
	{
		printf("¦��");
	}
	if (num1 % 2 == 1)
	{
		printf("Ȧ��");
	}

}