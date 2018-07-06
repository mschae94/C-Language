#include <stdio.h>
#include <stdlib.h>

void main ()
{
	//문제 1) 숫자하나를 입력받고 그 숫자만큼의 배열을 만들어보세요
	int arr[5]={0};
	int i;
	int j;
	int *pi;
	printf("숫자를 입력해주세요: ");
	scanf("%d", &j);

	pi = malloc(j*sizeof(int));




	//for (i=0; i<j; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}


}