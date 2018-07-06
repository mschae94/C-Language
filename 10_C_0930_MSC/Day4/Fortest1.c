# include <stdio.h>
# include <time.h> //랜덤함수 사용시 필요
# include <stdlib.h> //랜덤함수 사용시 필요

void main()
{
	//문제 1) 가위바위보 게임을 10판 할수있게 만들어보세요.
	//문제 2.1) 내가 이길때까지 되게 해보세요
	int i;
	int myNum;
	int comNum;

	srand(time(0));
	for (i = 0; i < 1; i)
	{	
		comNum = rand() % 3;
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
		i = i + 1;
		printf("종료");
	}
}
}