# include <stdio.h>

//문제 1) 초를 입력받고 시분초를 계산해서 출력하세요 (숙제)
//3700, 1시간, 1 분, 40초 (힌트는 /, %)

void main()
{
	int temp; //쓰레기값이 들어간다.(오류를 일으킬수있다)
	int num1 = 0;
	int hour;
	int min;
	int sec;
	
	printf("초를 입력하세요: ");
	scanf("%d", &num1);
	hour = num1/3600;
	min = (num1%3600)/60;
	sec = num1%60;
	printf("%d 시, %d 분, %d 초", hour, min, sec);


}