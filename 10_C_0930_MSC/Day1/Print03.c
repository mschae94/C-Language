# include <stdio.h>

void main()
{
	// 서식문자
	// %d 정수 (소수점이없는수,integers, : 0, 1, -1)
	printf("홍길동의 나이는 %d 살 입니다",20);

	// %f 실수(소수점이있는수, natural number)
	printf("홍길동의 왼쪽눈의 시력은 %f 입니다", 1.2);

	//문제 2. 아래 내용을 출력해보세요. (서식문자 활용)
	//나이, 이름, 이메일, 전화번호 (가짜로)
	printf("나이는 %d세 입니다\n",24);
	printf("이름은 채명성 입니다\n");
	printf("이메일은 mschae%d@hotmail.com 입니다\n",52);
	printf("전화번호는 %d-%d-%d 입니다\n", 010, 2015, 1562);

	// 세미콜론 (;) 문장이 끝났음을 알린다.

}