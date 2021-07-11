#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int*ptr;
    printf("enter the number of array to printed\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}