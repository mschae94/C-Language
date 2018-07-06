#include <stdio.h>
#include <stdlib.h>

void main()
{
		//심화문제) 숫자 2를 입력받으면 배열첫번째 값이 오른쪽으로 이동하게 해보세요
	// arr[5] = {0, 1, 2, 3, 4}
	// 숫자를 입력하세요 2
	int arr[5];
	int *p;
	int input;
	int temp;
	int index = 0;
	int i;
	p = (int *) malloc(20);
	
		for (i=0; i< 5; i++)
	{
		p[i] = i;
		printf("%d ,", p[i]);
	}
	printf("\n");
	for(;;) //무한반복
	{	
	printf("숫자를 입력하세요");
	scanf("%d", &input);

	if(input ==2)
	{
		temp = p[index];
		p[index] = p[index +1];
		p[index + 1] = temp;
		index = index + 1;
	}
	if(input ==1)
	{
		temp = p[index];
		p[index] = p[index -1];
		p[index - 1] = temp;
		index = index - 1;
	}
	for (i=0; i< 5; i++)
	{
		printf("%d ,", p[i]);
	}
	printf("\n");
	}
}