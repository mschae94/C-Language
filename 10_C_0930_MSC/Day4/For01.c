# include <stdio.h>
# include <time.h> //랜덤함수 사용시 필요
# include <stdlib.h> //랜덤함수 사용시 필요

void main()
{
	int i;
	int myNum;
	int comNum;
	//#. for문 (반복문)
	//1. for: 키워드
	//2. ()	: 조건
	//3. i = 0; i < 10; i ++
	//3.1. i = 0 저장
	//3.2. i < 10 비교 (결과: 참 or 거짓)
	//3.3. {} 실행
	//3.4. i++: i = i + 1;
	//4. {}
	//	   1)	   2)	  4)
	for (i = 0; i < 10; i ++)//10 번반복
	{
		//3)
		printf("반복\n");
	}
	//문제 1) 가위바위보 게임을 10판 할수있게 만들어보세요.
	//문제 2) 내가 이기면 게임이 끝나게 해보세요
	//문제 2.1) 내가 이길때까지 되게 해보세요
	//(숙제)
	//문제 3) 지하철요금이 얼마인지 계산해보세요.
	//[규칙] 기본: 0~5 : 600원, 6~10 : 700원
	//		 추가: 2 정거장 마다 50 원
	// ex) [입력] 13, [출력] 역수 13: 요금 800원
	//문제 4) 화페매수 입력: 65400, 출력: 5만원 1장, 1만원 1장, 5천원 1장, 1천원 0장, 5백원 0개, 100원 4개
	srand(time(0));
	
	for (i = 0; i < 10; i++)
	{	comNum = rand() % 3;
		printf("가위(0), 바위(1), 보(2) 를 입력하세요: ");
		scanf("%d",&myNum);
		if (myNum == 0)
			printf("나: 가위\n"); 
		if (myNum == 1)
			printf("나: 바위\n"); 
		if (myNum == 2)
			printf("나: 보\n"); 
		if (comNum == 0)
			printf("Com: 가위\n");
		if (comNum == 1)
			printf("Com: 바위\n");
		if (comNum == 2)
			printf("Com: 보\n");
		if (myNum == comNum)
	{	
		printf("비겼습니다\n");
	}
	if (myNum > comNum)
	{	
		printf("이겼습니다\n");
	}
	if (myNum < comNum)
	{	
		printf("졌습니다\n");
	}
	if (myNum <= -1 || myNum >= 3)
	{	
		printf("경고");
	}
	if (myNum > comNum)
	{
		i = 10;
		printf("종료");
	}
	}
}