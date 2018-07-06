#include <stdio.h>

void main()
{
	int i;
	int x;
	int y;
	for(i=0; i<10; i++)
	{
		printf("반복\n");
		printf("i: %d\n", i);
	}
	//if문제: 숫자두개를 입력받고 다음과 같이 출력하세요
	//ex) 정수: (21, 5), 결과: 몫: 4, 나머지: 1
	//if 문제 2) 정수n을 입력 받아서 개월과 일수로 변환합니다
	//조건) 1개월은 무조건 30일입니다
	//ex) 정수: 100, 결과: 3개월 10일

	//printf("숫자를 입력하세요");
	//scanf("%d %d", &x,&y);
	//if (x/y 

	printf("숫자를 입력하세요: ");
	scanf("%d", &x);
	if (x > 30)
	{printf("%d개월 %d일 입니다", x/30, x%30);}
	else
	{printf("%d일입니다", x);}
	


	//문제 1)짝수만 출력해보세요 (0 포함)
	//문제 2) i 의 값을 다 더해보세요 (45)

	for (i=0; i < 10; i++)
	{
		printf("%d",i % 2);
	}
