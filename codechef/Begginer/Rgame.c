#include <stdio.h>
#define mod 1000000007
int main()
{
    int T,N,i,j;
    long long int seq,sum,a,power;
    scanf("%d",&T);
    while(T--)
    {
        sum = 0;
        scanf("%d",&N);
        scanf("%lld",&a);
        seq = 2*a;
        power = 2;
        for (j = 1; j < N + 1; j++)
        {
            scanf("%lld",&a);
            sum = (sum*2)%mod;
            sum = (sum + (seq*a)%mod )%mod;
            seq= (seq + (power*a)%mod )%mod;
            power = (power*2)%mod;
            
        }
        printf("%lld\n",sum);
    }
    

    return 0;
}
