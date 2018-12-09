#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

void display(struct node *p) {
	while (p != NULL) {
		printf("%d\n", p->data + 1);
		p = p->next;
	}
}

int main()
{
	node* head = NULL;
	head = malloc(sizeof(node));
	int n;
	scanf("%d", &n);
	node* nodes = head;
	for (int i = 0;i < n;i++) {
		if (i < n - 1) {
			int temp;
			scanf("%d", &temp);
			nodes->data = temp;
			nodes->next = malloc(sizeof(node));
			nodes = nodes->next;
		}
		else if (i == n - 1) {
			int temp;
			scanf("%d", &temp);
			nodes->data = temp;
			nodes->next = NULL;
		}
	}
	printf("\n");
	display(head);
	return 0;
}