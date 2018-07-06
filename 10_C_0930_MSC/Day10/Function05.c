#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}
void ChangeNum1(int *p1)
{
	//int *p1; //p1 = (메인에 있는) &num1
	*p1 = 1000;

}
int Ao(int num1, int num2, int num3)
{
	if(num3 == 0)
	{
		int total;
	total = num1 + num2;
	return total;
	}
	else if(num3 ==1)
	{
		int total;
	total = num1 - num2;
	return total;
	}
	else if(num3 == 2)
	{
		int total;
	total = num1 * num2;
	return total;
	}
	else if(num3 ==3)
	{	
		int total;
	total = num1/ num2;
	return total;
	}
}
void main()
{
	//문제 1) num1의 값을 바꾸는 void함수를 만들어보세요
	int num1, result;
	int num1 = Add(10,20);
	int *p1;
	 
	printf("%d\n", num1);
	p1 = &num1;
	*p1 = 456;
	printf("%d\n", num1);
	
	ChangeNum1(&num1);
	printf("%d\n", num1);
	//문제 2) 사칙연산을 전부 출력 해주는 함수를 만들어보세요 조건) 0을 입력했으면
	//int result = 0, 0이 아니면 result = 1, result 값과 num1값을 출력하세요
	Ao(
	printf("%d, %d", num1, result);



}