#include<stdio.h>

int main(){
    int i=65;
    int * ptr=&i;
printf("The value of ptr is %u\n",ptr);
printf("The value at ptr is %d\n",*ptr);
ptr++;
printf("The value at ptr is %d\n",*ptr);
printf("The value of ptr is %u\n",ptr);
ptr++;
printf("The value of ptr is %u\n",ptr);
printf("The value at ptr is %d\n",*ptr);

    int *bptr=&i;
    printf("the result of ptr-bptr is %d",ptr-bptr);
    ptr--;
    printf("the result of ptr-bptr is %d",ptr-bptr);


    return 0;
}