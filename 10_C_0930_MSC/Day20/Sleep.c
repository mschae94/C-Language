#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //sleep
#include <time.h>

int main()
{
	int num =0;
	srand(time(0));
	//무한반복
	while(1){
		system("cls"); //화면을 지운다.
		
		num+=1;
		printf("%d\n", num);

		Sleep(1000); //1초간 잠든다
	}
	//(쉬운 ai)
	//문제1) 베스킨라빈스 31게임 //int p1, p2, count
	//		 p1 p2 둘다 1~3까지 랜덤정수를 입력받고 count가 31을 넘을때까지 반복해보세요

	//문제 2) 업다운게임 //int comnum, int p1
	//		  comnum은 0~99까지 랜덤정수를 입력받는다.
	//		  p1도 0~99까지 랜덤정수를 입력받는다. comnum과 p1을 비교해서 같다 작다 크다 를 출력
	//		  (조건) comnum의 숫자에 도달할수있도록 프로그랭밍해보세요
	//문제 3) 


}