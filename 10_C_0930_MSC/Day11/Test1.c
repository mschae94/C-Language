# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void main()
{
	//���� 8) �����Լ��� �̿��ؼ� arr2[10,20,30,40,50,60,70] ���� ������ �������
	int arr[45];
	int i;
	int temp;
	int ri1; //random index;
	int ri2;
	srand(time(0));
	//���� ��ȣ�� �����Ѵ�
	for (i=0; i<45; i++)
	{
		arr[i] = i + 1;
	}
	//100�� ���´�
	for (i=0; i<100; i++)
	{
		ri1 = rand()%45; //0~44�� ���´�.
		ri2 = rand()%45;

		temp = arr[ri1];
		arr[ri1] = arr[ri2];
		arr[ri2] = temp;
	}
	for (i=0; i<6; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	//���� 1) 0~24 ���ڸ� �����ϴ� �迭�� ���弼��. �ȿ� ���ڸ� �� �������. 5�� �������� ����غ�����

	
}