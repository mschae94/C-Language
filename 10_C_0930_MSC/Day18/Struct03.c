#include <stdio.h>
#include < stdlib.h>
struct Tinfo
{
	char name[20];
	int address[100];
	int age;
};
struct Binfo
{
	char name[20];
	int page;
};
struct Sinfo
{
	char name[20];
	int age;
	struct Tinfo teacher;
	struct Binfo* book;
};
int main()
{
	struct Sinfo students[3];
	struct Sinfo * pstudent;
	struct Sinfo student;
	struct Binfo book = {"c���" , 200};
	scanf("%s" , student.name);
	scanf("%d" , &student.age);	
	scanf("%s" , students[0].name);
	scanf("%d" , &students[0].age);
	scanf("%s" , students[0].teacher.name);
	scanf("%s" , students[0].teacher.address);
	scanf("%d" , &students[0].teacher.age);		
	scanf("%d" , &pstudent->age);  //�����ʹ� -> �� �����Ѵ�.	
	students[0].book = &book;
	students[1].book = &book;
	students[2].book = &book;
}