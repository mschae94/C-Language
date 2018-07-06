# include <stdio.h>

void main()
{
	int num1;
	int my_number;
	int com_number;
	num1 = 10;
	com_number = 1;
	// =: 저장
	//if문 (분기문)
	//1. if: 키워드
	//2. (): 조건
	//3. num1 == 10: 조건의 내용, == 같다
	//4. {}: 영역
	//조건의 종류:
	//1) !=: 다르다
	//2) <: 작다
	//3) >: 크다
	//4) <=: 작거나 같다
	//5) >=: 크거나 같다

	if(num1 == 10)
	{
		printf("%d 는 10 입니다\n", num1);
	}
	//문제1) 조건의 종류를 다 사용해보세요.
	if(num1 != 10)
	{
		printf("%d 는 10가 아닙니다\n", num1);
	}
	if(num1 < 10)
	{
		printf("%d 는 10 보다 작습니다\n", num1);
	}
	if(num1 > 10)
	{
		printf("%d 는 10보다 큽니다\n", num1);
	}
	if(num1 <= 10)
	{
		printf("%d 는 10보다 작거나 같습니다\n", num1);
	}
	if(num1 >= 10)
	{
		printf("%d 는 10보다 크거나 같습니다\n", num1);
	}
	//문제 2) 가위바위보게임을 만들어보세요
	//조건1) com_number는 항상 바위(1)입니다
	//조건2) -1, 3 입력했을때 경고메세지를 출력해보세요
	/*int my_number;
	int com_number = 1;
	printf("가위(0), 바위(1), 보(2) 를 입력하세요");*/

	printf("가위(0), 바위(1), 보(2) 를 입력하세요: \n");
	scanf("%d", &my_number);
	if(my_number < com_number)
	{
		printf("졌습니다");
	}
	if(my_number == com_number)
	{
		printf("비겼습니다");
	}
	if(my_number > com_number)
	{
		printf("이겼습니다");
	}
	if(my_number < 0)
	{
		printf("오류입니다");
	}
	if(my_number >= 3)
	{
		printf("오류입니다");
	}
}