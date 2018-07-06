#include <stdio.h>
#include <stdlib.h>

struct St
{
	int a;
	int b;
	int c;
	int d;
	double e;
	char i;
	int arr[20];
};

int add(int a)
{
	return a;
}
int *pAdd(int* a)
{
	return a;
}
struct St funcSt(struct St st)
{
	return st;
}
struct St* pfuncSt(struct St* st)
{
	return st;
}

int main()
{
	int * p;
	int n;

	char *pc;
	char c;

	double *pd;
	double d;
	
	struct St *pst;
	struct St st;

	printf("p사이즈:%d\n", sizeof(p));
	printf("n사이즈:%d\n", sizeof(n));

	printf("pc사이즈:%d\n", sizeof(pc));
	printf("c사이즈:%d\n", sizeof(c));

	printf("pd사이즈:%d\n", sizeof(pd));
	printf("d사이즈:%d\n", sizeof(d));

	p = (int *)malloc(100);
	printf("p[0]:%d\n", &p[0]);
	printf("p[1]:%d\n", &p[1]);
	printf("p[2]:%d\n", &p[2]);


	pc = (char*)malloc(100);
	printf("pc[0]:%d\n", &pc[0]);
	printf("pc[1]:%d\n", &pc[1]);
	printf("pc[2]:%d\n", &pc[2]);

	pd = (double *)malloc(100);


	printf("pst사이즈: %d\n", sizeof(pst));
	printf("st사이즈: %d\n", sizeof(st));
	pst = malloc(2000);
	printf("pst[0]:%d\n", &pst[0]);
	printf("pst[1]:%d\n", &pst[1]);
	

	return 0;
}
