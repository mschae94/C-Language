#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[5] = {0};
	int count = 10;
	//int arr2[count]; --> c에서는 안된다
	int* pn1;
	double* pd1;
	char* pc1;

	malloc(40);
	//1. 헤더가 필요하다 <stdlib.h>
	//2. byte 를 계산해야된다.
	//3. 접근불가 (포인터를 사용해야된다)
	pn1 = (int *) malloc (40); //== int arr2[count]; 똑같은의미다
	pd1 = (double *) malloc (40);
	pc1 = (char *) malloc (40);

	printf("%d, %d\n", &pn1[0], &pn1[1], &pn1[2]);
	printf("%d, %d\n", &pd1[0], &pd1[1]);
	printf("%d, %d\n", &pc1[0], &pc1[1]);
	printf("int* size %d\n", sizeof(pn1));
	printf("int* size %d\n", sizeof(pd1));
	printf("int* size %d\n", sizeof(pc1));

}
