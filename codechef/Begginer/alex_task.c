#include <stdio.h>
unsigned long long int hcf(unsigned long long int a,unsigned long long int b);
int main()
{
    int N,T;
    unsigned long long int n[500], f_time;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            scanf("%llu",&n[i]);
        }
        f_time = n[0]*n[1]/hcf(n[0],n[1]);
        for (int j = 0; j < N - 1 ; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (n[j] > f_time || n[k] > f_time) continue;
                if (n[j]*n[k]/hcf(n[j],n[k]) < f_time) f_time = n[j]*n[k]/hcf(n[j],n[k]);
            }
        }
        printf("%llu\n",f_time);
    }
    return 0;
}
unsigned long long int hcf(unsigned long long int a,unsigned long long int b)
{
    if (b == 0) return a;
    else return hcf(b,a%b);
}
