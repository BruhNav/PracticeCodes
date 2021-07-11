#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(NULL));
    number=rand();
    printf("%d\n",number);
    //to get any number less than an integer k simply use modulus function rand%(k+1)
    // for number in a given range
    int lower=30,higher=40;
    number=(rand()%(higher-lower))+lower;
    printf("the number between 30 and 40 is %d", number); 
return 0;
}