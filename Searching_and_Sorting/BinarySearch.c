#include<stdio.h>
#include<stdlib.h>


int binarySearch(int arr[],int item, int low , int high){
    if (high>=low)
    {
        int mid=(high+low)/2;
        if (arr[mid]==item)
        {
            return mid;
        }
        else if (arr[mid]>item)
        {
            return binarySearch(arr,item,low,mid-1);
        }
        else {
            return binarySearch(arr,item,mid+1,high);
        } 
    }
    else{
        return -1;
    }
    
}

int main(){
    int n=10;
    int arr[10]={1,2,3,3,4,5,5,6,6,7};
    int item=5;
    int h,l,high,low,flag=-1;
    h=high=n-1;
    l=low=0;
    while (high>=low)
    {
        int mid=(high+low)/2;
        if (arr[mid]==item)
        {
            flag=1;
            printf("\nItem found at Location %d\n",mid+1);
            break;
        }else if (arr[mid]>item)
        {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    if (flag==-1)
    {
        printf("\nItem was not found in the List\n");
    }
    
    
    int result= binarySearch(arr,item,l,h);
    if (result!=-1)
    {
        printf("\nThe Item was found at Location %d \n",result+1);    
    }else{
        printf("\n The Item was not found in the List\n");
    }
    
}