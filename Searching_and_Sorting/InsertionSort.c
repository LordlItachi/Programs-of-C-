#include<stdio.h>
#include<stdlib.h>

int * insertionSort(int arr[],int n){
    int key, j, i=1;
    for (int i = 1; i < n; i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
    
}
int main(){
    int arr[10]={3,4,54,43,4324,5,543,5,24,5};
    int n=10;
    int *aptr=insertionSort(arr,n);
    printf("\nThe sorted List is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}