#include <stdio.h>
void main()
{
	//���� 3) ����ö����� ������ ����غ�����;
	//[��Ģ] �⺻ : 0~5 : 600�� , 6~10 : 700��;
	//       �߰� : 2������ ���� 50��
	//ex) �Է�: 13  , ���: ��� 800��
	//     14 , 800
	//     15 , 850	
	int sCount;
	int pay;
	printf("����ö������ �Է��ϼ��� ");
	scanf("%d" , &sCount);
	if(sCount <=5)
	{
		pay = 600;
	}
	else if(sCount <=10)
	{
		pay = 700;
	}
	else
	{
		pay = 700 + ((sCount-9)/2) * 50;
	}
	printf("������ : %d ,�����: %d " ,sCount, pay);
}