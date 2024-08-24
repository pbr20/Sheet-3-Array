#include <stdio.h>

void smallestsum(int n, int A[]);

int main()
{

    int T, N;

    scanf("%d", &T);

    int A[1000000];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }
        smallestsum(N, A);
    }

    return 0;
}

void smallestsum(int n, int A[])
{

    int sum;
    int finalsum = A[0] + A[1] + 2 - 1;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            sum = A[i] + A[j] + (j + 1) - (i + 1);
            if (finalsum > sum)
            {
                finalsum = sum;
            }
        }
    }
    printf("%d\n", finalsum);
}