#include <stdio.h>
#include <stdlib.h> //malloc 함수

int* Malloc(int count)
{
	
	int *p1;
	p1 = (int*)malloc(count*4);
	return p1;
}
void main()
{
	int count;
	int *p1;
	int i;
	int eng;
	int kor;
	//문제 3) 학생수를 입력받고 그수만큼 국어 영어 성적을 입력출력해보세요
	printf("학생수: ");
	scanf("%d", &count);
	Malloc(count);
	p1 = (int*)Malloc(count);

	for(i=0; i< count; i++)
	{
		printf("영어 성적은: ");
		scanf("%d", &eng);
		printf("국어 성적은: ");
		scanf("%d", &kor);
		p1[i] = i;
		printf("%d\n", p1[i]);
	}
}