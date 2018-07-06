#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, p1, p2, count;
	srand(time(0));
	for (i=0; i<10; i++)
	{
		p1 = rand()%3 + 1;
		p2 = rand()%3 + 1;
		count = p1 + p2;
		if (count > 31)
		{

		}
		printf("%d, %d, %d\n", p1, p2, count);
	}
}

//(쉬운 ai)
	//문제1) 베스킨라빈스 31게임 //int p1, p2, count
	//		 p1 p2 둘다 1~3까지 랜덤정수를 입력받고 count가 31을 넘을때까지 반복해보세요
