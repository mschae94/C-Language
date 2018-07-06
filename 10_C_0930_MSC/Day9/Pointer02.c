#include <stdio.h>

void main ()
{
	int num1 = 178;
	int num2 = 20;
	int *p1;
	int *p2;
	int temp;
	//문제 1) num1 의 값과 num2 의 값을 바꿔보세요
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	
	//문제 2) p1 과 p2에 num1 과 num2 의 주소를 저장출력하세요

	p1 = &num1;
	p2 = &num2;
	printf("&num1: %d\n", p1);
	printf("&num2: %d\n", p2);
	//문제 3) p1과 p2를 사용해서 num1 과 num2의 값을 바꿔보세요
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("num1: %d, num2: %d\n", num1, num2);

}