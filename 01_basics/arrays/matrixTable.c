#include<stdio.h>

void ptArray(int *arr){
    for (int i = 0; i < 3; i++)
    {
        int temp=*(&arr[i*10]);
        printf(" \nThe Table of %d\n",temp);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d =%d\n",temp,j+1,*((&arr[i*10])+1*j));
        }
         
        
    }
    
}
int main(){
    
    int arr[3][10],Table[3]={2,7,9};
    for (int i = 0; i < 3; i++) 
    {
        int temp=Table[i];
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=temp*(j+1);
        }
        
    }
    printf("\nthis is normal Traversal\n");
    for (int i = 0; i < 3; i++)
    {
        int temp=arr[i][0];
         printf(" \nThe Table of %d\n",temp);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d =%d\n",temp,j+1,arr[i][j]);
        }
        
    }
    printf("\n This is Functional Traversal\n");
    ptArray(arr);
    

    return 0;
}