#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, p1, p2, count;
	srand(time(0));
	for (i=0; i<10; i++)
	{
		p1 = rand()%3 + 1;
		p2 = rand()%3 + 1;
		count = p1 + p2;
		if (count > 31)
		{

		}
		printf("%d, %d, %d\n", p1, p2, count);
	}
}

//(���� ai)
	//����1) ����Ų��� 31���� //int p1, p2, count
	//		 p1 p2 �Ѵ� 1~3���� ���������� �Է¹ް� count�� 31�� ���������� �ݺ��غ�����
