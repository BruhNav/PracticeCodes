#include<stdio.h>
int main()
{
    FILE* ptr1;
    FILE* ptr2;
    char c;
    ptr1=fopen("pranav.txt","r");
    ptr2=fopen("pranavpaste.txt","w");
    c = fgetc(ptr1);
    while (c!=EOF)
    {
        fputc(c,ptr2);
        fputc(c,ptr2);
        c = fgetc(ptr1);   
    }
    printf("this programme was successful");
    
return 0;
}