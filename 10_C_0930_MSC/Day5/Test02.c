# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void main()
{
	int random;
	int comNum;
	int myNum;
	srand(time(0));
	random = rand();
	//���� 1) comNum �� (0~100) ������ ���ڸ� �����Ѵ�
	//myNum�� ���ڸ� �ϳ� �Է¹޴´�.
	//myNum�� comNum�� ���ؼ� ũ�� �۴ٸ� ����Ѵ�.
	//���⶧���� �ݺ��Ѵ�.
	//���� 2) ���������� ������ switch ������ �غ���.
	
	printf("%d", random);

	comNum = rand() % 100;
}