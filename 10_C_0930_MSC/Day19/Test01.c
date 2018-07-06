#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //strlenm strocpy

struct StInfo
{
	char * stName;
	int korScore;
	int mathScore;
	int engScore;
	int total;
	double avg;
};
int main ()
{
	//문제 1) 학생성적관리 프로그램을 만들어보세요
	//ex) 김철수, 10, 20, 30, 15...
	//	  김민수, 20, 40, 60, 30...

	char ** stName;
	int * korScore;
	int * mathScore;
	int studentNum;
	struct StInfo* stinfo;
	int i=0;
	char szBuffer[128];
	int nameLen = 0;

	//문제 2) 함수로 학생성적관리 프로그램을 만들어보세요
	printf("학생 숫자는?: ");
	scanf("%d", &studentNum);
	stinfo = (struct StInfo *)malloc(sizeof(int)*studentNum);

	for (i=0; i<studentNum; i++)
	{
		printf("학생이름은?");
		scanf("%s" , szBuffer);
		nameLen = strlen(szBuffer);
		stinfo[i].stName = (char*) malloc(nameLen +1);
		strcpy(stinfo->stName , szBuffer);
		printf("수학성적은?: ");
		scanf("%d", &stinfo->mathScore);
		printf("영어성적은?: ");
		scanf("%d", &stinfo->engScore);
		printf("국어성적은?: ");
		scanf("%d", &stinfo->korScore);
		stinfo[i].total = stinfo[i].korScore + stinfo[i].engScore + stinfo[i].mathScore;
		stinfo[i].avg = ((double)stinfo[i].total)/3;
		printf("메인: %s\n" , stinfo->stName);
		printf("수학: %d\n", stinfo->mathScore);
		printf("영어: %d\n", stinfo->engScore);
		printf("국어: %d\n", stinfo->korScore);
		printf("총합: %d\n", stinfo->total);
		printf("평균: %lf\n", (double)stinfo->avg);
	}
	
	

	return 0;
}