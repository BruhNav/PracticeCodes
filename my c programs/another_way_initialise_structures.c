#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee pranav={100, 34.4,"pranav"};
    printf("the employee name is:%s\n",pranav.name);
    printf("the employee code is:%d\n",pranav.code);
    printf("the employee salary is:%f\n",pranav.salary);

    return 0;
}