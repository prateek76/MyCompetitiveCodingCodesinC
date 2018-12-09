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

void reverse_linked_list(struct node **head,int k) {
    int cnt = 0;
    node* prev,* cur,* pnext;
    if(head == NULL) {
        return NULL;
    }
    prev = NULL;
    cur = *head;
    do{
        pnext = cur->next;
        cur->next = prev;
        prev = cur;
        cur = pnext;
        cnt++;
    } while (cur!=NULL);
}

int main()
{
    int t,k;
    scanf("%d",&t);
    while(t--) {
    	node* head = NULL;
    	head = malloc(sizeof(node));
    	if (head == NULL) {
    		return 0;
    	}
    	int n;
    	scanf("%d", &n);
    	node* nodes = head;
    	for (int i= 0;i < n;i++) {
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
    	scanf("%d",&k);
    	reverse_linked_list(&head,k);
    	display(head);
    	//printf("")
    }
	return 0;
}