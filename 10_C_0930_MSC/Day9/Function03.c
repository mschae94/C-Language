#include <stdio.h>

int Num10()
{
	return 10;
}
int Num20()
{
	return 10; //return: 함수종료 (밑에 return 20, 30, 40은 작동이 안된다)
	return 20, 30, 40; //40이 30이 되고 30이 20이 되어서 20만 변환된다
}
int Add(int num1, int num2) //(인자를 저장하는값을 매개변수라고한다)
{
	int total;
	total = num1 + num2;
	return total;
}
int Subt(int num1, int num2)
{
	int total;
	total = num1 - num2;
	return total;
}
int Times(int num1, int num2)
{
	int total;
	total = num1 * num2;
	return total;
}
int Divide(int num1, int num2)
{
	int total;
	total = num1/ num2;
	return total;
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
	int num1;
	num1 = Num10();
	printf("%d\n", num1);

	num1 = Add(20, 10); //() 안에 들어가는 값을 인자라고 한다
	printf("%d\n", num1);
	num1 = Subt(20, 10);
	printf("%d\n", num1);
	num1 = Times(20, 10);
	printf("%d\n", num1);
	num1 = Divide(20, 10);
	printf("%d\n", num1);

	//문제 1) 뺴기, 곱하기, 나누기 함수를 만들어보세요
	//문제 2) 사칙연산의 기능을 가진 함수 하나를 만들어보세요 힌트(10000, 20, 0~3)
	num1 = Ao(10000, 20,0);
	printf("%d\n", num1);
}