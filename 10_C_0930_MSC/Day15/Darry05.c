# include <stdio.h>

void main()

{
	int arr[5] = {0,1,2,3,4};
	int input = 0;
	int i;
	//int arr[25] = {0};
	//int arr2[5][5] = {0};
	for (i=0; i<5; i++)
	{
		printf("%d ,", arr[i]);
	}
	for (;;)
	{
	scanf("%d", &input);
	arr[input] = 99;
	for (i=0; i<5; i++)
	{
		if (arr[input] ==99&& arr[input+1] ==99 && arr[input+2] == 99)
	{
		printf("빙고");
		break;
	}
		printf("%d ,", arr[i]);
	}
	
	}
	//문제 1)인덱스를 입력받으면 그곳의 값을 99로 바꿔보세요
	//문제 2)99가 연속으로 3개가되면 빙고를 출력해보세요.

	
	//문제 1) 값을 0~24까지 순차적으로 저장후 5줄씩 출력해보세요
	//문제 2) 99가 연속으로 3개가 되면 빙고를 출력해보세요
	//조건) 밑에 그림을 해결해보세요
	/*
	*  *  *  *  *
	*  *  *  *  99
	99 99 *  *  *
	*  *  *  *  *
	*/

}