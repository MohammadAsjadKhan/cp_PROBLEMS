#include <stdio.h>
int main()
{
    int T,N,power;
    scanf("%d\n",&T);
    for (int i = 0; i < T; i++)
    {
        power = 0;
        scanf("%d",&N);
        printf("1 1");
        while(power < N/2)
        {
            printf("0");
            power++;
        }
        printf("\n");
    }
    return 0;
}
