# include <stdio.h>

void main()
{ 
	int num1=0; //�Ϲ� ������ ��� (num1, &num1)
	int num2=0;
	int *p1; //������ ����: �޸� �ּҸ� �����ϴ� ����

	printf("num1: %d\n", num1);
	printf("&num1: %d\n", &num1);

	p1 = &num1; //(p1, *p1, &p1)
	num2 = &num1; //�� ������ �Ǳ���Ѵ�

	printf("%d\n", num2);
	printf("p1: %d\n", p1);
	printf("p1: %d\n", *p1);
	
	//num1 == *p1
	//&num1 == p1
	*p1 = 200;
	
	printf("num1: %d\n", num1);

}