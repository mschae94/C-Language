#include <stdio.h>
#include < stdlib.h>
//������ ����.
int main()
{
	int *p ;
	int arr[5] = { 10 , 20 , 30 , 40 , 50 };
	int a =10;
	int **pp = NULL;
	int i;
	
	//���� 1) pp �� 2�� �����迭�� ����� ���� ������ ����غ�����([][]����ؼ� ����غ�����)
	//���� 2) ����([][]�� ����������� ����غ�����)
	pp = (int **) malloc(sizeof(int) *2);

	for(i = 0; i < 2; i++)
	{
		pp[i] = (int*) malloc(sizeof(int) *2);
	}

	pp[0][0] = 20;
	pp[0][1] = 10;
	pp[1][0] = 30;
	pp[1][1] = 140;

	printf("%d" ,*(*(pp + 1)+1));


	return 0;
}