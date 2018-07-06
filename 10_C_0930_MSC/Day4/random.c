# include <stdio.h>
# include <time.h> //랜덤함수 사용시 필요
# include <stdlib.h> //랜덤함수 사용시 필요

void main()
{
	int ranNum1;
	int ranNum2;
	int myNum;
	int comNum;
	srand(time(0)); // 계속 다른수가 나오게 한다. 2~3만 사이로 나온다
	ranNum1 = rand(); //계속 똑같은 수만 나온다.
	printf("%d\n", ranNum1);

	ranNum2 = rand();
	printf("%d\n", ranNum2);

	ranNum1 = ranNum1 % 3; //랜덤숫자에서 3으로 나눈 나머지 값
	//printf("0~2이 나온다: %d\n", ranNum1);
	//문제 1) 가위바위보 완성!

	
	comNum = ranNum1 % 3; 
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
		printf("비겼습니다");
	}
	if (myNum > comNum)
	{	
		printf("이겼습니다");
	}
	if (myNum < comNum)
	{	
		printf("졌습니다");
	}
	if (myNum <= -1 || myNum >= 3)
	{	
		printf("경고");
	}
}

