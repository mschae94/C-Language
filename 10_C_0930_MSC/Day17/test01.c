#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()�Լ�, strcpy()�Լ�

void main()

{
	//�����Ҵ�
	//1���������迭
	int count=4;
	int *p;
	p = (int*)malloc(sizeof(int)*count); //�� = ��������

	//2���� �����迭
	int row = 3;
	int col = 5;
	int **pp;
	int i;


	pp = (int**)malloc(sizeof(int)*row);

	for(i = 0; i< row; i++)
	{
		pp[i] = (int*)malloc(sizeof(int)*col);
	}
}