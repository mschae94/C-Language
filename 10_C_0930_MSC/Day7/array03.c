#include <stdio.h>

void main()
{
	int arrNum[6];
	int max;
	int min;
	int i;
	int j;
	int temp;

	//����1)���� 6���� �Է¹޽��ϴ�. ����:(�Է¹��� ���߿��� ������ �ϳ� �����ϼ���)
	//����2) max�� ���� ū����, min�� ���� �������� �����ϰ� ����غ�����
	for (j=0; j< 10; j++){
	for (i=0; i<6; i++)
	{	
		printf("���� �Է��ϼ���: ");
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