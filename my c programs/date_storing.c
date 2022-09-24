#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
}date;
void display(date d)
{
    printf("the date is %d/%d/%d\n", d.day,d.month,d.year);
}
int compare(date d1,date d2)
{
    if ((d1.year>d2.year)||((d1.year==d2.year)&&(d1.month>d2.month))||((d1.year==d2.year)&&(d1.month==d2.month)&&(d1.day>d2.day)))
    {
        printf("the date %d/%d/%d occours later to the date %d/%d/%d",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    }
    else
    {
        printf("the date %d/%d/%d occours before to the date %d/%d/%d",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    }  
}
int main()
{
    date d1= {9 ,8 ,2021};
    display(d1);
    date d2= {9 ,7,2021};
    display(d2);
    compare(d1,d2);
    return 0;
}