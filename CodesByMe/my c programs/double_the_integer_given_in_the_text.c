#include<stdio.h>
int main()
{
    FILE* ptr;
    ptr=fopen("pranav.txt","r");
    int k,a;
    fscanf(ptr,"%d",&a);
    k=a*2;
    ptr=fopen("pranav.txt","w");
    fprintf(ptr,"%d",k);
    printf("%d",k);
    fclose(ptr);

return 0;
}