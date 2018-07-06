#include <stdio.h>

int ChangeNum(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = num1;
	return num1;
}
void ChangeNum2(int *num1, int *num2) //void 를 쓸때는 return값을 안써도된다
{
	int temp;
	//문제 1) 풀어보세요
	temp = *num1;
	*num1 = *num2;
	*num2 = *num1;
}
void main()
{
	int num1, num2;
	num1 = 123, num2 = 987;

	printf("%d, %d\n", num1, num2); //123, 987
	ChangeNum(num1, num2);
	printf("%d, %d\n", num1, num2); // 987, 123 (안된다)
	//문제 1) 두 값을 합수를 통해서 바꿔보세요
	ChangeNum2(&num1, &num2); //포인터 함수를 통해서 바꿀수있다
	printf("%d, %d\n", num1, num2); //987, 123
}