# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define count 25 //���

void main()
{
	//���� 1) 0~24 ���ڸ� �����ϴ� �迭�� ���弼��. �ȿ� ���ڸ� �� �������. 5�� �������� ����غ�����
	int arr[25];
	int i;
	int j;
	int r1;
	int r2;
	int temp;

	srand(time(0));
	for (i=0; i<count; i++)
	{
		arr[i] = i + 1;
	}
	for (i=0; i<100; i++)
	{
		r1 = rand()%count;
		r2 = rand()%count;
		temp = arr[r1];
		arr[r1] = arr[r2];
		arr[r2] = temp;
	}
	for (j=0; j<10; j++)
	{
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &i);
	arr[i] = 99;
	for (i=0; i<count; i++)
	{
		printf("%d\t", arr[i]);
		if ((i + 1)% 5 ==0)
		{
			printf("\n");
		}
	}
	}
	

	//���� 2) 0~24 ������ ���ڸ� �Է¹����� 99�� �ٲ㺸����
	//���� 3) ������ ���� 99�� �ٲ�� ���� ���
}