#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} node_t;

void display(node_t * head) {
	node_t * current = head;

	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
}
/*/*/*/*/*/
/*/*adding a item at the end of the list*/
/*/*/

void push(node_t * head, int val) {
	node_t * current = head;
	while (current->next != NULL) {
		current = current->next;
	}

	/*now add a new variable*/
	current->next = malloc(sizeof(node_t));
	current->next->data = val;
	current->next->next = NULL;
}

int main()
{
	
	return 0;
}