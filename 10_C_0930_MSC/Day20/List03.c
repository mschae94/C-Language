#include <stdio.h>

#include <stdlib.h>

struct NODE{
	struct NODE * next;
	int data;
};

void addFirst(struct NODE* target, int data)
{
	struct NODE* newNode = (struct NODE*)malloc (sizeof(struct NODE));
	newNode -> next = target -> next;
	newNode -> data = data;
	target -> next = newNode;
}
int main()
{
	struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));
	struct NODE* cur;
	head ->next = NULL;
	addFirst(head, 10);
	addFirst(head, 11);
	addFirst(head, 12);
	addFirst(head, 13);

	cur = head -> next;

	while (cur != NULL)
	{
		printf("%d\n", cur -> data);
		cur = cur -> next;
	}
}