#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()�Լ�, strcpy()�Լ�

void main()
{
	char szBuffer[128] = {0};//�л��̸� �ӽ�����
	int name_len = 0;
	char *pstudent_name; //�л��̸� �ּ�
	char **ppstudent;
	int count;
	int i=0;

	//printf("�л��̸���?: ");
	//scanf("%s", &szBuffer[0]); //�ӽ�����
	//name_len = strlen(szBuffer); //�л��̸� ���̸� ���
	//
	//pstudent_name = (char*)malloc(name_len + 1); //���̸�ŭ �����Ҵ� (+1?)
	//strcpy(pstudent_name, szBuffer); //����
	//printf("%s\n", pstudent_name);

	//free(pstudent_name);//�޸�����
	//pstudent_name = NULL;

	//���� 1) �л����� �Է��ϼ��� (3��)
	//���� 2) �Էµ� ����ŭ �л��� �Է��ϰ� ����ϼ���
	//���� 3) �Լ��� ó��
	printf("�л����� �Է��ϼ���: ");
	scanf("%d", &count);
	
	ppstudent = (char**)malloc(sizeof(int)*count);
	for(i=0; i<count; i++)
	{
		printf("�л��̸���?: ");
	scanf("%s", &szBuffer[0]); //�ӽ�����
	name_len = strlen(szBuffer); //�л��̸� ���̸� ���
	
	pstudent_name = (char*)malloc(name_len + 1); //���̸�ŭ �����Ҵ� (+1?)
	strcpy(pstudent_name, szBuffer); //����
	printf("%s\n", pstudent_name);
	}
	for (i=0; i<count; i++)
	{
		printf("%s\n",ppstudent[i]);
	}
	free(ppstudent);//�޸�����
	
}
