#include <stdio.h>
#include <string.h>

//구조체: 사용자 정의 자료형
// 1. struct : 키워드
// 2. Student: 이름
// 3.{}		 : 영역	
// 4.;		 : 정의 종료

//사용법: 1) 자료형 + 이름 + ; ex) 자료형 (struct Student) + 이름(student1) + ;
//		  2) . (dot)으로 접근 ex) student1.eng

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
	//1. 변수
	//2. 배열
	//3. 동적할당
	struct Student student1;

	student1.kor = 100;
	student1.math = 200;
	student1.eng = 300;
	strcpy(student1.name,"김철수");
	strcpy(student1.personInfo.name,"김철수");
	//문제1) 학생한명 완성해보세요
	
}