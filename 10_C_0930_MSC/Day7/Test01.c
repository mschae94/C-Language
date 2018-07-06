#include <stdio.h>

void main()
{
	int numArr[10] = {0};
	int numArr2[5] = {9,5,3,2,1};
	int numArr3[6] = {1,9};
	//int numArr4[2] = {10,9,4}; //에러 //배열원소이상저상할수없다
	int i=0;
	int sum=0;

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[1]);
	printf("%d\n", numArr[2]);
	printf("%d\n", numArr[3]);
	printf("%d\n", numArr[4]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[6]);
	printf("%d\n", numArr[7]);
	printf("%d\n", numArr[8]);
	printf("%d\n", numArr[9]);
	
	//문제1) 포문으로 출력해보세요
	for(i=0; i <11; i++)
	{
		printf("%d\n", numArr[i]); //i: 위치 ==> 인덱스
	}
	//문제2) numArr2의 값을 포문으로 출력해보세요
	//문제2-1) numArr2의 2번쨰 인덱스의 값을 3으로 바꿔보세요
	//문제2-2) numArr2의 모든값을더한 총합과 평균을 구해보세요
	//문제2-3) 인덱스하나를 입력받고 그곳의 값을 1000으로 바꿔보세요
	//ex) 입력: 2, 결과: {9,3,1000,2,1}

	for (i=0; i<6; i++)
	{
		if (i== 1)
		{
			numArr2[i] = 3;
		}
		printf("%d\n", numArr2[i]);
			
	}
	while (i < 5)
	{
		sum = sum + numArr2[i];
		i = i+1;
	}
	printf("%d\n", sum);

	for (i=0; i<7; i++)
	{
		printf("%d\n", numArr3[i]);
	}
	
	
	//문제3) numArr3의 값을 포문으로 출력해보세요
}