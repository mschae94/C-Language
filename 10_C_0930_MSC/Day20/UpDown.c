#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //sleep
#include <time.h>

int main()
{
	//���� AI
	//���� 2) ���ٿ���� //int comnum, int p1
	//		  comnum�� 0~99���� ���������� �Է¹޴´�.
	//		  p1�� 0~99���� ���������� �Է¹޴´�. comnum�� p1�� ���ؼ� ���� �۴� ũ�� �� ���
	//		  (����) comnum�� ���ڿ� �����Ҽ��ֵ��� ���α׷����غ�����int num =0;
	
	
	int comnum;
	int p1;
	srand(time(0));

	comnum = rand()%100;
	printf("comnum: %d\n", comnum);
	p1 = rand()%100;
	printf("p1: %d\n", p1);
	//���ѹݺ�
	while(1){
		//system("cls"); //ȭ���� �����.
		//p1 = rand()%100;
		//printf("p1: %d\n", p1);

		if(comnum > p1) 
		{	
			printf("comnum�� ũ�� ");
			rand()%comnum;
		}
		else if (comnum < p1) printf("comnum�� �۴� ");
		else {break;}

		Sleep(1000); //1�ʰ� ����
	}
	printf("����");
}