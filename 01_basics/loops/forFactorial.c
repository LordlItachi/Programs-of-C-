#include<stdio.h>

int main(){
    printf("enter the number of which you want the factorial of : \n");
    int num , fact=1;
    scanf("%d",&num);
    for (int i = 1; i < num+1; i++)
    {
        fact*=i;
    }
    printf("The Factorial of %d is %d",num,fact);
    return 0;
    
}