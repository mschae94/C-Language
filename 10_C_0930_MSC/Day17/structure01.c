#include <stdio.h>
#include <string.h>

//����ü: ����� ���� �ڷ���
// 1. struct : Ű����
// 2. Student: �̸�
// 3.{}		 : ����	
// 4.;		 : ���� ����

//����: 1) �ڷ��� + �̸� + ; ex) �ڷ��� (struct Student) + �̸�(student1) + ;
//		  2) . (dot)���� ���� ex) student1.eng

struct Student{
	int kor;
	int math;
	int eng;
	char name[20];
	struct Person personInfo;
};
struct Person{
	char name[20];
	int age;
	char address[100];
};
void main()
{
	//1. ����
	//2. �迭
	//3. �����Ҵ�
	struct Student student1;

	student1.kor = 100;
	student1.math = 200;
	student1.eng = 300;
	strcpy(student1.name,"��ö��");
	strcpy(student1.personInfo.name,"��ö��");
	//����1) �л��Ѹ� �ϼ��غ�����
	
}