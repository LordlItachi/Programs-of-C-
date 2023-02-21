#include<stdio.h>
#include<stdlib.h>

void insert(int arr[],int size,int item){
    int i=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i]==-1)
        {
            arr[i]=item;
            printf("\nItem %d Added Successfully\n",item);
            break;
        }
    }
    if (i==size)
    {
        printf("\nThe Array is Full ! Delete someting before Adding\n");
    }

}
void del(int arr[],int size,int item){
    int i=0;
    for ( i = 0; i < size; i++)
    {
        if (arr[i]==item)
        {
            arr[i]=-1;
            printf("\nItem %d Deleted Successfully!\n",item);
            break;
        } 
    }
    if (i==size)
    {
        printf("\nThe element was not Found \n");
    } 
}
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {   
        if (arr[i]==-1)
        {
            printf("\t%s","empty");
        }else
        
        printf("\t%d",arr[i]);
    }
    
}

void main(){
    int size=10;
    int arr[10]={1,2,3,2,3,55,76,-1,-1,-1};
    insert(arr,size,543);
    insert(arr,size,3214);
    del(arr,size,3214);
    display(arr,size);
}

    
    