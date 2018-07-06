# include <stdio.h>

void main()
{
	int temp;
	printf("온도를 입력하세요: ");
	scanf("%d", &temp);
	// 4분기중에서 무조건 1개만 실행된다.
	if (temp >100)
	{
		printf("온도는 100도 보다 크다");
	}
	else if (temp < 100 && temp >50)
	{
		printf("온도는 50도 보다 크고 100도 보다는 작다");
	}
	else if (temp < 50 && temp >0)
	{
		printf("온도는 0도 보다크고 50도 보다는 작다");
	}
	else
	{
		printf("온도는 0보다 작다");
	}

}