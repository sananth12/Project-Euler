#include<stdio.h>
int main()
{
    int t=0,sum=0;
     for(t=1;t<1000;t++)
    {
           if(t%5==0 || t%3==0)
           sum+=t;
    }
    printf("%d",sum);
    getch();
return 0;
}
