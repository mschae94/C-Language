#include <stdio.h>
#include <stdlib.h> //malloc()
#include <string.h> // strlen() ,  strcpy()
struct StudentInfo{
	char * pName;
};
char** SetStudent()
{
	int studentNum; int i;char szBuffer[128];int nameLen = 0;
	char ** ppStudent = NULL;
	printf("학생 숫자는?");
	scanf("%d", &studentNum);
	ppStudent = (char**) malloc(studentNum * sizeof(int));
	for(i = 0; i < studentNum; i++)
	{
		printf("학생이름은?");
		scanf("%s" , szBuffer);
		//scanf("%s" , &szBuffer[0]);
		nameLen = strlen(szBuffer);
		ppStudent[i] = (char*)malloc(nameLen +1);
		strcpy(ppStudent[i] , szBuffer);
	}
	return ppStudent;
}
int afunc()
{
	int a;
	return a;
}
char** ppfunc()
{
	char** ppstudnet2;
	return ppstudnet2;
}
int main()
{
	char szBuffer[128];
	int nameLen = 0;
	char *pStudent = NULL;
	char**  ppStudent =NULL;
	char**  ppStudent2;
	int studentNum =0;
	int i =0;
	struct StudentInfo sinfo;
	struct StudentInfo* psinfo;	
	int b =0;
	int a =0;

	printf("학생 숫자는?");
	scanf("%d", &studentNum);
	psinfo = (struct StudentInfo*) malloc (sizeof(int)* studentNum);
	
	for( i =0 ;i < studentNum; i++)
	{
		printf("학생이름은?");
		scanf("%s" , szBuffer);
		nameLen = strlen(szBuffer);
		psinfo[i].pName = (char*) malloc(nameLen +1);
		strcpy(psinfo->pName , szBuffer);
		printf("메인: %s\n" , psinfo->pName);
	}


	return 0;
}