#include <stdio.h>

int main()
{

    int N, M;
    int count = 0;

    scanf("%d%d", &N, &M);

    int A[100000];
    int B[100000];

    for (int i = 0; i < 100000; i++)
    {
        B[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int temp = A[0];
    B[A[0] - 1] = 1;

    for (int i = 1; i <= N; i++)
    {

        if (temp == A[i])
        {
            B[A[i] - 1]++;
        }
        else
        {
            temp = A[i];
            B[A[i] - 1]++;
        }
    }

    for (int i = 0; i < M; i++)
    {
        printf("%d\n", B[i]);
    }

    return 0;
}
