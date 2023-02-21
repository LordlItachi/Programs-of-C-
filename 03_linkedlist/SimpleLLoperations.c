#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int info;
    struct Node * next;
} node;
node * head=NULL,*tail=NULL;

void addNode(int data){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->info=data;
    newNode->next=NULL;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    
}
void begining(int data){
    node * newNode=(node*)malloc(sizeof(node));
    newNode->info=data;
    if (head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    
}
void End(int data){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->info=data;
    newNode->next=NULL;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    
}
void afterLoc(int data,int locdata){
    node * newNode=(node*)malloc(sizeof(node));
    newNode->info=data;
    if (head==NULL)
    {
        printf("The List WAs EMpty So added at the begining\n");
        newNode->next=NULL;
        head=newNode;
        tail=newNode;
    }
    node * current=head;
    int flag=0;
    while (current!=NULL)
    {
        if(current->info==locdata){
            newNode->next=current->next;
            current->next=newNode;
            flag=1;
            break;
        }
        else{
            current=current->next;
        }
    }
    if (flag==0)
    {
        printf("\nThe Entered Node data/Loc not found\n");
    }
    
    
    
}

void display(){
    node * current=head;
    if (head==NULL)
    {
        printf("\nThe LInked List is empty \n");
        return;
    }
    printf("\nNode of the Linked List: \n");
    while (current!=NULL)
    {
        printf("\n%d",current->info);
        current=current->next;
    }
    printf("\n");
}

int main(){
    addNode(243);
    addNode(325);
    addNode(143);
    afterLoc(666,325);
    begining(111);
    End(999);
    afterLoc(777,666);
    display();
    return 0;
}