#include<stdio.h>
int main()
{
    FILE *ptr;
    int num1,num2,num3;
    ptr = fopen("pranav.txt","r");
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    fclose(ptr);
    printf("%d %d %d", num1, num2, num3);

return 0;
}