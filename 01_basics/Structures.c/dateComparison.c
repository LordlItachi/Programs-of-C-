
#include<stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
} Date;

Date Compare(Date d1,Date d2 ){
    int day,month,year;
    if ((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
    {
        return d1;
    }
    if (d1.year<=d2.year)
    {
        return d2;
    }
    else if (d1.month<d2.month)
    {
        return d2;
    }

    
    
    
    
}


int main(){
    Date d1={10,10,2020};
    Date d2={10,12,2020};
    Date result;
    result=Compare(d1,d2);

    return 0;
}