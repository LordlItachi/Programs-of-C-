#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct BstNode {
    int data;
    struct BstNode * left;
    struct BstNode * right;
};

//below function creates a node at given struct pointer
struct BstNode * GetNewNode(int data){
    struct BstNode * newNode= (struct BstNode *)malloc(sizeof(struct BstNode));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
//nodes will be created in the heap memory using malloc function in c 
struct BstNode *Insert(struct BstNode *root, int data){
    if (root==NULL)
    {
        root=GetNewNode(data);
    }
    else if (data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else {
        root->right=Insert(root->right,data);
    }
    return root;
 };
 bool search(struct BstNode* root, int data){
    if(root==NULL)return false;
    if(root->data == data) return true;
    else if (root->data>data){
        return search(root->left,data);
    }
    else {
        return search(root->right,data);
    }

 }

int main(){ 
    struct BstNode * rootptr = NULL;
    rootptr = Insert(rootptr,15);
    rootptr = Insert(rootptr,12);
    rootptr = Insert(rootptr,10);
    rootptr = Insert(rootptr,20);
    rootptr = Insert(rootptr,8);
    rootptr = Insert(rootptr,25);
    rootptr = Insert(rootptr,17);

    int num;
    printf("ENter the number to be searched in the Tree \n");
    scanf("%d",&num);

    bool ans=search(rootptr,num);

    if (ans)printf("True");
    else printf("False");
    

    return 0;
}