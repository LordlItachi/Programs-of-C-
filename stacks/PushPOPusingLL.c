#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node * next;
} node;

node * top=NULL;
void push(int value){
    node * newNode=(node*)malloc(sizeof(node));
    newNode->value=value;
    if (top==NULL)
    {
        newNode->next=NULL;
        top=newNode;
    }
    else{
        newNode->next=top;
        top=newNode;
    }
}
int pop(){
    int item;
    node * temp;
    if (top==NULL)
    {
        printf("\nStack Undeflow\n");
    }
    else{
        temp=top;
        item=top->value;
        top=top->next;
        free(temp);

    }
    return item;
    
}
void print(){
    node * current=top;
    if (top==NULL)
    {
        printf("\nThe Stack is Empty");
    }else
    {
        while (current!=NULL)
        {
            printf("%d\t",current->value);
            current=current->next;
        }
        
    }
    
    
}

int main(){
    push(5);
    push(4);
    push(7);
    printf("\nItem Popped :%d\n",pop());
    push(3);
    printf("\nCurrent Stack\n");
    print();

    return 0;
}