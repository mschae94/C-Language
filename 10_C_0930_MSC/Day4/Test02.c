# include <stdio.h>

void main()
{
	//문제 3) 지하철요금이 얼마인지 계산해보세요.
	//[규칙] 기본: 0~5 : 600원, 6~10 : 700원
	//		 추가: 2 정거장 마다 50 원
	// ex) [입력] 13, [출력] 역수 13: 요금 800원

	int i;
	int plat;
	int plat1;

	for (i = 0; i > 10; i++)
	{
		printf("정거장수: ");
		scanf("%d", &plat);
		if (0 <= plat <= 5)
		{	
			printf("요금: 500원");
		}
		if (6 <= plat <= 10)
		{	
			printf("요금: 700원");
		}
		if (0 <= plat <= 5)
		{	
			printf("요금: 500원");
		}
	}

}