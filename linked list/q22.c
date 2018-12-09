#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

void display(struct node *p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

struct node *reverse_linked_list(struct node *head, int k) {
	int cnt = 0;
	node *prev, *cur, *pnext;
	if (head == NULL) {
		return NULL;
	}
	prev = NULL;
	cur = head;
	while (cur != NULL && cnt < k) {
		pnext = cur->next;
		cur->next = prev;
		prev = cur;
		cur = pnext;
		cnt++;
	}

	if (pnext != NULL)
		head->next = reverse_linked_list(pnext, k);

	return prev;
}

int main()
{
	int t, k;
	scanf("%d", &t);
	while (t--) {
		node* head = NULL;
		head = malloc(sizeof(node));
		if (head == NULL) {
			return 0;
		}
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
			else if (i = n - 1) {
				int temp;
				scanf("%d", &temp);
				nodes->data = temp;
				nodes->next = NULL;
			}
		}
		scanf("%d", &k);
		head = reverse_linked_list(head, k);
		display(head);
	}
	return 0;
}