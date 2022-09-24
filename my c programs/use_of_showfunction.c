#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;
void show(emp e)
{
    printf("the name of the employee is %s\n",e.name);
    printf("his code is %d\n", e.code);
    printf("salary given per month is %f\n", e.salary);
}


int main()
{
    emp e1;
    e1.code=100;
    e1.salary=45.3;
    strcpy(e1.name,"pranav");
    show(e1);
    return 0;
}