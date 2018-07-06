#include <stdio.h>
#include <stdlib.h>
struct NODE{
	struct NODE * next;
	int data;
};
int main()
{
	//linked list
	struct NODE * head = (struct NODE*) malloc (sizeof(struct NODE));
	struct NODE * node1 = (struct NODE*) malloc (sizeof(struct NODE));
	struct NODE * node2 = (struct NODE*) malloc (sizeof(struct NODE));
	struct NODE * node3 = (struct NODE*) malloc (sizeof(struct NODE));
	
	// ㅁ->ㅁ->ㅁ->null

	struct NODE * cur; //for문에 i 같은 존재
	head -> next = node1;
	node1 -> data = 10;

	node1 -> next = node2;
	node2 -> data = 100;

	node2 -> next = node3;
	node3 -> data = 50;

	node3 ->next = NULL;
	cur = head -> next; // cur가 처음에는 헤드를 읽고 그다음에 node1을 읽는다
	while(cur != NULL){
		printf("%d\n", cur->data);
		cur = cur -> next; //head -> node1 -> node2-> etc -> null then stop
	}

}