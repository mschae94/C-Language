# include <stdio.h>
# include <stdlib.h>

void main ()
{
	//���� 1) arr[5] = {0,1,2,3,4}
	//���� 2) ar[25] = {0~24}
	
	/* 
	0****
	*****
	*****
	*****
	*****
	*/
	// ���� 1�� ������ ���� �ö󰡰�
	// ���� 2�� ������ �Ʒ��� �������� ��������
	// ���� 3�� ������ �밢������ �������� ��������

	int arr[25];
	int i;
	int count;
	int* pi;
	int temp;
	int input;
	int index=0;

	printf("���ڸ��Է��ϼ���: ");
	scanf("%d", &count);
	pi = (int*)malloc(count*sizeof(int));


	for (i=0; i<count; i++)
	{
		pi[i] = i;
		printf("%d\t", pi[i]);
		if ((i + 1)% 5 ==0)
		{
			printf("\n");
		}
	}
	for(;;)
	{
	printf("����1~4�� �Է��ϼ���: ");
	scanf("%d", &input);
	if(input ==1)
	{
		temp = pi[index];
		pi[index] = pi[index -5];
		pi[index -5] = temp;
		index = index -5;
	}
	if(input ==2)
	{
		temp = pi[index];
		pi[index] = pi[index +5];
		pi[index + 5] = temp;
		index = index + 5;
	}
	if(input ==3)
	{
		temp = pi[index];
		pi[index] = pi[index +6];
		pi[index + 6] = temp;
		index = index + 6;
	}
	if(input ==4)
	{
		temp = pi[index];
		pi[index] = pi[index -6];
		pi[index -6] = temp;
		index = index -6;
	}
	for (i=0; i<count; i++)
	{
		printf("%d\t", pi[i]);
		if ((i + 1)% 5 ==0)
		{
			printf("\n");
		}
	}
	}
}