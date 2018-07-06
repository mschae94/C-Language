#include <stdio.h>

//더블포인터
void main()
{
	int num1 = 20;
	int num2 = 30;
	int* p1;
	int* p2;
	int **pp1;
	int **pp2;

	//문제 1) p1, p2 를 이용해서 num1, num2의 값을 1000, 2000으로 바꿔보세요.

	p1 = &num1;
	p2 = &num2;
	*p1 = 1000;
	*p2 = 2000;
	printf("%d, %d\n", num1, num2);

	pp1 = &p1;
	pp2 = &p2;
	
	**pp1 = 3000;
	**pp2 = 4000;
	printf("%d, %d\n", num1, num2);
}