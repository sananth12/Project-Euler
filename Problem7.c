#include<stdio.h>
int main()
{
    int flag=0,n=3,ans[10005]={0},i,j;
    ans[1]=2;
    i=2;
    while(flag==0)
    {
        int p=0;
        for(j=n/2 +1;j>1;j--)
         {
            if(n%j==0)
            p++;
         }
         if(p==0)
          {
            ans[i]=n;
            i++;
          }
          if(i==10002)
           flag++;

          n++;

    }
    printf("%d\n",ans[10001]);
    getch();
return 0;
}
