# include <stdio.h>

void main()
{

	int my_number;
	int com_number;
	com_number = 1;

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