#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h> //Sleep //system("cts")
#include <time.h>//srand(time(0))

struct Studentinfo{
	int a;
};

typedef struct Cardinfo{
	int num;
	char shape[20];
} Card, *pCard; //typedef struct Cardinfo를 Card로 쓰겟다. typedef + 구조체{} + 대신할명의 + ;

typedef struct Playerinfo{
	int money;
	char name[20];
	Card myCard1;
	Card myCard2;
} Player;

int main()
{
	//Card card;
	//pCard pmyCard;
	//card.num = 10;
	//pmyCard = &card;
	//printf("%d\n", card.num);
	//printf("%d\n", pmyCard->num);

	Player player1;
	Player player2;
	Card deck[40];
	Card temp;
	int tempR;
	int i,j; //문제 1) 1~10 까지 4번 들어가게 해보세요
	for (j=0; j<4; j++){
		for (i=0; i<10; i++){
			deck[i].num = i+1;
		
			printf("%d\n", deck[i].num);
		}
	}
	//문제 2) 카드를 섞어보세요

	for(i=0; i<1000; i++)
	{
		tempR = rand()%40;
		temp = deck[0];
		deck[0] = deck[tempR];
		deck[tempR] = temp;
	}
	for (i=0; i<40; i++){
		printf("%d\n", deck[i].num);
	}

	player1.myCard1 = deck[0];
	player1.myCard2 = deck[1];
	player2.myCard1 = deck[2];
	player2.myCard2 = deck[3];

	

	return 0;
	

	//문제 1) 섯다. // 덱 (1~10)까지의 카드가 40장있다. 1~10, 1~10, 1~10, 1~10 (하트, 크로버, 다이아, 스페이스)
	//(카드 2장을 받고) 승리조건 예(10,10) (9,9) (8,8) (7,7)....(1,1) (합)
}