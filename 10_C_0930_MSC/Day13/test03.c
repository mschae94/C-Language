#include <stdio.h>
#include <stdlib.h>

void main()
{
		//��ȭ����) ���� 2�� �Է¹����� �迭ù��° ���� ���������� �̵��ϰ� �غ�����
	// arr[5] = {0, 1, 2, 3, 4}
	// ���ڸ� �Է��ϼ��� 2
	int arr[5];
	int *p;
	int input;
	int temp;
	int index = 0;
	int i;
	p = (int *) malloc(20);
	
		for (i=0; i< 5; i++)
	{
		p[i] = i;
		printf("%d ,", p[i]);
	}
	printf("\n");
	for(;;) //���ѹݺ�
	{	
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &input);

	if(input ==2)
	{
		temp = p[index];
		p[index] = p[index +1];
		p[index + 1] = temp;
		index = index + 1;
	}
	if(input ==1)
	{
		temp = p[index];
		p[index] = p[index -1];
		p[index - 1] = temp;
		index = index - 1;
	}
	for (i=0; i< 5; i++)
	{
		printf("%d ,", p[i]);
	}
	printf("\n");
	}
}