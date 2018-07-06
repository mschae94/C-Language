#include <stdio.h>
#include < stdlib.h> //malloc
int** ddmalloc(int row , int col)
{
	int ** pp;
	int i;
	pp = (int**)malloc(4 * row);
	for(i = 0; i < row; i++)
	{
		pp[i] = (int*)malloc(4*col);
	}		
	return pp;
}
void main()
{
	int a;
	double b;
	int c;
	a = c;
	int** pp;
	int col = 4;
	int row = 3;
	pp = ddmalloc(row  , col );
	pp[0][0] = 10;
	printf("%d\n" , pp[0][0]);
}