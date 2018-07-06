#include <stdio.h>
// &: 주소연산자
void main()
{
	//문제 1) num2 ,num3 을만들어서 같은방법으로 출력해보세요
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int arr[5] = {0}; //모두 0으로 초기화
	int i;
	printf("num1: %d\n", num1); //값 출력
	printf("num2: %d\n", num2);
	printf("num3: %d\n", num3);
	//scanf("%d\n", &num1);
	printf("&num1: %d\n", &num1); //주소 출력
	printf("&num2: %d\n", &num2);
	printf("&num3: %d\n", &num3);

	//문제 2) 5개짜리 int 배열을 만들어서 같은방법으로 출력해보세요
	for(i=0; i<5; i++)
	{
		printf("arr[i]: %d\n", arr[i]);
		printf("&arr[i]: %d\n", &arr[i]);
	}
	//주소를 왜 알아야되는가??

	
	

}