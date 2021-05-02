#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],even[100000],odd[100000];
    int T, N, pairs;
    int even_count , odd_count;
    scanf("%d",&T);
    while(T--)
    {
        even_count = 0, odd_count = 0;
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2 == 0)
            {
                even[even_count] = i;
                even_count++;
            }
            else
            {
                odd[odd_count] = i;
                odd_count++;
            }
        }
        pairs = 0;
        int n = 0;
        for (int m = 0; m <even_count; m++) 
        {
            for ( n; n < odd_count; n++)
            {
                if (even[m] < odd[n])
                {
                    pairs+= odd_count - n;
                    break;
                }
            }
        }
        printf ("%d\n",pairs);
         
    }

    return 0;
}
