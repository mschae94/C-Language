# include <stdio.h>

void main()
{
	char c1;
	char name[20]; //저장공간 20개 (20bytes) 를 만든다, (영어문자는 1byte, 한글문자는 2bytes) 
	char address[20];
	char email[20];
	int num1[20]; // 저장공간 80bytes
	int num1;
	int salary;
	int dollar;
	printf("문자를 입력하세요: ");
	scanf("%c", &c1);
	printf("내가 입력한문자: %c\n" , c1);

	//문제 1) 가짜로 (이름, 나이, 주소, 이메일)
	printf("이름을 입력하세요: ");
	scanf("%s", &name[0]); //앞에서 부터 저장
	printf("이름은: %s\n", name);
	printf("나이를 입력하세요: ");
	scanf("%d", &num1);
	printf("나이: %d\n", num1);
	printf("주소를 입력하세요: ");
	scanf("%s", &address[0]);
	printf("주소: %s \n", address);
	printf("이메일을 입력하세요: ");
	scanf("%s", &email[0]);
	printf("이메일: %s\n", email);

	//문제 2) 월급을 입력받고 연봉을 구해보세요
	//문제 3) 달러를 입력받고 원화를 구해보세요 (1 127: 환율)
	printf("월급을 입력하세요: ");
	scanf("%d", &salary);
	printf("내 연봉은: %d\n", salary*12);

	printf("달러를 입력하세요: ");
	scanf("%d", &dollar);
	printf("원화는: %d", 1127*dollar);
	
	
	


}