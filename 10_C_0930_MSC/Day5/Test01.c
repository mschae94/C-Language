# include <stdio.h>

//���� 1) �ʸ� �Է¹ް� �ú��ʸ� ����ؼ� ����ϼ��� (����)
//3700, 1�ð�, 1 ��, 40�� (��Ʈ�� /, %)

void main()
{
	int temp; //�����Ⱚ�� ����.(������ ����ų���ִ�)
	int num1 = 0;
	int hour;
	int min;
	int sec;
	
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &num1);
	hour = num1/3600;
	min = (num1%3600)/60;
	sec = num1%60;
	printf("%d ��, %d ��, %d ��", hour, min, sec);


}