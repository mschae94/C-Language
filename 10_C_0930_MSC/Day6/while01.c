# include < stdio.h>

void main()
{
	//while 문 ( 반복문)
	//1. while : 키워드
	//2. (i < 10 ) : 조건 ( 조건이 참이면 {}실행)
	//3. {} : 내용
	int i = 0;
	while(i < 10)//for문을 쓴다.
	{
		printf("반복\n");
		i++; // i = i + 1 ;
		//      i--; // i = i - 1 ;
	}
	i = 0;
	//무한반복.
	while(1)  // 0 : 거짓 , 1 : 참
	{
		i++;
		printf("i : %d\n" , i);
		if( i > 10)
		{
			break; //반목문을 종료시킨다.
		}
	}
}