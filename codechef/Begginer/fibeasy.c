#include <stdio.h>
int main(void)
{
    int a[60];
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<60;i++)
    a[i] = (a[i-1] + a[i-2])%10;
    int T;
    long long int N,index;
    scanf("%d",&T);
    while(T--)
    {
        index = 1;
        scanf("%lld",&N);
        while(N > 1) 
        {
            index*=2;
            N/=2; 
        }
        printf("%d\n",a[(index % 60) - 1]);
    }
    return 0;
}
    


