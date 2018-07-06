# include <stdio.h>
# include <stdlib.h> //malloc

void main()
{
	int dArr[5][5]; // 변수를 넣을수없다
	int ** ppDarr = NULL;

	ppDarr = (int**) malloc(20); //변수를 넣을수있다 ex) malloc(count*sizeof(int))
	ppDarr[0] = (int*) malloc(20);
	ppDarr[1] = (int*) malloc(20);
	ppDarr[2] = (int*) malloc(20);
	ppDarr[3] = (int*) malloc(20);
	ppDarr[4] = (int*) malloc(20);

	ppDarr[0][0] = 10;
	dArr[0][0] = 10;

}