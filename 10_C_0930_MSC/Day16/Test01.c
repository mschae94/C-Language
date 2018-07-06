#include <stdio.h>
#include <time.h>
#include < stdlib.h>
void main(){
	int myNum[3];int comNum[3];int num[10];int i;int index;int temp;
	srand(time(NULL));
	for(i = 0; i < 10;i++){
		num[i] = i;}
	for( i =0; i < 100;i++){
		index = rand()%10;
		temp = num[index];
		num[index] = num[0];
		num[0] = temp;}
	for(i = 0; i < 10;i++){
		printf("%d\t\n" , num[i]);}
	comNum[0] = num[0];
	comNum[1] = num[1];
	comNum[2] = num[2];
	printf("%d\t%d\t%d\n" , comNum[0] , comNum[1] , comNum[2]);
	printf("숫자를 입력하세요 (0~9): " );
	scanf("%d %d %d" , &myNum[0]  , &myNum[1] , &myNum[2]);
	printf("%d\t%d\t%d\n" , myNum[0] , myNum[1] , myNum[2]);
	//문제 1) comNum에 랜덤숫자 3개를 넣어보세요.
	// myNum에 0~9까지 숫자 3개를 입력받습니다.
	// comNum 과 myNum 의 숫자를 비교합니다. (반복)
	// 숫자와 자리가 같으면 스트라이크 , 숫자만 같으면 볼 을 출력합니다.
	// ex)  comNum[] = {0 7 3} , myNum[] = {7 0 3}  , 결과 : 1s 2b 
	// 3스트라이크면 게임종료. 
	// arr[5] = {10,20,30,40,50} 문제1) 인덱스를 입력하면 값을출력해보세요. 문제2) 값을입력하면 인덱스를출력.

}