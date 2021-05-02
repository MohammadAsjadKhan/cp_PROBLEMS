#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
}
int main(void)
{
    int T;
    long long int A,B, N,K,count,lcm;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld %lld %lld %lld",&N, &A, &B, &K);
        lcm = (A*B)/gcd(A,B);
        count = N/A + N/B - 2*(N/lcm);
        if (count >= K) printf("Win\n");
        else printf("Lose\n");
    }
    return 0;
}
