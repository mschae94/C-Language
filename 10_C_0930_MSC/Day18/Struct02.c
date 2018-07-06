#include <stdio.h>
#include < stdlib.h>
//포인터 연산.
int main()
{
	int *p ;
	int arr[5] = { 10 , 20 , 30 , 40 , 50 };
	int a =10;
	int **pp = NULL;
	int i;
	
	//문제 1) pp 로 2중 동적배열을 만들고 값을 넣은후 출력해보세요([][]사용해서 출력해보세요)
	//문제 2) 조건([][]을 사용하지말고 출력해보세요)
	pp = (int **) malloc(sizeof(int) *2);

	for(i = 0; i < 2; i++)
	{
		pp[i] = (int*) malloc(sizeof(int) *2);
	}

	pp[0][0] = 20;
	pp[0][1] = 10;
	pp[1][0] = 30;
	pp[1][1] = 140;

	printf("%d" ,*(*(pp + 1)+1));


	return 0;
}