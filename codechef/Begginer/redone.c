#include <stdio.h>
int main()
{
    int T,N;
    long long int  mod = 1000000007,arr[1000000];
    scanf("%d",&T);
    arr[0] = arr[1]= 1;
    for(int i = 2; i < 1000000; i++) //nth = ((n-1)th*n)+ (n+(n-1)th) = (((n-1)th +1)*(n+1)) -1 //
        {
            arr[i] = (arr[i-1]*i + arr[i-1] + i)%mod;
        }
    while(T--)
    {
        scanf("%d",&N);
        printf("%lld\n",arr[N]);
    }
    return 0;
}
