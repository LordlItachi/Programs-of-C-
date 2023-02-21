#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct employee {
        int salary;
        float hike;
        char name[30];
    };
    struct employee emp;
    emp.salary=1000;
    emp.hike=12;
    strcpy(emp.name,"Ayyo");
    struct employee *sptr=&emp;

    printf("\nVia Instance Name\n");
    printf("\nThe salary of employee is %d",emp.salary);
    printf("\nThe Hike of employee is %f",emp.hike);
    printf("\nThe name of employee is %s",emp.name);

    printf("\nVia just Pointer\n");
    printf("\nThe Salary of employee is %d",(*sptr).salary);
    printf("\nThe Hike of employee is %f",(*sptr).hike);
    printf("\nThe Name of employee is %s",(*sptr).name);
    
    printf("\nVia Arrow Operator{ It dereferences the pointer and then gives us the value }\n");
    printf("\nThe Salary of employee is %d",sptr->salary);
    printf("\nThe Hike of employee is %f",sptr->hike);
    printf("\nThe Name of employee is %s",sptr->name);
    return 0;
}