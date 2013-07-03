#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
    /*int t;
    scanf("%d",&t);
    while(t--)
    {

    }*/
    int i,n[100005]={0};
    for(i=0;i<10000;i++)
    {
        int j,sum=0;
        for(j=1;j< i/2 +1 ;j++)
        {
            if(i%j==0)
            sum+=j;
        }
        n[i]=sum;
    }
    int ans=0,j;

    for(i=2;i<10000;i++)
    {
     if( n[n[i]]==i && n[i]<10000 && i!=n[i])
     {
          printf("%d %d\n",n[n[i] ],i);
          ans+=i;
     }
    }
    printf("200=%d %d",n[220],ans);

return 0;
}
