#include<stdio.h>
#include<stdlib.h>

int * Sort(int arr[],int pass){
    while (pass)
    {
        for (int i = 0; i < pass; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        pass--;
    }
    return arr;
}
int main(){
    const int n=10;
    int arr[10]={3,4,53,3,4,5,43,3,2,1};
    int *ptr=Sort(arr,n-1);
    printf("\nThe Sorted List is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
    
}
