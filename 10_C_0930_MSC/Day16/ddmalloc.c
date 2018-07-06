#include <stdio.h>
#include < stdlib.h> //malloc
int * dmalloc(){
	int *p;
	p = (int *)malloc(sizeof(int) * 5);
	return p;}


void main()
{
	int *p = NULL;//초기화
	//(int*)malloc(sizeof(int) * 5);  //문제1) 이식을 함수에서 해보세요.
	//문제1-1) void함수를사용해서해결해보세요(심화)
	p = dmalloc();		p[0] = 10;     printf("%d\n" , p[0]);
//==================================================================================
	int **pp = NULL;
	int rowSize = 5;//세로
	int colSize = 3;//가로
	int i =0;
	pp = (int **) malloc(sizeof(int) * rowSize);  //문제 2) 이식을 함수에서 해보세요.
	for(i = 0; i < rowSize; i++){
		pp[i] = (int *) malloc(sizeof(int) * colSize);
	}
	//문제 3) 세로 가로 숫자를 입력받고 동적이중배열을 만드세요.
	//문제 3-1) 크기만큼 값을 넣고 출력하세요
	//문제 3-2) 가장큰값과 작은값을 출력해보세요.


}