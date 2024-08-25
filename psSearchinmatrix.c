        //wrong answer on test 23

#include <stdio.h>

int main()
{

    int N, M;
    long long int X;

    scanf("%d%d", &N, &M);

    long long int A[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%lld", &A[i][j]);
        }
    }

    scanf("%lld", &X);

    int count =0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == X)
            {
                printf("will not take number\n");
                count = 1;
                break;
            }
        }
    }
    if (count != 1)
    {
        printf("will take number\n");
    }

    return 0;
}
