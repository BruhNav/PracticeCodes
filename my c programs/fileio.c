#include<stdio.h>
int main()
{
    FILE* ptr;
    ptr=fopen("praav.txt", "r");
    if (ptr == NULL)
    {
        printf("this file does not exists\n");
    }
    else
    {
        char str[20];
    fscanf(ptr,"%s",&str);
    fclose(ptr);
    printf("the word in pranav.txt is %s",str);
    }
    
    




return 0;
}