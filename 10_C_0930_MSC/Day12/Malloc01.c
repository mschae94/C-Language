#include <stdio.h>
#include <stdlib.h>


int main()
{
	//int arr[10];
	int count;
	int *p1;
	//문제 1)
	printf("오늘 이벤트에 참가한 관객수는 몇명입니까?: ");
	scanf("%d", &count);

	//문제 2) 동적할당을 함수에서 해보세요
	//p1 = malloc(count* sizeof(int));
	p1[0] = 10;
	p1[1] = 20;
	
	printf("%d, %d\n", p1[0], p1[1]);

	//문제 3) 학생수를 입력받고
	//그수만큼 국어 영어 성적을 입력출력해보세요

	//문제 4) 문제 3번을 함수로 해보세요

	

	return 0;
}