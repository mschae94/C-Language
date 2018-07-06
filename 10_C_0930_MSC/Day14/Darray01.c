# include <stdio.h>

//이중배열

void main()
{
	/*
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	*/

	int i = 0;
	int j = 0;
	int value = 0;
	int dArr[3][2] = {0}; //dArr[세로][가로]
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
	//문제 1) 세로 3, 가로 4 짜리 이중배열을 만들어서 1씩 증가하는값을 넣고 출력해보세요
	//문제 2) 
	/*
	****
	****
	****
	*/

}