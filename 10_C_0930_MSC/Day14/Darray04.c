# include <stdio.h>

void funcvoid()
{
	int a = 300;
}

int add()
{
	int a = 200;
	return a;
}

void main()
{
	int a1;
	int *p1;
	int **pp1;

	/////////////////////////////////////////////////////////
	int funcnum;
	funcnum = add(); //void�϶��� �Լ��� ���������� int�� ����Ҷ��� add()�� ���ϰ����� ���Ѵ� ex) add() == a
	//printf("funcvoid: %d\n", funcvoid()); //�׷��� funcvoid()�� ��������
	printf("add: %d\n", add());
	
	/////////////////////////////////////////////////////////
	a1 = 10;

	//���� 1) pp1 �� �̿��ؼ� a1�� ���� 1000���� �ٲ㺸����
	p1 = &a1;
	pp1 = &p1;
	**pp1 = 1000;
	printf("%d\n", a1);


}