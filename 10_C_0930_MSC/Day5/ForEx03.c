# include <stdio.h>
# include <stdlib.h> //랜덤함수
# include <time.h> //랜덤함수

void main()
{
	int randomNumber = 0;
	int i;
	srand(time(0)); //
	randomNumber = rand();
	printf("%d\n", randomNumber);

	//문제 1) 0~2까지 랜덤정수를 출력해보세요
	//문제 2) 2~5 까지 랜덤정수를 출력해보세요
	//문제 3) 숫자하나를 입력받으면 해당 구구단을 출력해보세요 (1~9)

	/*for (i =0; i < rand(); i= rand())
	
	{printf("%d\n", i);}*/

	for (i = 0; i < 10; i++)
	{
		if(i ==5)
		{
			break; //반복문을 중단시킨다.
		}
		printf("i: %d\n", i);
	}
	for (i=0; i <10; i++)
	{
		if(i % 2 ==0) // 짝수면
		{
			continue; //아래 내용을 실행시키지 않고 반복문을 재실행한다.
		}
		printf("i: %d\n", i);
	}

}