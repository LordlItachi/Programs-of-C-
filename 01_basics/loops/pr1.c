#include<stdio.h>

int main()
{
    int sum=0;
    for (int i = 0; i < 11; i++)
    {
        sum+=i*8;
    }
    printf("Sum of the MUltiplication table of 8 is %d",sum);
    return 0;
    
}