#include <stdio.h>
void main()
{
	//문제 3) 지하철요금이 얼마인지 계산해보세요;
	//[규칙] 기본 : 0~5 : 600원 , 6~10 : 700원;
	//       추가 : 2정거장 마다 50원
	//ex) 입력: 13  , 출력: 요금 800원
	//     14 , 800
	//     15 , 850	
	int sCount;
	int pay;
	printf("지하철역수를 입력하세요 ");
	scanf("%d" , &sCount);
	if(sCount <=5)
	{
		pay = 600;
	}
	else if(sCount <=10)
	{
		pay = 700;
	}
	else
	{
		pay = 700 + ((sCount-9)/2) * 50;
	}
	printf("역수는 : %d ,요금은: %d " ,sCount, pay);
}