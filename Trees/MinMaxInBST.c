#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

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
 int FindMin(struct BstNode* root){
    if (root==NULL)
    {
        return -1;
    }
    else if (root->left==NULL)
    {
        return root->data;
    }
    
    else{
        while (root->left!=NULL)
        {
            return FindMin(root->left);
        }      
    }
    
 }
 int FindHeight(struct BstNode* root){
    if (root==NULL)
    {
        return -1;
    }else{
        int leftheight=FindHeight(root->left);
        int rightheight=FindHeight(root->right);
        return (fmax(leftheight,rightheight) + 1);
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

   int height=FindHeight(rootptr);
   printf("The height is %d",height);
    

    return 0;
}