#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of which table is to be generated\n");
    scanf("%d",&n);
    FILE*ptr;
    ptr=fopen("pranav.txt","w");
    for (int i = 1; i != 11; i++)
    {
        fprintf(ptr,"%d X %d = %d\n", n, i, (i*n));
    }
    

return 0;
}