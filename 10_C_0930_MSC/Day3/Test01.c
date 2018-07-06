# include <stdio.h>

void main()
{
	int num1;
	printf("정수를 입력하세요\n");
	scanf("%d ", &num1);
	printf("내가 입력한수: %d", num1);

	//문제 1) 정수 2개를 한번에 입력받고 출력해보세요
	int num2;
	printf("정수를 입력하세요\n");
	scanf("%d%d", &num1, &num2);
	// 주의 (""사이에 (,)(\n) 등등을 쓰면 안된다
	printf("내가 입력한수: %d, %d", num1, num2);
	// 에러 LNK1169: 여러번정의된 기호가 있습니다.
	// main() 함수가 여러개이다
	// 에러 LNK1123: 링커오류




}