#include<stdio.h>
#include<time.h>

int naturalSum(__int64 n);
int main(){
    printf("enter the nth term: \n");
    __int64 num;
    scanf("%ld",&num);
    time_t begin,end;
    time(&begin);

    printf("The sum of natural numbers till %d is %d",num,naturalSum(num));
    time(&end);
    time_t elasped = begin-end;
    printf("The time taken by the program is %ld",elasped);
    return 0;

}
int naturalSum(__int64 n){
    if (n==0||n==1)
    {
        return n;   
    }
    else {
        return n+naturalSum(n-1);
        }
    
}