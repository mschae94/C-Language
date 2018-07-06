#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()함수, strcpy()함수

void main()
{
	char szBuffer[128] = {0};//학생이름 임시저장
	int name_len = 0;
	char *pstudent_name; //학생이름 주소
	char **ppstudent;
	int count;
	int i=0;

	//printf("학생이름은?: ");
	//scanf("%s", &szBuffer[0]); //임시저장
	//name_len = strlen(szBuffer); //학생이름 길이를 잰다
	//
	//pstudent_name = (char*)malloc(name_len + 1); //길이만큼 동적할당 (+1?)
	//strcpy(pstudent_name, szBuffer); //저장
	//printf("%s\n", pstudent_name);

	//free(pstudent_name);//메모리해제
	//pstudent_name = NULL;

	//문제 1) 학생수를 입력하세요 (3명)
	//문제 2) 입력된 수만큼 학생을 입력하고 출력하세요
	//문제 3) 함수로 처리
	printf("학생수를 입력하세요: ");
	scanf("%d", &count);
	
	ppstudent = (char**)malloc(sizeof(int)*count);
	for(i=0; i<count; i++)
	{
		printf("학생이름은?: ");
	scanf("%s", &szBuffer[0]); //임시저장
	name_len = strlen(szBuffer); //학생이름 길이를 잰다
	
	pstudent_name = (char*)malloc(name_len + 1); //길이만큼 동적할당 (+1?)
	strcpy(pstudent_name, szBuffer); //저장
	printf("%s\n", pstudent_name);
	}
	for (i=0; i<count; i++)
	{
		printf("%s\n",ppstudent[i]);
	}
	free(ppstudent);//메모리해제
	
}
