#include <stdio.h>
#include < stdlib.h> //malloc
int * dmalloc(){
	int *p;
	p = (int *)malloc(sizeof(int) * 5);
	return p;}


void main()
{
	int *p = NULL;//�ʱ�ȭ
	//(int*)malloc(sizeof(int) * 5);  //����1) �̽��� �Լ����� �غ�����.
	//����1-1) void�Լ�������ؼ��ذ��غ�����(��ȭ)
	p = dmalloc();		p[0] = 10;     printf("%d\n" , p[0]);
//==================================================================================
	int **pp = NULL;
	int rowSize = 5;//����
	int colSize = 3;//����
	int i =0;
	pp = (int **) malloc(sizeof(int) * rowSize);  //���� 2) �̽��� �Լ����� �غ�����.
	for(i = 0; i < rowSize; i++){
		pp[i] = (int *) malloc(sizeof(int) * colSize);
	}
	//���� 3) ���� ���� ���ڸ� �Է¹ް� �������߹迭�� ���弼��.
	//���� 3-1) ũ�⸸ŭ ���� �ְ� ����ϼ���
	//���� 3-2) ����ū���� �������� ����غ�����.


}