#include <stdio.h>

//int: 정수로 변한다
//return: 변한정수를 반환한다

int Num10()
{
	return 10;

}
int Num20()
{
	return 20;
}
int Num30()
{
	return 30;
}
void Deco()
{
	printf("==========\n");
}

void main()
{
	int num1;

	Deco();
	num1 = 20;
	printf("%d\n", num1);
	num1 = Num10();
	printf("%d\n", num1);
	num1 = Num20();
	printf("%d\n", num1);
	num1 = Num30();
	printf("%d\n", num1);
	Deco();
	//문제2) 20 과 30 을 반환하는 함수 2개를 만들어서 활용해보세요
}