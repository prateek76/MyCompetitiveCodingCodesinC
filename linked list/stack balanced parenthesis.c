#include<stdio.h>
#include<stdlib.h>

typedef struct stackNode
{
	int data;
	struct stackNode * next;
} stack_t;

struct stackNode* newNode(int data)
{
	stack_t* newNode = (stack_t*)(malloc(sizeof(stack_t)));
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

int isEmpty(stack_t * root)
{
	return !root;
}

void push(stack_t ** root,int data)
{
	stack_t* stackNode = newNode(data);
	stackNode->next = *root;
	*root = stackNode;
}

int pop(stack_t** root)
{
	if(isEmpty(*root)){
		return -1;
	}
	stack_t* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);
	
	return popped;
}

int peek(stack_t * root)
{
	if(isEmpty(root))
		return -1;
	return root->data;
}

int main(){
	stack_t* root = NULL;
	
	push(
}