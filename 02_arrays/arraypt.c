#include<stdio.h>
void arrayPrint(int array[3][3],int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("\t%d",&array[i][j]);
        }
        
    }
    
}
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    arrayPrint(A,3);

    return 0;
}