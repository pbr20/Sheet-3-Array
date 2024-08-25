        //wrong ans on test 4

#include <stdio.h>

void subschecker(int n, int m, int A[], int B[]);

int main()
{

    int N, M;

    scanf("%d%d", &N, &M);

    int A[N];
    int B[M];

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
    int temp1 = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[i] == A[j])
            {
                if (j >= temp1)
                {
                    count++;
                     temp1 = j;
                    break;
                }
               
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