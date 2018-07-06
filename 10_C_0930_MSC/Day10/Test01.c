# include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;//함수는 중괄호가 끝나면 종료하는데 reutrn을 만나면 즉시 종료한다
	num1 = 1000; // 소용없다.
}
int Add2()
{
	int num1;
	int num2;
	return num1 + num2;
}
void Deco()
{
	printf("=============================\n");
}
void main()
{
	Deco();
	Add(10,20);
	Add2();
}
