# include <stdio.h>

void main()
{
	int grade = 0;
	int score;
	printf("학년은?");
	scanf("%d", &grade);
	//1. switch		: 키워드
	//2. ()			: 값(상수, 정수) 0, 1, 2, 3, 4 ,5
	//3. {}			: 내용
	//4. (case 값:)	: 분기 조건
	//5. break;		: 종료
	//6. default	: else 와 똑같다 (그 밖에)
	switch(grade)
	{
		case 1:
			printf("1학년입니다\n");
			break;
		case 2:
			printf("2학년입니다\n");
			break;
		case 3:
			printf("3학년입니다\n");
			break;
		default:
			printf("모르겟다\n");
			break;
	}
	//문제 1) 성적을 입력받고 100점부터 10점 단위로 A, B, C, F 재시험 출력해보세요
	//문제 2) 심화(100~97: A+, 96~94: A, 93~90:A-)를 출력해보세요

	printf("성적을 입력하세요: ");
	scanf("%d", &score);
	if (score >= 90)
	{printf("성적: A");}
	else if (80 <= score && score < 90)
	{printf("성적: B");}
	else if (70 <= score && score < 80)
	{printf("성적: C");}
	else 
	{printf("성적: F");}

	
}