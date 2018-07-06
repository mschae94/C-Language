# include <stdio.h>

void main()
{
	//산술연산자
	int num1;
	int num2;
	int num3;
	int len;
	int wid;
	num3 = 10;
	printf("%d\n", num3);
	printf("%lf\n", (double)num3);
	// 자료형: int, float, char, double
	// &num1: 주소
	//printf("주소: %d", &num1); //메모리 주소 (실제 메모리 주소는 %x)
	printf("정수를 입력하세요: ");
	//scanf("%d", &num1); //shift + 7
	//scanf("%d, %d",%num1, %num2); // 틀린예
	//scanf("%d %d", %num1, %num2); //값 두개 저장
	//printf("num1: %d\n", num1);

	// 문제 1) 더하기, 뺴기, 곱하기, 나누기를
	// scanf를 사용해서 출력해보세요
	
	printf("정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	// 형변환 (정수를 실수로, 실수를 정수로) use of (double)
	// 실수와 정수가 연산을 하면 실수로 처리된다.
	// 서식문자 %lf : double
	printf("%lf\n", (double)num1 / num2); //정수를 실수로
	printf("%.1lf\n", (double)num1 / num2); //정수를 실수로 한자리 소수점
	//나머지
	printf("나머지: %d\n", num1%num2); //나머지는 반드시 정수만 가능하다

	// 문제 2) 값을 3개를 저장하고 그합과 평균을 출력해보세요
	//			(조건) 평균은 소수점 2자리까지

	printf("정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n", num1 + num2 + num3);
	printf("%.2lf\n", (double)(num1 + num2 + num3)/3);

	//문제 3) 가로세로를 입력받고 삼각형의 넓이를 구해보세요
	printf("가로를 입력하세요: ");
	scanf("%d", &len);
	printf("세로를 입력하세요: ");
	scanf("%d", &wid);
	printf("%lf\n", (double)(len * wid)/2);

}