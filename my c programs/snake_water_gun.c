#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snake_water_gun(char you , char com)
{
    if (you=='s'&&com=='w')
    {
        return 1;
    }
    else if (you=='w'&&com=='s')
    {
        return -1;
    }
    else if (you=='w'&&com=='g')
    {
        return 1;
    }
    else if (you=='g'&&com=='w')
    {
        return -1;
    }
    else if (you=='g'&&com=='s')
    {
        return 1;
    }
    else if (you=='s'&&com=='g')
    {
        return -1;
    }
    else if (you==com)
    {
        return 0;
    }
}
int main()
{
    char you,com;
    srand(time(NULL));
    int k=rand()%3;
    if (k=0)
    {
        com='s';
    }
    else if (k=1)
    {
        com='w';
    }
    else if (k=2)
    {
        com='g';
    }    
    printf("choose among snake(s) water(w) and gun(g)\n");
    scanf("%c",&you);
    int r=snake_water_gun(you,com);
    if (r==1)
    {
        printf("congratulations you win the game\n");
    }
    else if (r==-1)
    {
        printf("haha you suck\n");
    }
    else if (r==0)
    {
        printf("what the hell man its a tie\n");
    }
    printf("you chose %c and computer chose %c\n",you,com);

    
       

return 0;
}