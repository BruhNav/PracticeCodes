#include<stdio.h>
int strlen(char *st)
{
    char *ptr=st;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
char st[]="thisworks";
printf("the length of word is %d", strlen(st));
return 0;
}