# include <stdio.h>

void Swap(int a, int b)
{
	int temp;
	int *p1;
	int *p2;
	int **pp1;
	int **pp2;
	pp1 = &p1;
	pp2 = &p2;

	temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;


}

int main()

{
	int a = 10;
	int b = 20;
	int *p1 = NULL; //�ʱ�ȭ
	int *p2 = NULL;
	int temp;
	int **pp1 = NULL;
	int **pp2 = NULL;

	p1 = &a;
	p2 = &b;

	printf("p1: %d, &a: %d\n", p1, &a);
	printf("p2: %d, &b: %d\n", p2, &b);

	//���� 1) main���� p1���� b���ּ�, p2���� a�� �ּҸ� ��ƺ�����
	//���� 1.1) swap�Լ��ε� �������� 
	//���� 1.2) main()���� pp1�� pp2�� �̿��ؼ� p1���� b���ּ�, p2���� a�� �ּҸ� ��ƺ�����

	//temp = p1;
	//p1 = p2; 
	//p2 = temp;
	
	Swap(10, 20);

	//pp1 = &p1;
	//pp2 = &p2;
	//temp = *pp1;
	//*pp1 = *pp2;
	//*pp2 = temp;
	printf("p1: %d, &a: %d\n", p1, &a);
	printf("p2: %d, &b: %d\n", p2, &b);

	//����: void �Լ��� �����Ҵ�ޱ�


}