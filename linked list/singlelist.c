#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void makelist(struct node **h) {
	struct node *first = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	/*first node setup*/
	first->data = 5;
	first->next = second;

	/*second node setup*/
	second->data = 50;
	second->next = third;

	/*third node setup*/
	third->data = 500;
	third->next = NULL;

	/*store the address of first node in head*/
	*h = first;
}

void display(struct node *p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("NULL");
}

int main()
{
	struct node *head;
	head = NULL;
	makelist(&head);
	display(head);
	return 0;
}