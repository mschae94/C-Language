# include <stdio.h>
# include <stdlib.h>


int* Malloc(int count)
{
	int* p1;
	p1 = (int*)malloc(sizeof(int)*count);
	return p1;
}

void main()
{
	int* p;
	int**p;
	//문제 1) 아래 한줄을 함수에서 처리해보세요
	//int count=2;
	//p1 = (int*) malloc(sizeof(int)*count);
	p = Malloc(2);
	//문제 2) void함수 그리고 대입금지 (=) ex) Malloc();
	p[0] = 10;
	p[1] = 20;
	printf("%d, %d\n", p[0], p[1]);
}