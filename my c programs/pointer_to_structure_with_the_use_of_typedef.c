#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

int main()
{
    emp e1;
    emp *ptr;
    *ptr=e1;
    (*ptr).code=101;
    strcpy(ptr->name,"pranav");
    // the fact that the only diffrence between last two ptr call is name and code
    return 0;
}