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
} Card, *pCard; //typedef struct Cardinfo�� Card�� ���ٴ�. typedef + ����ü{} + ����Ҹ��� + ;

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
	int i,j; //���� 1) 1~10 ���� 4�� ���� �غ�����
	for (j=0; j<4; j++){
		for (i=0; i<10; i++){
			deck[i].num = i+1;
		
			printf("%d\n", deck[i].num);
		}
	}
	//���� 2) ī�带 �������

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
	

	//���� 1) ����. // �� (1~10)������ ī�尡 40���ִ�. 1~10, 1~10, 1~10, 1~10 (��Ʈ, ũ�ι�, ���̾�, �����̽�)
	//(ī�� 2���� �ް�) �¸����� ��(10,10) (9,9) (8,8) (7,7)....(1,1) (��)
}