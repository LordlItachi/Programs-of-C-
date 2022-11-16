#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("\n*** Welcome to Guess the Number Game *** \n");
    int num,nguess=1,guess;
    srand(time(0));
    num= rand()%100 + 1;
    do
    {
        printf("\nPlease pick your Guess\n");
        scanf("%d",&guess);
        if (guess<num)
        {
            printf("Nah Man Pick Higher!\n");   
        }else if (guess>num)
        {
            printf("nah dawg pick lower!\n");
        }else{
            printf("Wow you guessed it correct in following number of guess: %d",nguess);
        }
        nguess++;
        
        
    } while (guess!=num);
    
}