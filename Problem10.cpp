#include <iostream>
using namespace std;

const unsigned int N = 2000000L;

int main()
{
    unsigned int i, j, a[N+1];
    unsigned long long sum = 0LL;

    for(i = 2; i <= N; i++)              
        a[i]=1;

    for(i = 2; i < N; i++)
    {
        for(j = 2; j <= N/i; j++)
        {
            a[i*j]=0;                   
        }
    }

    for(i = 2; i <= N; i++)
        if(1 == a[i])
        {
            sum += i;
        }

    cout << sum << endl;
    return 0;
}
