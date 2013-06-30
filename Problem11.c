#include<stdio.h>
int main()
{

    long long fact=0,i,n=12375,flag=0;
    while(flag==0)
    {
        fact=0;
        long long k=(n*(n+1))/2;
        for(i=k/2 +1;i>=1;i--)
         if(k%i==0)
          fact++;

        if(fact>500)
         {
             printf("The triangle number is: %lld",k);
             flag++;
         }
          printf("The triangle number is: %lld",k);
         n++;
    }
    return 0;
}
