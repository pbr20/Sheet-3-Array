#include <stdio.h>



void maxn(int n, int A[]);

int main()
{

    int t, N;

    scanf("%d", &t);

    int A[100000];

    for (int i = 0; i < t; i++)
    {

        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }

        maxn(N , A);
    }

    return 0;
}



void maxn(int n, int A[])
{

    int max;

    for (int i = 0; i < n; i++)
    {
        max = A[i];

        for (int j = i; j < n; j++)
        {

            if (max < A[j])
            {
                max = A[j];
            }
             printf("%d ", max);
        }
          
    }
    printf("\n");
 
}
