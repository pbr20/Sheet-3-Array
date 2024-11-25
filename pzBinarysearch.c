#include <stdio.h>

int main()
{

    int N, Q;

    int A[100000];

    scanf("%d%d", &N, &Q);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < Q; i++)
    {
        int a, f = 0;
        scanf("%d", &a);
        for (int i = 0; i < N; i++)
        {
            if (a == A[i])
            {
                printf("found\n");
                f = 1;
                break;
            }
        }
        if (f != 1)
        {
            printf("not found\n");
        }
    }

    return 0;
}