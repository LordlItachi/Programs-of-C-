#include<stdio.h>
typedef struct twoDvector{
    int x;
    int y;
} vctr;

int sumVector(vctr v1,vctr v2,vctr * vptr){
    vptr->x=v1.x+v2.x;
    vptr->y=v1.y+v2.y;
}
vctr directSum(vctr v1, vctr v2){
    int a, b;
    a=v1.x+v2.x;
    b=v1.y+v2.y;
    vctr result={a,b};
    return result;
}

int main(){
    vctr v1={1,2};
    vctr v2={2,3};
    vctr vout, vout2;
    sumVector(v1,v2,&vout);
    vout2=directSum(v1,v2);
    printf("The first resulting Vector is %di+%dj\n",vout.x,vout.y);
    printf("The second resulting Vector is %di+%dj\n",vout2.x,vout2.y);
    

    return 0;
}