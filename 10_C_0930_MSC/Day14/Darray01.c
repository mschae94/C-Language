# include <stdio.h>

//戚掻壕伸

void main()
{
	/*
	けけけけけ
	けけけけけ
	けけけけけ
	けけけけけ
	けけけけけ
	*/

	int i = 0;
	int j = 0;
	int value = 0;
	int dArr[3][2] = {0}; //dArr[室稽][亜稽]
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
	//庚薦 1) 室稽 3, 亜稽 4 促軒 戚掻壕伸聖 幻級嬢辞 1梢 装亜馬澗葵聖 隔壱 窒径背左室推
	//庚薦 2) 
	/*
	****
	****
	****
	*/

}