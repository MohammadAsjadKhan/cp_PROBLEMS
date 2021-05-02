#include <stdio.h>

int main(void) {
	int T,N,K;
	scanf("%d",&T);
	for (int i = 0; i < T; i++)
	{
	    scanf("%d %d",&N, &K);
	    int a[N],tmp;
	  
	    for (int j = 0; j < N; j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    
	    for (int i = 0; i < N; i++)
	    {
	        
	        for (int j = i+1; j < N; j++)
	        {
	            if (a[i] > a[j])
	            {
	                tmp = a[j];
	                a[j] = a[i];
	                a[i] = tmp;
	               
	            }
	        }
	        
	    }
	        
	    int count_R = 0, count_L = 0;
	    long long int comb = 1;
	        for (int i = K ; i < N; i++)
	        {
	            if (a[i] == a[K-1])
	            {
	                count_R++;
	            }
	        }
	        for (int i = 0 ; i < K - 1; i++)
	        {
	            if (a[i] == a[K-1])
	            {
	                count_L++;
	            }
	        }
	        int tot = count_L + count_R + 1;
	        for (int i = 0; i < count_L + 1; i++)
	        {
	            comb = comb*(tot - i)/(i + 1) ;
	        }
	        printf("%lld\n",comb);
	        
	        
	}
 return 0 ;
}

