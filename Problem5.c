#include<stdio.h>
int main()
{
    long long t;
    t= 232792;
    // 232792560
    while(t++)
    {
        int i=2,flag=0;
        for(i=2;i<=20 && flag==0;i++)
        {
           if(t%i!=0)
           flag++;
        }
        if(flag==0)
        {
           printf("%lld",t);
           getch();
           return 0;
        }
    }
}
