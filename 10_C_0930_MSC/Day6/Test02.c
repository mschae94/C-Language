#include < stdio.h>
void main()
{
	//����4) ȭ��ż� �Է�:65400 ,  ��� : 
	//       5���� 1�� , 1���� 1�� ,��õ��1��
	//      õ�� 0�� , 500�� 0�� , 100�� 4�� 
	int money;
	//million
	int fMil;
	int mil;
	//thousand
	int fTho;
	int tho;
	//hundred
	int fHun;
	int hun;
	printf("����ұݾ��� �����ּ���:");
	scanf("%d" , &money);
	fMil = money /50000;
	mil = (money % 50000) / 10000;
	fTho = (money % 10000) / 5000;
	tho = (money % 5000) / 1000;
	fHun = (money % 1000) / 500;
	hun = (money % 500)  /100;

	

}