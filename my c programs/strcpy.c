#include<stdio.h>
void stcp(char *st1,char *st2)
{
    int i=0;
   while (st2[i]!='\0')
   {
       st2[i]=st1[i];
       i++;
   }
   st1[i]='\0';
}
int main()
{ 
    char sta[]="this",stb[]="that";
    stcp(sta,stb);
    printf("the value of stb is %s", stb);
return 0;
}