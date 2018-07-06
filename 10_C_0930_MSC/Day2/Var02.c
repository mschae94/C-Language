# include <stdio.h>

void main()
{
	// #변수
	// (variable) 자료를 저장하는 메모리공간
	// 자료형 종류: int, float, char
	// int: 정수를 저장한다 (+- 20정도)
	int a; //명령: int 정수를 저장할 공간을 확보해라, 이름을 a 로해라
	int b;
	int c;
	a = 10; // = (같다) == (같다)
	printf("%d\n",a);
	b = 20;
	printf("%d\n", b);

	// 문제 1) 뺴기, 곱하기, 나누기를
	// 변수를 사용해서 출력해보세요
	// +, -, *, /
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);

	// 문제 2) a == 10, b == 20 두값을 바꿔보세요.
	c = a;
	a = b;
	b = c;

	printf("a: %d, b: %d\n", a, b);


}