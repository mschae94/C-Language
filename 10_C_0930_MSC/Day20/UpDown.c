#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //sleep
#include <time.h>

int main()
{
	//쉬운 AI
	//문제 2) 업다운게임 //int comnum, int p1
	//		  comnum은 0~99까지 랜덤정수를 입력받는다.
	//		  p1도 0~99까지 랜덤정수를 입력받는다. comnum과 p1을 비교해서 같다 작다 크다 를 출력
	//		  (조건) comnum의 숫자에 도달할수있도록 프로그랭밍해보세요int num =0;
	
	
	int comnum;
	int p1;
	srand(time(0));

	comnum = rand()%100;
	printf("comnum: %d\n", comnum);
	p1 = rand()%100;
	printf("p1: %d\n", p1);
	//무한반복
	while(1){
		//system("cls"); //화면을 지운다.
		//p1 = rand()%100;
		//printf("p1: %d\n", p1);

		if(comnum > p1) 
		{	
			printf("comnum이 크다 ");
			rand()%comnum;
		}
		else if (comnum < p1) printf("comnum이 작다 ");
		else {break;}

		Sleep(1000); //1초간 잠든다
	}
	printf("같다");
}