# include <stdio.h>

void main()
{
	int grade = 0;
	int score;
	printf("�г���?");
	scanf("%d", &grade);
	//1. switch		: Ű����
	//2. ()			: ��(���, ����) 0, 1, 2, 3, 4 ,5
	//3. {}			: ����
	//4. (case ��:)	: �б� ����
	//5. break;		: ����
	//6. default	: else �� �Ȱ��� (�� �ۿ�)
	switch(grade)
	{
		case 1:
			printf("1�г��Դϴ�\n");
			break;
		case 2:
			printf("2�г��Դϴ�\n");
			break;
		case 3:
			printf("3�г��Դϴ�\n");
			break;
		default:
			printf("�𸣰ٴ�\n");
			break;
	}
	//���� 1) ������ �Է¹ް� 100������ 10�� ������ A, B, C, F ����� ����غ�����
	//���� 2) ��ȭ(100~97: A+, 96~94: A, 93~90:A-)�� ����غ�����

	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);
	if (score >= 90)
	{printf("����: A");}
	else if (80 <= score && score < 90)
	{printf("����: B");}
	else if (70 <= score && score < 80)
	{printf("����: C");}
	else 
	{printf("����: F");}

	
}