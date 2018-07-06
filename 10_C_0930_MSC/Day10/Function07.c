#include <stdio.h>

void IndexChange(int*pi)
{
	
	*pi = 1000;

}
void main()
{
	//문제 1) main의 변수를 다른함수에서 값을 바꾼다.
	//문제 2) main의 배열을 다른함수에서 값을 바꾼다.
	int arr[5] = {10,20,30,40,50};
	int i;
	int index;
	//문제 1) 배열의 인덱스를 입력받고 인덱스의 배열값이 1000으로 바뀌는 함수를 만들어보세요
	for (i=0; i<5; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("인덱스: ");
	scanf("%d", &index);
	IndexChange(&arr[index]);
	
	for (i=0; i<5; i++)
	{
		printf("%d\n", arr[i]);
	}
}