# include < stdio.h>

void main()
{
	//while �� ( �ݺ���)
	//1. while : Ű����
	//2. (i < 10 ) : ���� ( ������ ���̸� {}����)
	//3. {} : ����
	int i = 0;
	while(i < 10)//for���� ����.
	{
		printf("�ݺ�\n");
		i++; // i = i + 1 ;
		//      i--; // i = i - 1 ;
	}
	i = 0;
	//���ѹݺ�.
	while(1)  // 0 : ���� , 1 : ��
	{
		i++;
		printf("i : %d\n" , i);
		if( i > 10)
		{
			break; //�ݸ��� �����Ų��.
		}
	}
}