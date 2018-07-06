# include <stdio.h>

void Swap(int a, int b)
{
	int temp;
	int *p1;
	int *p2;
	int **pp1;
	int **pp2;
	pp1 = &p1;
	pp2 = &p2;

	temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;


}

int main()

{
	int a = 10;
	int b = 20;
	int *p1 = NULL; //초기화
	int *p2 = NULL;
	int temp;
	int **pp1 = NULL;
	int **pp2 = NULL;

	p1 = &a;
	p2 = &b;

	printf("p1: %d, &a: %d\n", p1, &a);
	printf("p2: %d, &b: %d\n", p2, &b);

	//문제 1) main에서 p1에는 b의주소, p2에는 a의 주소를 담아보세요
	//문제 1.1) swap함수로도 만들어보세요 
	//문제 1.2) main()에서 pp1과 pp2를 이용해서 p1에는 b의주소, p2에는 a의 주소를 담아보세요

	//temp = p1;
	//p1 = p2; 
	//p2 = temp;
	
	Swap(10, 20);

	//pp1 = &p1;
	//pp2 = &p2;
	//temp = *pp1;
	//*pp1 = *pp2;
	//*pp2 = temp;
	printf("p1: %d, &a: %d\n", p1, &a);
	printf("p2: %d, &b: %d\n", p2, &b);

	//과제: void 함수로 동적할당받기


}