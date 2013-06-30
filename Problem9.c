#include<stdio.h>
int main()
{

int a=0,b=0,c=0;

for(a=1;a<1000;a++)
{
    for(b=a;b<1000;b++)
    {
        for(c=b;c<1000;c++)
        {
            if(a+c+b==1000)
            {

            int s=(a*a)+(b*b);
            if( s== (c*c) )
             printf("%d",a*b*c);
            }
        }
    }
}

return 0;
}
