#include <stdio.h>

void main()
{
	int arrNum[6];
	int max;
	int min;
	int i;
	int j;
	int temp;

	//문제1)값을 6개를 입력받습니다. 조건:(입력받은 값중에는 음수를 하나 저장하세요)
	//문제2) max에 가장 큰값을, min에 가장 작은값을 저장하고 출력해보세요
	for (j=0; j< 10; j++){
	for (i=0; i<6; i++)
	{	
		printf("값을 입력하세요: ");
		scanf("%d", &arrNum[6]);
	
	if (arrNum[i] < arrNum[i+1])
	{
		temp = arrNum[i]; 
		arrNum[i] = arrNum[i + 1];
		arrNum[i+1] = temp;
	}
	else if (arrNum[i] > arrNum[i+1])
	{
		continue;
	}
	}
	}
	printf("%d", arrNum[0]);
}