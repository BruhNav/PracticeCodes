#include<stdio.h>
int counter(char*st,char c)
{
    int num=0;
    char* ptr=st;
    while(*ptr!='\0')
    {
        if (*ptr==c)
        {
            num++;
        }
        ptr++;
    }
    return num;
}
int main()
{
    char str[20];
    char a;
    printf("enter the word\n");
    scanf("%s",&str);
    fflush(stdin);
    printf("enter the alphabet\n");
    scanf("%c",&a);
    printf("the number of times alphabet %c is repeted in the word %c is %d", a, str, counter(str,'a'));
    return 0;
}