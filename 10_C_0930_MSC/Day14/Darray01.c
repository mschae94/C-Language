# include <stdio.h>

//���߹迭

void main()
{
	/*
	����������
	����������
	����������
	����������
	����������
	*/

	int i = 0;
	int j = 0;
	int value = 0;
	int dArr[3][2] = {0}; //dArr[����][����]
	int dArr2[3][4] = {0};

	for (i=0; i <3; i++)
	{
		for (j =0; j<2; j++)
		{
			dArr[i][j] = value;
			value++;
		}
	}
	for (i=0; i <3; i++)
	{
		for (j =0; j<2; j++)
		{
			printf("[%d] [%d] => %d\n", i, j, dArr[i][j]);
		}
	}

	value = 0;
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			dArr2[i][j] = value;
			value++;
			printf("[%d] [%d] => %d\n", i, j, dArr2[i][j]);
		}
	}
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%d\t", dArr2[i][j]);
		}
		printf("\n");
	}
	//���� 1) ���� 3, ���� 4 ¥�� ���߹迭�� ���� 1�� �����ϴ°��� �ְ� ����غ�����
	//���� 2) 
	/*
	****
	****
	****
	*/

}