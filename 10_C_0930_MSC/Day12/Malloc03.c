#include <stdio.h>
#include <stdlib.h> //malloc 함수

void Malloc(int count)
{
	int *p1;
	p1 = (int*)malloc(count*4);
}

int* Malloc2(int count)
{
	
	int *p1;
	p1 = (int*)malloc(count*4);
	return p1;
}
void main()
{
	int count;
	int *p1;
	int i;
	//문제 1)숫자를 입력받고 그숫자크기의 배열을 생성 입력 출력하세요
	//문제 2) 1번을 함수로 해보세요
	scanf("%d", &count);
	Malloc(count);
	p1 = (int*)Malloc2(count);
	//p1 = (int*)malloc(count*4);

	for(i=0; i< count; i++)
	{
		p1[i] = i;
		printf("%d\n", p1[i]);
	}
}