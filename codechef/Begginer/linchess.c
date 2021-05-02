//Author: Codechef//

#include <stdio.h>
int main(void) {
	int T,N,K;
	scanf("%d\n",&T);
	for (int i = 0; i < T; i++)
    {
        scanf("%d %d",&N,&K);
        int tests[N];
        int count = 0, winner = -1,turns = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d",&tests[j]);
            if (K % tests[j] == 0)
            {
                if (count == 0)
                {
                    winner = tests[j];
                    turns = K/tests[j] - 1 ;
                    count = 1;
                }
                else{
                    if (K/tests[j] -1 < turns)
                    {
                        winner = tests[j];
                        turns = K/tests[j] - 1;
                    }
                }
            }
        }
        printf("%d\n",winner);
    }
    
    return 0;
}

