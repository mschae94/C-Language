#include <stdio.h>

void main ()
{
	//문제 6) 인덱스 2개를 입력받고 값을 서로 바꿔보세요
// ex) 입력 : 1 , 2  결과 : 10 , 30 , 20 , 40 , 60 

//문제 7) max 와 min 을 출력해보세요.
// ex ) 결과 : max : 60 , min : 10  
//c언어 최종목표 : 성적관리 프로그램 + 오목
	int arr[5] = {10, 20, 30, 40, 60};
	int indexNum1, indexNum2;
	int temp;
	int i;
	int max, min;

	printf("(0-4)인덱스 2개를 선택해주세요");
	scanf("%d %d",&indexNum1, &indexNum2);
	temp = arr[indexNum1];
	arr[indexNum1]=arr[indexNum2];
	arr[indexNum2] = temp;
	max = arr[0];
	min = arr[0];
	for (i=0; i<5; i++)
	{
		if (max < arr[i]){
			max = arr[i];
		}
		if (min > arr[i]){
			min = arr[i];
		}
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	printf("max: %d, min: %d\n", max, min);
	//문제 8) 랜덤함수도 이용해서 arr[10,20,30,40,50,60,70] 안에 값들을 섞어보세요
	//ex) 20, 10, 30, 70, 50, 60, 30
}