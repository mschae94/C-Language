#include <stdio.h>
#include <stdlib.h> //malloc()
#include <string.h> // strlen() ,  strcpy()
char ** ppFunc(int studentCount)
{
	char ** ppS = NULL;

	return ppS;
}

int main()
{
	int studentCount =0;
	char** ppS = NULL;
	int i;
	printf("�л�������ΰ���?");
	scanf("%d" , &studentCount);
	ppS = ppFunc(studentCount);
	for(i = 0 ; i < studentCount; i++)
	{
		printf("%s\n" , ppS[i]);
	}
}