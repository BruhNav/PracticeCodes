#include<stdio.h>
typedef struct vector
{
    int x,y;
}ve;
ve sumvector(ve a, ve b)
{
    ve result;
    result.x= a.x + b.x;
    result.y= a.y + b.y;
    return result;
}
int main()
{
    ve v1,v2;
    printf("enter the value of x and y coordinate of first vector\n");
    scanf("%d %d", &v1.x, &v1.y);
    
    printf("enter the value of x and y coordinate of second vector\n");
    scanf("%d %d", &v2.x, &v2.y);
    
    printf("the vector sum of both the vectors is %dx and %dy", sumvector(v1, v2).x, sumvector(v1, v2).y);
    return 0;
}