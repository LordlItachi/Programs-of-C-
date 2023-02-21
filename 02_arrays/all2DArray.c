#include<stdio.h>
#include<stdlib.h>



void printArray(int *apt,int row, int col){
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("\t%d",*apt++);
        }
        
    }
    
}
void Addition(int * apt, int * aapt , int row, int col){
    int out[row][col];
    printf("\nStart feed\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            out[i][j]=(*(apt++))+(*(aapt++));
            printf("\t%d",out[i][j]);
        }
        
    }
    printf("\nEnd feed\n");
    printArray(out,row,col);
};

void Subtraction(int *apt,int *aapt,int row, int col){
     int out[row][col];
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            out[i][j]=(*(apt++)-(*(aapt++)));
        }
        
    }
    printf("\nNow Printing Output Array\n");
    printArray(out,row,col);

};

void Multiplication(int *apt,int *aapt,int rw,int cl,int rww ,int cll ){
     int out[rw][cll];
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cll; j++)
        {
            out[i][j]=0;
            for (int k = 0; k < cl; k++)
            {
                out[i][j]+=*(apt+(i*cl)+(k))*(*(aapt+(k*cll)+(j)));
            }
                   
        }
        
    }
    printf("\n Printing Output array:\n");
    printArray(out,rw,cll); 

};
void Transpose(int *apt,int rw,int cl){
    int out[rw][cl];
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            out[j][i]=*(apt+(i*cl)+j);
        }
        
    }
    printArray(out,rw,cl);
    
}
    

int main(){
    //rw & cl : first array row and col ;
    //rww & cll : second arrays row and col;
    //op: for choosing operation to perform via switch case;
    int rw,cl,op,rww,cll;
    rw=cl=op=rww=cll=0;

    printf("\nEnter Number of rows and columns of first array with a comma between values:\n");
    scanf("%d,%d",&rw,&cl);
    printf("\nEnter number of rows and columns of second array with a comma between them:\n");
    scanf("%d,%d",&rww,&cll);

    int first[rw][cl],second[rww][cll];

    printf("\n Now enter the elements of First Array:\n");
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            scanf("%d",&first[i][j]);
        }
        
    }
    \

    printf("\n Now enter the elements of Second Array:\n");
    for (int i = 0; i < rww; i++)
    {
        for (int j = 0; j < cll; j++)
        {
            scanf("%d",&second[i][j]);
        }
        
    }

    printf("\nNow Enter the Opertion you want to perform 1-Additon, 2-Subtraction, 3-Multiplication, 4-Transpose: \n");
    scanf("%d",&op);
    switch(op)
    {

    case 1:
        if ((rw!=rww)||(cll!=cl))
        {
            printf("for Addition of Matrix , both of the matrices should of same shape/size\n");
            break;
        }
        Addition(first,second,rw,cl);
        break;

    case 2:
         if ((rw!=rww)||(cll!=cl))
        {
            printf("for Substraction of Matrix , both of the matrices should of same shape/size\n");
            break;
        }
        Subtraction(first,second,rw,cl);
        break;

    case 3:
        if (cl==rww)
        {
            Multiplication(first,second,rw,cl,rww,cll);
        }
        break;
    
    case 4:
        Transpose(first,rw,cl);
        break;
        
    default:
        printf("\nEnter a Valid Operition Number:\n");
        break;
    }

    return 0;
}