# include <stdio.h>
# include <stdlib.h> //�����Լ�
# include <time.h> //�����Լ�

void main()
{
	int randomNumber = 0;
	int i;
	srand(time(0)); //
	randomNumber = rand();
	printf("%d\n", randomNumber);

	//���� 1) 0~2���� ���������� ����غ�����
	//���� 2) 2~5 ���� ���������� ����غ�����
	//���� 3) �����ϳ��� �Է¹����� �ش� �������� ����غ����� (1~9)

	/*for (i =0; i < rand(); i= rand())
	
	{printf("%d\n", i);}*/

	for (i = 0; i < 10; i++)
	{
		if(i ==5)
		{
			break; //�ݺ����� �ߴܽ�Ų��.
		}
		printf("i: %d\n", i);
	}
	for (i=0; i <10; i++)
	{
		if(i % 2 ==0) // ¦����
		{
			continue; //�Ʒ� ������ �����Ű�� �ʰ� �ݺ����� ������Ѵ�.
		}
		printf("i: %d\n", i);
	}

}