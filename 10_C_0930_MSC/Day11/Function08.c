#include <stdio.h>
void* Scanf(int *p1)
{
	int i;
	for (i=0; i<5; i++)
	{
		scanf("%d", &p1[i]);
	}
}
int Max(int *p2)
	int max;

void main()
{
	int arr[5] = {0};
	int i;
	int *p1;
	int *p2;
	int max;
	int min;
	int result = -1;
	p1 = &arr[0];
	p2 = &max;
	min = arr[0];
	Scanf(p1);
	for (i=0; i<5; i++)
	{
	printf("%d\n", arr[i]);
	if(max < arr[i])
	{
		max = arr[i];
	}
	if (min > arr[i])
	{
		min = arr[i];
	}
	}
	printf("min: %d, max: %d", min, max);
	

	//문제 1) 배열에 입력받아서 값을 저장하세요
	//문제 2) 큰값 작은값을 출력하세요
	//문제 3) 배열안에 같은값이 있으면 result = 0; 을 출력하세요
	//문제 4) 문제 2번을 함수로 처리해보세요
	//문제 5) 문제 3번을 함수로 처리해보세요
	
}