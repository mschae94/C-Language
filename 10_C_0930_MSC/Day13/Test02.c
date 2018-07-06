# include <stdio.h>
# include <stdlib.h>


void main()
{
	//문제 1) int 형 배열 5개를 동적할당으로 만들어보세요
	//문제 2) 음수를 포함해서 5개의 정수를 입력받습니다.
	//문제 2.1) 인덱스를 입력받고 그인덱스의 값을 1000으로 바꿔보세요
	//문제 2.2) 인덱스 2개를 입력받고 그인덱스의 값을 바꿔보세요
	//문제 3) max min 에가장큰수와 작은수를 입력해보세요

	//심화문제) 숫자 2를 입력받으면 배열첫번째 값이 오른쪽으로 이동하게 해보세요
	// arr[5] = {0, 1, 2, 3, 4}
	// 숫자를 입력하세요 2

	
	int i;
	int count;
	int* pi;
	int index;

	printf("할당량을 입력하세요: ");
	scanf("%d", &count);

	pi = (int *)malloc(count*sizeof(int));
	
	for (i=0; i<count; i++)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &pi[i]);
	}
	
		printf("%d", pi[i]);

	
	
	printf("인덱스를 입력하세요: ");
	scanf("%d", &index);

	pi[index] = 1000;



}