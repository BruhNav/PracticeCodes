#include<stdio.h>
void decrypt(char *str)
{
    char *ptr=str;
    while (*ptr!='\0')
    {
        *ptr=*ptr+1;
         ptr++;
    }
}
int main()
{
    char str[]="aao kabhi haveli me";
    printf("the decrypted text is %s\n", str);
    decrypt(str);
    printf("the encrypted text is %s", str);
    return 0;
}