# include <stdio.h>

void funcvoid()
{
	int a = 300;
}

int add()
{
	int a = 200;
	return a;
}

void main()
{
	int a1;
	int *p1;
	int **pp1;

	/////////////////////////////////////////////////////////
	int funcnum;
	funcnum = add(); //void일때는 함수가 없어지지만 int를 사용할때는 add()가 리턴값으로 변한다 ex) add() == a
	//printf("funcvoid: %d\n", funcvoid()); //그래서 funcvoid()는 쓸수없다
	printf("add: %d\n", add());
	
	/////////////////////////////////////////////////////////
	a1 = 10;

	//문제 1) pp1 을 이용해서 a1의 값을 1000으로 바꿔보세요
	p1 = &a1;
	pp1 = &p1;
	**pp1 = 1000;
	printf("%d\n", a1);


}