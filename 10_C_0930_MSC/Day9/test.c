#include <stdio.h>
// &: �ּҿ�����
void main()
{
	//���� 1) num2 ,num3 ������ ����������� ����غ�����
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int arr[5] = {0}; //��� 0���� �ʱ�ȭ
	int i;
	printf("num1: %d\n", num1); //�� ���
	printf("num2: %d\n", num2);
	printf("num3: %d\n", num3);
	//scanf("%d\n", &num1);
	printf("&num1: %d\n", &num1); //�ּ� ���
	printf("&num2: %d\n", &num2);
	printf("&num3: %d\n", &num3);

	//���� 2) 5��¥�� int �迭�� ���� ����������� ����غ�����
	for(i=0; i<5; i++)
	{
		printf("arr[i]: %d\n", arr[i]);
		printf("&arr[i]: %d\n", &arr[i]);
	}
	//�ּҸ� �� �˾ƾߵǴ°�??

	
	

}