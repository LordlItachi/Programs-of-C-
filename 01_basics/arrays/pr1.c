#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,56,6,7,8,9,1039};
    //we dont provide the ampesand here to reference the address of first array element here 
    int *pt=arr;
    printf("the address that ptr has %u\n",pt);
    printf("the ptr+2 gives us %d\n",*(pt+2));
    printf("the address that ptr has %u\n",pt);

    return 0;
}