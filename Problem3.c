#include<stdio.h>
int main()
{
    long long t=600851475143;
    long long i=6000;
    while(i++)
    {
       if(t%i==0)
       {
          long long  j=i%2 +1,flag=0;
          while(j-- && flag==0)
          {
            if(i%j==0)
            flag++;
          }
          if(flag!=0)
          {
             printf("%lld",i);
             getch();
             return 0;
          }
       }
    }
return 0;
}
