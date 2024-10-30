#include <stdio.h>

void subschecker(int n, int m, int A[], int B[]);

int main()
{

    int N, M;

    scanf("%d%d", &N, &M);

    int A[10000];
    int B[10000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int j = 0; j < M; j++)
    {
        scanf("%d", &B[j]);
    }

    subschecker(N, M, A, B);

    return 0;
}

void subschecker(int n, int m, int A[], int B[])
{
    int count = 0;
    int t = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = t; j < n; j++)
        {
            if (B[i] == A[j])
            {
                A[j] = 0;
                count++;
                t = j;
                break;
            }
        }
    }

    if (count == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}