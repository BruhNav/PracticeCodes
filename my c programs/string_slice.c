#include<stdio.h>
void slice(char *st, int a, int b)
{
 int i=0;   
    for(;(i+a)<=b;i++)
    {
        st[i]=st[i+a];
    }
    st[i]='\0';
}
int main()
{
    char st[]="pranav";
    slice(st, 1, 3);
    printf("the sliced word is %s", st);
return 0;
}