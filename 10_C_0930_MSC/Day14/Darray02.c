# include <stdio.h>
# include <stdlib.h>

void main()
{
	int count1 = 2;
	int count2 = 3;
	//int darr[count1][count2]; ���߹迭�� �̰� �ȵȴ�.
	int* p1;
	int count = 2;
	p1 = malloc(8);
	p1 = (int*)malloc(8);
	p1 = (int*)malloc(sizeof(int)*2);
	p1 = (int*)malloc(sizeof(int)*count); // ��������

	/*
	����������
	����������
	����������
	*/

}