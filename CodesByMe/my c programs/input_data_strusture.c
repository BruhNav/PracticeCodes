#include<stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
int main()
{
    struct employee e1,e2,e3;
    printf("enter the employee 1 name\n");
    scanf("%s",&e1.name);
    printf("enter the employee 1 salary\n");
    scanf("%f",&e1.salary);
    printf("enter the employee 1 code\n");
    scanf("%d",&e1.code);
    printf("enter the employee 2 name\n");
    scanf("%s",&e2.name);
    printf("enter the employee 2 salary\n");
    scanf("%f",&e2.salary);
    printf("enter the employee 2 code\n");
    scanf("%d",&e2.code);
    printf("enter the employee 3 name\n");
    scanf("%s",&e3.name);
    printf("enter the employee 3 salary\n");
    scanf("%f",&e3.salary);
    printf("enter the employee 3 code\n");
    scanf("%d",&e3.code);
    printf("done");
    return 0;
}