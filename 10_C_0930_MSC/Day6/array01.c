#include <stdio.h>

void main()
{
	//3000명의 학생의 성적(문제점)
	int studentScore1;
	// ....
	int studentScore30;
	//배열(array)
	// 1. 같은 자료형으로 선언된 변수들의 집합
	// 2. 메모리에 차례대로 할당.
	int numArray[3]; //명령 : 번호가붙은 int 자료형 3개를 만들어라
	// 1) int     : 자료형
	// 2) numArray  : 이름
	// 3) [3]   : 대괄호 , 원소의 갯수(크기)
	//반복문을 통해서 활용한다.
	int i;
	numArray[0] = 100;
	numArray[1] = 70;
	numArray[2] = 60;
	//numArray[3] = 1000;
	printf("%d , %d , %d\n" ,numArray[0],
		numArray[1],numArray[2]);

	for (i = 0; i < 3; i++)
	{
		printf("for문: %d\n" , numArray[i]);
	}
	

}