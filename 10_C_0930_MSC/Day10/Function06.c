#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int arr[6] = {0}; //000000
	int i = 0;
	srand(time(0));
	
	//����2) �����Լ� �̿��ؼ� arr2[10,20,30,40,50,60,70] ���� ������ �������
	//ex) 20, 10, 40, 70,50,60,30
	//����1) �����
	//���� 9)
	for(i=0; i<6; i++)
	{
		arr[i] = rand()&6;
	}
	for (i=0; i<6; i++)
	{
		printf("%d\n", arr[i]);
	}
}