#include <stdio.h>
# include <time.h>
# include <stdlib.h> 
void main()
{
	//���� 8) �����Լ��� �̿��ؼ� arr[10,20,30,40,50,60,70] �ȿ� ������ �������
	//ex) 20, 10, 30, 70, 50, 60
	int arr2[] = {10, 20, 30, 40, 50, 60, 70};
	int random1, random2;
	int temp;
	int i;
	int arr[6] = {0};
	int j, k;
	srand(time(0));
	random1 = rand() % 7;
	random2 = rand() % 7;
	temp = arr2[random1];
	arr2[random1]=arr2[random2];
	arr2[random2] = temp;
	for (i=0; i < 7; i++)
	{
	
		printf("%d\n", arr2[i]);
	}

	//���� 9) ��ġ���ʰ� �������ڸ� �̾ƺ�����.
	
	for(j = 0; j <6; j++)
	{
		for(k = 0; k < j+1; k++){
		arr[j] = rand() % 6;
		}
	}
	for(j=0; j<6; j++)
	{
			printf("%d\n", arr[j]);
	}
}