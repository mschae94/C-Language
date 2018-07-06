# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define count 25 //상수

void main()
{
	//문제 1) 0~24 숫자를 저장하는 배열을 만드세요. 안에 숫자를 다 섞어보세요. 5줄 간격으로 출력해보세요
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
	printf("숫자를 입력하세요: ");
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
	

	//문제 2) 0~24 사이의 숫자를 입력받으면 99로 바꿔보세요
	//문제 3) 한줄이 전부 99로 바뀌면 빙고 출력
}