# include <stdio.h>

void main()
{
	char c1;
	char name[20]; //������� 20�� (20bytes) �� �����, (����ڴ� 1byte, �ѱ۹��ڴ� 2bytes) 
	char address[20];
	char email[20];
	int num1[20]; // ������� 80bytes
	int num1;
	int salary;
	int dollar;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &c1);
	printf("���� �Է��ѹ���: %c\n" , c1);

	//���� 1) ��¥�� (�̸�, ����, �ּ�, �̸���)
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &name[0]); //�տ��� ���� ����
	printf("�̸���: %s\n", name);
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("����: %d\n", num1);
	printf("�ּҸ� �Է��ϼ���: ");
	scanf("%s", &address[0]);
	printf("�ּ�: %s \n", address);
	printf("�̸����� �Է��ϼ���: ");
	scanf("%s", &email[0]);
	printf("�̸���: %s\n", email);

	//���� 2) ������ �Է¹ް� ������ ���غ�����
	//���� 3) �޷��� �Է¹ް� ��ȭ�� ���غ����� (1 127: ȯ��)
	printf("������ �Է��ϼ���: ");
	scanf("%d", &salary);
	printf("�� ������: %d\n", salary*12);

	printf("�޷��� �Է��ϼ���: ");
	scanf("%d", &dollar);
	printf("��ȭ��: %d", 1127*dollar);
	
	
	


}