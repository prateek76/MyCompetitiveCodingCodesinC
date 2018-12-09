#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} node_t;

void display(node_t * p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

void insertAtBeg(node_t ** head, int data) {
	node_t * node = NULL;
	node = (node_t *)(malloc(sizeof(node_t)));
	node->data = data;
	node->next = *head;
	*head = node;
}

void insertAfter(node_t * head, int data, int compare) {
	node_t * node = NULL;
	node = (node_t *)(malloc(sizeof(node_t)));
	node->data = data;
	while (head->data != compare) {
		head = head->next;
	}
	node->next = head->next;
	head->next = node;
}

void deleteNode(node_t ** head, int key) {
	node_t * node = *head, *prev;
	
	if(node!=NULL && node->data == key){
		*head = node->next;
		free(node);
		return;
	}

	while (node != NULL && node->data != key) {
		prev = node;
		node = node->next;
	}

	if (node == NULL) {
		return;
	}

	prev->next = node->next;

	free(node);
}

int main()
{
	node_t * head = NULL;
	head = (node_t *)(malloc(sizeof(node_t)));
	node_t * node = head;
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		if (i < n - 1) {
			int tmp;
			scanf("%d", &tmp);
			node->data = tmp;
			node->next = (node_t *)(malloc(sizeof(node_t)));
			node = node->next;
		}
		if (i == n - 1) {
			int tmp;
			scanf("%d", &tmp);
			node->data = tmp;
			node->next = NULL;
		}
	}

	insertAtBeg(&head, 252);
	insertAfter(head, 888, 4);
	display(head);
	return 0;
}