#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int T,N,K;
	int *a = malloc(sizeof(int)*10000);
    scanf("%d",&T);
    for (int i = 0; i <T; i++)
    {
        scanf("%d %d",&N,&K);
        int cond = 0;
        
        for (int j = 0; j < N; j++)
        {
            scanf ("%d",&a[j]);
        }
        for (int p = 0; p < N - 1; p++)
        {
            if (a[p] < K)
            {
                for (int r = p + 1; r < N; r++)
                {
                    if (a[p] + a[r] == K)
                    {
                        cond = 1;
                        break;
                    }
    
                }
            }
            if (cond == 1)
            {
                printf("Yes\n");
                break;
            }
            else
            {
                if (p == N - 2)
                {
                    printf("No\n");
                }
            }
        }
        
    }
    free(a);
	return 0;
}

