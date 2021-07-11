#include<stdio.h>
int main()
{
    FILE* ptr;
    char c;
    ptr = fopen("pranav.txt", "r");
    
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);//fgetc automatically moves to next character hence no increment is required here
    }
    fclose(ptr);
    
return 0;
}