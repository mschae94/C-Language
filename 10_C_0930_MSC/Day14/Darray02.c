# include <stdio.h>
# include <stdlib.h>

void main()
{
	int count1 = 2;
	int count2 = 3;
	//int darr[count1][count2]; 이중배열도 이게 안된다.
	int* p1;
	int count = 2;
	p1 = malloc(8);
	p1 = (int*)malloc(8);
	p1 = (int*)malloc(sizeof(int)*2);
	p1 = (int*)malloc(sizeof(int)*count); // 최종형태

	/*
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	ㅁㅁㅁㅁㅁ
	*/

}