# include <stdio.h>

void main()
{
	//카멜식
	int myNum;
	int comNum;
	int num1;
	int num2;
	comNum = 1;
	printf("가위(0), 바위(1), 보(2) 를 입력하세요: ");
	scanf("%d",&myNum);
	// 한문장은 중괄호가 없어도 작동한다. e.g) if (myNum == comNum) print("비겼습니다");
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
	//문제 1) 초를 입력받고 시분초를 계산해서 출력하세요 (숙제)
	// 3700, 1시간 1분 40초 (힌트는 / , %)

	int second;
	
	printf("초를 입력하세요: ");
	scanf("%d", &second);
	
	if (second/60 > 0)
	{
		printf("%d 분 입니다", );
	}
	//2. 정수 두개를 입력받고 나눈 결과 출력, 
	//2.1 둘중에 하나라도 0이면"0으로 나눌수없습니다 출력

	if (num1 ==0 || num2 == 0)
	{
		printf("0으로 나눌수없습니다");
	}
	else 
	{
		printf("%d/%d = %d\n", num1, num2 ,num1/num2);
	}

	//5. 정수1개를 입력받고 짝수 홀수 출력 (나머지 활용 %)
	if (num1 % 2 == 0)
	{
		printf("짝수");
	}
	if (num1 % 2 == 1)
	{
		printf("홀수");
	}

}