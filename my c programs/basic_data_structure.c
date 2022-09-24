#include<stdio.h>
#include<string.h>
struct employee
    {
        int code;
        char name[20];
        float salary;
    };
int main()
{
    struct employee e1;
    e1.code=100;
    e1.salary=36.57;
    strcpy(e1.name,"pranav");
    printf("the code of first employee is : %d\n", e1.code);
    printf("the name of first employee is : %s\n", e1.name);


    return 0;
} 