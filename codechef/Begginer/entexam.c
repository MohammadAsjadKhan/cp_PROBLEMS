#include <stdio.h>
int main()
{
    int N,T,K,E;
    long long int a[10000], marks, sum, tmp,M;
    scanf("%d",&T);
    while(T--)
    {
        marks = 0;
        scanf("%d %d %d %lld",&N, &K, &E, &M);
        for (int i = 0; i < N-1; i++)
        {
            sum = 0;
            for (int j = 0; j < E ; j++)
            {
                scanf("%lld",&tmp);
                sum += tmp;
            }
            a[i] = sum;
        }
        for (int p = 0; p < E-1; p++)
        {
            scanf("%lld",&tmp);
            marks+= tmp;
        }
        for (int q = 0; q < N - 1; q++)
        {
            for (int r = q + 1; r < N - 1; r++)
            {
                if (a[q] < a[r])
                {
                    tmp = a[q];
                    a[q] = a[r];
                    a[r] = tmp;
                }
            }
        }
        tmp = a[K - 1] - marks + 1;
        if (tmp <= 0) printf("%lld\n", 0LL);
        else
        {
            if (tmp <= M) printf("%lld\n",tmp);
            else printf("Impossible\n");
        }
    }
    return 0;
}
