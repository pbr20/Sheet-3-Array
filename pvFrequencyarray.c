#include <stdio.h>

int main()
{

    int N, M;
    int count = 0;

    scanf("%d%d", &N, &M);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i <= M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == A[j])
            {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}