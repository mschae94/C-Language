# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void main()
{
	int random;
	int comNum;
	int myNum;
	srand(time(0));
	random = rand();
	//문제 1) comNum 을 (0~100) 사이의 숫자를 저장한다
	//myNum의 숫자를 하나 입력받는다.
	//myNum과 comNum을 비교해서 크다 작다를 출력한다.
	//맞출때까지 반복한다.
	//문제 2) 가위바위보 게임을 switch 문으로 해본다.
	
	printf("%d", random);

	comNum = rand() % 100;
}