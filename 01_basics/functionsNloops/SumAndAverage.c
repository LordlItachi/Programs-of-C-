#include<stdio.h>

void sum_Average(int i,int j,int *sum,float *avg){
    *sum=i+j;
    *avg=(float)*sum/2;
}
int main(){
    int i,j,sum=0;
    float avg;
    i=3;
    j=6;
    sum_Average(i,j,&sum,&avg);
    printf("The sum of numbers is %d \nand their average is %f",sum,avg);
    return 0;

}