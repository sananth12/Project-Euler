#include<stdio.h>
int b=0;
void p(int a)
{
   int A=a;
   int k=0,i=0;
   while(a>0)
   {k*=10;
     k+=(a%10);
     a/=10;
     i++;
   }
   if(k==A)
     b=1;
   else
     b=0;
}
int main()
{
    int t,prod;
    int x=500,y=100,big=0;
    while(x<1000)
    {
           y=500;
           while(y<1000)
           {
              prod=x*y;
              p(prod);
              if(b==1)
              {
                if(prod>big)
                 big=prod;
              }
              y++;
           }
           x++;
    }
    printf("%d",big);
getch();
return 0;

}
