#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
    int data;
    struct stack * next;
} stacky;


void push(stacky ** root,int data){
    stacky * sunnyNode = (stacky *)(malloc(sizeof(stacky))); 
    sunnyNode->data = data;
    sunnyNode->next = *root;
    *root = sunnyNode;
    return;
}

int isempty(stacky * root){
    return !root;
}

int peek(stacky * root){
    if(isempty(root))
        return -1;
    return root->data;
}

int pop(stacky ** root){
    if(isempty(root))
        return -1;
    stacky* temp = *root;
    *root = temp->next;
    int poped = temp->data;
    free(temp);
 
    return poped;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[1000006];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    stacky * root = NULL;
    int max = 0,cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            push(&root,arr[i]);
            if(cnt>max)
                max = cnt;
            //cnt=0;
        } else {
            if(peek(root) == (-1)*arr[i] && !isempty(root))
                cnt+=2;
            if(cnt>max)
                max = cnt;
            pop(&root);
        }
    }
    printf("%d",max);
    return 0;
}