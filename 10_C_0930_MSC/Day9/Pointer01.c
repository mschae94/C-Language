# include <stdio.h>

void main()
{ 
	int num1=0; //일반 변수의 모습 (num1, &num1)
	int num2=0;
	int *p1; //포인터 변수: 메모리 주소를 저장하는 변수

	printf("num1: %d\n", num1);
	printf("&num1: %d\n", &num1);

	p1 = &num1; //(p1, *p1, &p1)
	num2 = &num1; //이 변수도 되기는한다

	printf("%d\n", num2);
	printf("p1: %d\n", p1);
	printf("p1: %d\n", *p1);
	
	//num1 == *p1
	//&num1 == p1
	*p1 = 200;
	
	printf("num1: %d\n", num1);

}