#include<stdio.h>
int main()
{
    int t=0;
    long long sum=0,t1=0,t2=1,fib=1;
    while(fib<4000000)
    {
        fib+=t1;
        t1=t2;
        t2=fib;
        if(fib%2==0)
        sum+=fib;
    }
    printf("%d",sum);
    getch();
return 0;
}
