#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //sleep
#include <time.h>

int main()
{
	int num =0;
	srand(time(0));
	//���ѹݺ�
	while(1){
		system("cls"); //ȭ���� �����.
		
		num+=1;
		printf("%d\n", num);

		Sleep(1000); //1�ʰ� ����
	}
	//(���� ai)
	//����1) ����Ų��� 31���� //int p1, p2, count
	//		 p1 p2 �Ѵ� 1~3���� ���������� �Է¹ް� count�� 31�� ���������� �ݺ��غ�����

	//���� 2) ���ٿ���� //int comnum, int p1
	//		  comnum�� 0~99���� ���������� �Է¹޴´�.
	//		  p1�� 0~99���� ���������� �Է¹޴´�. comnum�� p1�� ���ؼ� ���� �۴� ũ�� �� ���
	//		  (����) comnum�� ���ڿ� �����Ҽ��ֵ��� ���α׷����غ�����
	//���� 3) 


}