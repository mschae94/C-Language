#include < stdio.h>
void main()
{
	//문제4) 화폐매수 입력:65400 ,  출력 : 
	//       5만원 1장 , 1만원 1장 ,오천원1장
	//      천원 0장 , 500원 0개 , 100원 4개 
	int money;
	//million
	int fMil;
	int mil;
	//thousand
	int fTho;
	int tho;
	//hundred
	int fHun;
	int hun;
	printf("출금할금액을 적어주세요:");
	scanf("%d" , &money);
	fMil = money /50000;
	mil = (money % 50000) / 10000;
	fTho = (money % 10000) / 5000;
	tho = (money % 5000) / 1000;
	fHun = (money % 1000) / 500;
	hun = (money % 500)  /100;

	

}