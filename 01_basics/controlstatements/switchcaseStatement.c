#include<stdio.h>

int main()
{
    //basic calculator
    printf("enter the two operands with a space :\n");
    int a,b,operation;
    scanf("%d %d",&a,&b);
    printf("enter the operations: 1-add, 2-sub, 3-multiply, 4-divide, 5-modularDivision :\n");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%f",a/b);
        break;
    case 5:
        printf("%d",a%b);
        break;
    
    default:
        printf("enter an valid operation");
        break;
    }
    return 0;
}