# include <stdio.h>

void main()
{
	int a = 10;
	int *p1;
	int **pp1;

	p1 = &a;
	pp1 = &p1;

	//���� 1) �������� ��󺸼���
	/*
	1. a == 
	2. &a ==  
	3. p1 == 
	4. *p1 ==
	5. &p1 ==
	6. pp1 ==
	7. *pp1 ==
	8. **pp1 ==
	*/
	printf("���� ���: %d, %d, %d\n", a, *p1, **pp1);
	printf("���� ���: %d, %d, %d\n", &a, p1, *pp1);
	printf("���� ���: %d, %d, %d\n", p1, &a, *pp1);
	printf("���� ���: %d, %d\n", &p1, pp1);
	printf("���� ���: %d, %d\n", pp1, &p1);
	printf("���� ���: %d, %d, %d\n", *pp1, p1, &a);
	printf("���� ���: %d, %d, %d\n", **pp1, *p1,a);

}