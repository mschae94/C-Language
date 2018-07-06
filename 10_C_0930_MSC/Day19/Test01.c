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
	//���� 1) �л��������� ���α׷��� ��������
	//ex) ��ö��, 10, 20, 30, 15...
	//	  ��μ�, 20, 40, 60, 30...

	char ** stName;
	int * korScore;
	int * mathScore;
	int studentNum;
	struct StInfo* stinfo;
	int i=0;
	char szBuffer[128];
	int nameLen = 0;

	//���� 2) �Լ��� �л��������� ���α׷��� ��������
	printf("�л� ���ڴ�?: ");
	scanf("%d", &studentNum);
	stinfo = (struct StInfo *)malloc(sizeof(int)*studentNum);

	for (i=0; i<studentNum; i++)
	{
		printf("�л��̸���?");
		scanf("%s" , szBuffer);
		nameLen = strlen(szBuffer);
		stinfo[i].stName = (char*) malloc(nameLen +1);
		strcpy(stinfo->stName , szBuffer);
		printf("���м�����?: ");
		scanf("%d", &stinfo->mathScore);
		printf("�������?: ");
		scanf("%d", &stinfo->engScore);
		printf("�������?: ");
		scanf("%d", &stinfo->korScore);
		stinfo[i].total = stinfo[i].korScore + stinfo[i].engScore + stinfo[i].mathScore;
		stinfo[i].avg = ((double)stinfo[i].total)/3;
		printf("����: %s\n" , stinfo->stName);
		printf("����: %d\n", stinfo->mathScore);
		printf("����: %d\n", stinfo->engScore);
		printf("����: %d\n", stinfo->korScore);
		printf("����: %d\n", stinfo->total);
		printf("���: %lf\n", (double)stinfo->avg);
	}
	
	

	return 0;
}