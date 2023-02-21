#include<stdio.h>

int main(){
    int a[7]={1,2,3,4,5,6,80},b[7]={2,3,4,5,6,7,90},c[20];
    int n1=7,n2=7, i , j , k;
    i=j=k=0;
    while (i<n1&&j<n2)
    {
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    if (i<n1)
    {
        while (i<n1)
        {
            c[k++]=a[i++];
        }
    }
    else
    {
        while (j<n2)
        {
            c[k++]=b[j++];
        }
        
    }
    printf("Merged Array is :\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\n",c[i]);
    }
    
    
    
    
    




}