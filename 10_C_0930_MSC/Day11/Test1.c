# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void main()
{
	//문제 8) 랜덤함수도 이용해서 arr2[10,20,30,40,50,60,70] 안의 값들을 섞어보세요
	int arr[45];
	int i;
	int temp;
	int ri1; //random index;
	int ri2;
	srand(time(0));
	//공에 번호를 저장한다
	for (i=0; i<45; i++)
	{
		arr[i] = i + 1;
	}
	//100번 섞는다
	for (i=0; i<100; i++)
	{
		ri1 = rand()%45; //0~44가 나온다.
		ri2 = rand()%45;

		temp = arr[ri1];
		arr[ri1] = arr[ri2];
		arr[ri2] = temp;
	}
	for (i=0; i<6; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	//문제 1) 0~24 숫자를 저장하는 배열을 만드세요. 안에 숫자를 다 섞어보세요. 5줄 간격으로 출력해보세요

	
}