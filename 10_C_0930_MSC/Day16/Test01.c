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
	printf("���ڸ� �Է��ϼ��� (0~9): " );
	scanf("%d %d %d" , &myNum[0]  , &myNum[1] , &myNum[2]);
	printf("%d\t%d\t%d\n" , myNum[0] , myNum[1] , myNum[2]);
	//���� 1) comNum�� �������� 3���� �־����.
	// myNum�� 0~9���� ���� 3���� �Է¹޽��ϴ�.
	// comNum �� myNum �� ���ڸ� ���մϴ�. (�ݺ�)
	// ���ڿ� �ڸ��� ������ ��Ʈ����ũ , ���ڸ� ������ �� �� ����մϴ�.
	// ex)  comNum[] = {0 7 3} , myNum[] = {7 0 3}  , ��� : 1s 2b 
	// 3��Ʈ����ũ�� ��������. 
	// arr[5] = {10,20,30,40,50} ����1) �ε����� �Է��ϸ� ��������غ�����. ����2) �����Է��ϸ� �ε��������.

}