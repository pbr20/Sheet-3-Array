#include <stdio.h>

int smallestnum(int n, int A[]);

int main()
{

    int N;
    int count = 0;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int sn = smallestnum(N, A);

    for (int i = 0; i < N; i++)
    {
        if (sn == A[i])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("Unlucky\n");
    }

    else
    {
        printf("Lucky\n");
    }

    return 0;
}

int smallestnum(int n, int A[])
{

    int b = A[0];

    for (int i = 1; i < n; i++)
    {
        if (b > A[i])
        {
            b = A[i];
        }
    }

    return b;
}