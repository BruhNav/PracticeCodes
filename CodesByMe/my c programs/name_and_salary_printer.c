#include<stdio.h>
int main()
{
    char name[20];
    int sal;
    printf("enter the name of the employee\n");
    gets(name);
    printf("enter the salary of the enplyee\n");
    scanf("%d",&sal);
    FILE* ptr;
    ptr=fopen("pranav.txt","w");
    fprintf(ptr,"name of the emplyee is %s\nsalary of the employee is %d",name,sal);
    fclose(ptr);


return 0;
}