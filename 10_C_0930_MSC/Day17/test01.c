#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()함수, strcpy()함수

void main()

{
	//동적할당
	//1차원동적배열
	int count=4;
	int *p;
	p = (int*)malloc(sizeof(int)*count); //ㅁ = ㅁㅁㅁㅁ

	//2차원 동적배열
	int row = 3;
	int col = 5;
	int **pp;
	int i;


	pp = (int**)malloc(sizeof(int)*row);

	for(i = 0; i< row; i++)
	{
		pp[i] = (int*)malloc(sizeof(int)*col);
	}
}