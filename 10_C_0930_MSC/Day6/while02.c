#include < stdio.h>

void main()
{
	//코리아은행 (while)
	// #입금 , 출금 , 잔액조회 , 종료 
	// 번호를 입력해주세요
	// 1) 입금 , 2) 출금 , 3) 잔액조회 , 4) 종료
	// 입력: 1
	// 얼마를 입금하시겠습니까?
	// 입력: 1000
	// 1000원이 입력되었습니다.
	// 번호를 입력해주세요
	// 1) 입금 , 2) 출금 , 3) 잔액조회 , 4) 종료
	// 2) 출금 , (조건) 잔액보다 출금액이 많으면 
	//           잔액이 부족합니다.
	//if먼저만들고 , 그담에 반복
	//for문으로 만든거 while 로만들기
	//숙제 ) 비밀번호 만들기
	int number=0;
	int money=0;
	int saving = 0;
	while(1)
	{
		printf("번호를 입력해주세요");
		scanf("%d" , &number);
		if(number == 1 )
		{
			printf("얼마를 입금하시겠습니까?");
			scanf("%d" , &saving);
			money = money + saving;
		}	
	}
}