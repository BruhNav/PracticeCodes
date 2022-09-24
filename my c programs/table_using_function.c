#include<stdio.h>
void printable(int *multi,int num, int k)
{
        printf("the multiplication table of %d:\n", num);
        for(int i=0;i<k;i++)
        {
                multi[i]=num*(i+1);
        }
        for(int i=0;i<k;i++)
        {
                printf("%dX%d=%d\n", num, i+1, multi[i]);
        }
        printf("********************************************************\n\n");
}
int main()
{
int multi[3][10];
{
        printable(&multi[0][10],2,10);
        printable(&multi[1][10],7,10);
        printable(&multi[2][10],9,10);   
}


        return 0;
    
}