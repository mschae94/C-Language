# include <stdio.h>

void main()
{
	// 서식문자 (%d, %lf, %c, %s)
	double fnum;
	int num;
	printf("실수를 입력하세요: ");
	scanf("%lf", &fnum); //입력할떄는 &
	printf("%lf\n", fnum);
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	printf("%d\n", num);
	// 실수와 정수를 연산하면 실수로 바뀐다. (형변환)
	printf("%lf + %d = %lf\n", fnum, num, fnum + num); //(자동형변환)

	printf("%lf + %d = %d", fnum, num, (int)fnum + num); //(강제현변환)






}