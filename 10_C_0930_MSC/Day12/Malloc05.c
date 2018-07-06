# include <stdio.h>

int ChangeA(int a)
{
	int i;
	a = i;
	return a;
}
int ChangeB()
{
	int b;
	b = 400;
	return b;
}

void main ()
{
	int a;
	int b;
	int *p1;

	//문제 1) 함수를 이용해서 a = 300, b = 400으로 바꿔보세요
	a = 20;
	b = 30;

	//함수호출자리
	a = ChangeA(10);
	b = ChangeB();

	printf("%d, %d", a, b);

}