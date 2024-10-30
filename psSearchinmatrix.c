#include <stdio.h>

int main()
{

    int N, M;
    int X;

    scanf("%d%d", &N, &M);

    int A[100][100];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d", &X);

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
        if(count == 1){
            break;
        }
    }
    if (count == 0)
    {
        printf("will take number\n");
    }

    return 0;
}
