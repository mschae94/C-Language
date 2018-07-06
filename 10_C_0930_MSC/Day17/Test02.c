#include <stdio.h>
#include <stdlib.h>

void main()
{
	//1) 학생수를 입력받고
	//2) 수학성적, 영어성적, 총합, 평균을 저장 출력해보세요
	//2.1) 이름 추가
	//3) 함수로
	//4) int형 2차원동적배열을 만들고 값을 입력후 큰값 작은 값을 구해보세요
	//4.1
	int count;
	int total;
	int avr;
	int i =0;
	int * pKor;
	int * pMath;
	int * pEng;
	int **ppName;

	printf("학생수를 입력해주세요: ");
	scanf("%d", &count);

	for(i = 0; i<count; i++)
	{
		printf("수학성적은?: ");
		scanf("%d", &pMath);
		printf("영어 성적은?: ");
		scanf("%d", &pEng);
		total = pMath + pEng;
		avr = total/2;
		printf("수학정석: %d, 영어성적: %d, 총합: %d, 평균: %d", pMath, pEng, total, avr);
	}
}