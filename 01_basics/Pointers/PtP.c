
#include<stdio.h>

int main(){
    int var=93;
    int *ptv=&var;
    int **ptptv=&ptv;
    printf("The var is %d, \nptv is %u, \nptptv is %u, \nvalue at *ptv is %d, \nvalue at **ptptv is %d",var,ptv,ptptv,
    *ptv,**ptptv);
    return 0;
}