#include <stdio.h>

void main()
{
	//3000���� �л��� ����(������)
	int studentScore1;
	// ....
	int studentScore30;
	//�迭(array)
	// 1. ���� �ڷ������� ����� �������� ����
	// 2. �޸𸮿� ���ʴ�� �Ҵ�.
	int numArray[3]; //��� : ��ȣ������ int �ڷ��� 3���� ������
	// 1) int     : �ڷ���
	// 2) numArray  : �̸�
	// 3) [3]   : ���ȣ , ������ ����(ũ��)
	//�ݺ����� ���ؼ� Ȱ���Ѵ�.
	int i;
	numArray[0] = 100;
	numArray[1] = 70;
	numArray[2] = 60;
	//numArray[3] = 1000;
	printf("%d , %d , %d\n" ,numArray[0],
		numArray[1],numArray[2]);

	for (i = 0; i < 3; i++)
	{
		printf("for��: %d\n" , numArray[i]);
	}
	

}