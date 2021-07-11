#include<stdio.h>
typedef struct complex
{
   int re, im;
}co;
void display(co c)
{
    printf("the real part of complex number is %d \n",c.re);
    printf("the imaginary part of complex number is %d \n",c.im);
}

int main()
{
    co c[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the real part of the complex number %d \n",i+1);
        scanf("%d", &c[i].re);
        
        printf("enter the imaginary part of the complex number %d \n",i+1);
        scanf("%d", &c[i].im);
    }
    for(int i=0;i<5;i++)
    {
        display(c[i]);
    }
    
    
    
    return 0;
}