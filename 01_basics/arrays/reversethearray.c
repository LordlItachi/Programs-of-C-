#include<stdio.h>

void reverse(int *arr,int n){
    int temp;
    int end=n/2;
    for (int i = 0; i < end; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}
int main(){
    int n;
    printf("enter the length of the array!\n");
    scanf("%d",&n);

    int arr[n];
    //int revarr[n];
    printf("enter the desired elements of the array of size %d\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
       // revarr[n-i-1]=arr[i];
    }
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        //printf("the element at %dth index is %d\n",i,revarr[i]);
        printf("the element at %dth index is %d\n",i,arr[i]);
    }
    
    return 0;
}       