#include<stdio.h>
#include<string.h>
struct employee
{
   int code;
   float salary;
   char name[20];
};

int main()
{
    struct employee e[100];
    e[0].code=101;
    e[0].salary=34.34;
    strcpy(e[0].name,"pranav");

    return 0;
}